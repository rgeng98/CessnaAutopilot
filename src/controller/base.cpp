#include <controller/base.hpp>
#include <iostream>

namespace controller
{
Base::Base(enums::CONTROL_METHOD_ENUM inControllerType, gazebo::transport::NodePtr& gzNode)
{
    controlPublisher = new publishers::msgPublisher<gazebo::msgs::Cessna>(gzNode, "~/cessna_c172/control");
};

void Base::commandVehicle()
{
    gazebo::msgs::Cessna msg;
    msg.set_cmd_propeller_speed(0.9);    // Oscillating thrust
    msg.set_cmd_elevators(0);  // ~11 degrees
    msg.set_cmd_rudder(0);
    msg.set_cmd_left_aileron(0);
    msg.set_cmd_right_aileron(0);
    msg.set_cmd_left_flap(0);
    msg.set_cmd_right_flap(0);
    std::cout << "Sending propeller_speed=" << msg.cmd_propeller_speed() 
          << ", elevators=" << msg.elevators() << std::endl;
    controlPublisher->publishMessage(msg);
}

}