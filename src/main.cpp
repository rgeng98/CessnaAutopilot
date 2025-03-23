#include <gazebo/transport/transport.hh>
#include <gazebo/gazebo_client.hh>
#include <gazebo/msgs/msgs.hh>
#include <ignition/math/Vector3.hh>
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

  // Advertise the Cessna control topic
  gazebo::transport::PublisherPtr pub = node->Advertise<gazebo::msgs::Cessna>("~/cessna_c172/control");
  if (!pub) {
    std::cerr << "Failed to advertise topic ~/cessna_c172/control" << std::endl;
    return -1;
  }

  // Wait for a subscriber to connect
  std::cout << "Waiting for connection...\n";
  pub->WaitForConnection();

  if (pub->HasConnections())
  {
    std::cout << "Connected to Gazebo. Publishing to ~/cessna_c172/control" << std::endl;
  }
  else
  {
    std::cout << "Done waiting for connections, but messages not making it to the cessna.\n";
  }
  // Main loop to publish messages
  double time = 0.0;
  double dt = 1; // 100 Hz update rate
  while (true) {
    // Create a Cessna message
    gazebo::msgs::Cessna msg;
    msg.set_cmd_propeller_speed(0.9);    // Oscillating thrust
    msg.set_cmd_elevators(0);  // ~11 degrees
    msg.set_cmd_rudder(0);
    msg.set_cmd_left_aileron(0);
    msg.set_cmd_right_aileron(0);
    msg.set_cmd_left_flap(0);
    msg.set_cmd_right_flap(0);

    // Publish the message
    pub->Publish(msg);
    std::cout << "Sending propeller_speed=" << msg.cmd_propeller_speed() 
          << ", elevators=" << msg.elevators() << std::endl;
    // Simulate a control loop
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(dt * 1000)));
    time += dt;
  }

  // Cleanup (unreachable in this example, but good practice)
  gazebo::client::shutdown();
  return 0;
}