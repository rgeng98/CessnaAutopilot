#include <controller/base.hpp>

namespace controller
{
Base::Base(enums::CONTROL_METHOD_ENUM inControllerType, gazebo::transport::NodePtr& gzNode)
{
    controlPublisher = new publishers::msgPublisher<gazebo::msgs::Cessna>(gzNode);
};

void Base::commandVehicle()
{
    gazebo::msgs::Cessna msg;
    msg.set_cmd_propeller_speed(1000.0);
    msg.set_cmd_left_aileron(0.5);
    msg.set_cmd_left_flap(0.5);
    msg.set_cmd_right_aileron(-0.5);
    msg.set_cmd_right_flap(-0.5);
    msg.set_cmd_elevators(0.3);
    msg.set_cmd_rudder(-0.2);
    
    controlPublisher->publishMessage(msg);
}

}