#include <iostream>
#include <database/database.hpp>
#include <ignition/math.hh>
#include <chrono>
#include <controller/base.hpp>
#include <enums/enumerations.hpp>
#include <subscribers/msgSubscriber.hpp>
#include <gazebo/gazebo.hh>

int main(int argc, char* argv[]) {
  // Initialize Gazebo transport
  // gazebo::client::setup(argc, argv);

  // Create a node for communication
  gazebo::transport::NodePtr node(new gazebo::transport::Node());
  node->Init(); // Initializes with the default namespace
  subscriber::msgSubscriber<gazebo::msgs::IMU>* subscriber = new subscriber::msgSubscriber<gazebo::msgs::IMU>("~/cessna_c172/state", node);
  database::database* db = new database::database(subscriber);
  controller::Base* controller = new controller::Base(enums:: CONTROL_METHOD_ENUM::PID, node);
  while (true) {
    controller->commandVehicle();
    std::cout << "Commanded vehicle to spin propellor.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  return 0;
}

