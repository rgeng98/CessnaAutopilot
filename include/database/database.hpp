#pragma once

#include <objects/imu.hpp>
#include <map>
#include <subscribers/msgSubscriber.hpp>
#include <enums/enumerations.hpp>

namespace database
{
    // This class is designed to serve as a database specific for this application. Subscribers will live here and store data that the controller can pull on command.
    class database
    {
        private:
        subscriber::msgSubscriber<gazebo::msgs::IMU>* imuSubscriber;
        
    
        public:
        database(subscriber::msgSubscriber<gazebo::msgs::IMU>* imuSubscriber);
        
        objects::imu getIMUData();


    };
}