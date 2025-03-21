#include <database/database.hpp>

namespace database
{
    database::database(subscriber::msgSubscriber<gazebo::msgs::IMU>* inSubscriber){
        imuSubscriber = inSubscriber;
    };
    objects::imu database::getIMUData()
    {
        // ignition::msgs::IMU imuMsg = imuSubscriber->getMessageData();
        objects::imu data;
        // Accessing IMU message data
        // const ignition::msgs::Quaternion& orientation = imuMsg.orientation();
        // const ignition::msgs::Vector3d& angular_velocity = imuMsg.angular_velocity();
        // const ignition::msgs::Vector3d& linear_acceleration = imuMsg.linear_acceleration();
        // data.q.x =  orientation.x();
        // data.q.y =  orientation.y();
        // data.q.z =  orientation.z();
        // data.q.w =  orientation.w();

        // data.ang_vel.x = angular_velocity.x();
        // data.ang_vel.y = angular_velocity.y();
        // data.ang_vel.z = angular_velocity.z();
        
        // data.accel.x = linear_acceleration.x();
        // data.accel.y = linear_acceleration.y();
        // data.accel.z = linear_acceleration.z();

        return data;
    };

    
};
