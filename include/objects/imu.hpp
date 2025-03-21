#pragma once

#include <cmath>

namespace objects
{
struct Quaternion
{
 double x, y, z, w;   
};
struct xyz
{
    double x, y, z;
};
struct EulerAngles
{
    double roll, pitch, yaw;
};

EulerAngles quaternions_to_euler(Quaternion q);
Quaternion euler_to_quaternions(const EulerAngles& angles);

struct imu
{
xyz accel;
Quaternion q;
EulerAngles angles;
xyz ang_vel;
};
}