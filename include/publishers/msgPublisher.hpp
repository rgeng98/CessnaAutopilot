#pragma once

#include <gazebo/gazebo.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>
#include <iostream>

namespace publishers{

template<typename T>
class msgPublisher{
    private:
    gazebo::transport::PublisherPtr mPub;
    public:
    msgPublisher(gazebo::transport::NodePtr& inGazeboNode)
    {
        mPub = inGazeboNode->Advertise<gazebo::msgs::Cessna>("~/cessna_c172/control");
        // gazebo::client::setup();
        // mPub->Init();
        // mPub = mNode.Advertise<T>(inTopic);
    };
    void publishMessage(const T& inMsg)
    {
        mPub->Publish(inMsg);
    };
};
}