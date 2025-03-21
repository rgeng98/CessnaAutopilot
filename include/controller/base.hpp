#pragma once

#include <Eigen/Dense>
#include <subscribers/msgSubscriber.hpp>
#include <publishers/msgPublisher.hpp>
#include <bits/stdc++.h>
#include <enums/enumerations.hpp>

namespace controller
{

class Base{
public:
    Base(enums::CONTROL_METHOD_ENUM inControllerType, gazebo::transport::NodePtr& gzNode);
    void commandVehicle();
private:
    enums::CONTROL_METHOD_ENUM mControllerType;
    publishers::msgPublisher<gazebo::msgs::Cessna>* controlPublisher;
};
}