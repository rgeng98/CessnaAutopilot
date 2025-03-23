#include <gazebo/transport/transport.hh>
#include <gazebo/gazebo_client.hh>
#include <gazebo/msgs/msgs.hh>
#include <controller/base.hpp>
#include <enums/enumerations.hpp>
#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char** argv) {

  if (!gazebo::client::setup(argc, argv)) {
    std::cerr << "Failed to initialize Gazebo client" << std::endl;
    return -1;
  }
  // Initialize Gazebo transport
  gazebo::transport::NodePtr node(new gazebo::transport::Node());
  node->Init();
  
  controller::Base* myController = new controller::Base(enums::CONTROL_METHOD_ENUM::PID, node);
 
  // Main loop to publish messages
  double time = 0.0;
  double dt = 1; // 100 Hz update rate
  while (true) {
    myController->commandVehicle();
    
    // Simulate a control loop
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(dt * 1000)));
    time += dt;
  }

  // Cleanup (unreachable in this example, but good practice)
  gazebo::client::shutdown();
  return 0;
}