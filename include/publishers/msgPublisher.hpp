#pragma once

#include <gazebo/transport/transport.hh>
#include <gazebo/gazebo_client.hh>
#include <gazebo/msgs/msgs.hh>
#include <iostream>

namespace publishers{

template<typename T>
class msgPublisher{
    private:
    gazebo::transport::PublisherPtr mPub;
    public:
    msgPublisher(gazebo::transport::NodePtr& inGazeboNode, const std::string& inTopic)
    {
        mPub = inGazeboNode->Advertise<gazebo::msgs::Cessna>(inTopic);
        if (!mPub) {
            std::cerr << "Failed to advertise topic ~/cessna_c172/control" << std::endl;
        }
        std::cout << "Waiting for connection...\n";
        mPub->WaitForConnection();
        if (mPub->HasConnections())
        {
          std::cout << "Connected to Gazebo. Publishing to ~/cessna_c172/control" << std::endl;
        }
        else
        {
          std::cout << "Done waiting for connections, but messages not making it to the cessna.\n";
        }
    };
    void publishMessage(const T& inMsg)
    {
        mPub->Publish(inMsg);
    };
};
}