#pragma once

#include <gazebo/gazebo.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

namespace subscriber{

template<typename T>
class msgSubscriber{
    private:
    gazebo::transport::SubscriberPtr mNode;
    T mData;
    void callback(ConstIMUPtr &msg)
    {
        const gazebo::msgs::IMU &data = *msg;
    }
    public:
    msgSubscriber(const std::string& inTopic, gazebo::transport::NodePtr& inGazeboNode)
    {
        mNode = inGazeboNode->Subscribe("~/cessna_c172/state", &msgSubscriber::callback, this);
        if (!mNode)
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "Waiting for subscriber to connect...\n";
        };
    };
    
    T getMessageData()
    {
        return mData;
    };
};


}