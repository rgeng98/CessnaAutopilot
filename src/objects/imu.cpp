#include <objects/imu.hpp>


namespace objects
{
EulerAngles quaternions_to_euler(Quaternion q)
{
    EulerAngles angles;
    
    // Ensure quaternion is normalized
    double norm = std::sqrt(q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z);
    double w = q.w / norm;
    double x = q.x / norm;
    double y = q.y / norm;
    double z = q.z / norm;

    // Roll (x-axis rotation)
    double sinr_cosp = 2.0 * (w * x + y * z);
    double cosr_cosp = 1.0 - 2.0 * (x * x + y * y);
    angles.roll = std::atan2(sinr_cosp, cosr_cosp);

    // Pitch (y-axis rotation)
    double sinp = 2.0 * (w * y - z * x);
    if (std::abs(sinp) >= 1) {
        // Use 90 degrees if out of range
        angles.pitch = std::copysign(M_PI / 2, sinp);
    } else {
        angles.pitch = std::asin(sinp);
    }

    // Yaw (z-axis rotation)
    double siny_cosp = 2.0 * (w * z + x * y);
    double cosy_cosp = 1.0 - 2.0 * (y * y + z * z);
    angles.yaw = std::atan2(siny_cosp, cosy_cosp);

    return angles;
};

Quaternion euler_to_quaternions(const EulerAngles& angles)
{
    Quaternion  q; 
    // Abbreviations for the angles
    double cr = std::cos(angles.roll * 0.5);
    double sr = std::sin(angles.roll * 0.5);
    double cp = std::cos(angles.pitch * 0.5);
    double sp = std::sin(angles.pitch * 0.5);
    double cy = std::cos(angles.yaw * 0.5);
    double sy = std::sin(angles.yaw * 0.5);

    // Calculate quaternion components
    q.w = cr * cp * cy + sr * sp * sy;
    q.x = sr * cp * cy - cr * sp * sy;
    q.y = cr * sp * cy + sr * cp * sy;
    q.z = cr * cp * sy - sr * sp * cy;

    // Normalize the quaternion
    double norm = std::sqrt(q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z);
    if (norm > 0.0) {
        q.w /= norm;
        q.x /= norm;
        q.y /= norm;
        q.z /= norm;
    }

    return q;
};
}