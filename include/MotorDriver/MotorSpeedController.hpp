#pragma once

#include <vector>

namespace MotorDriver
{
class MotorSpeedController
{
    public:
    MotorSpeedController();
    private:
    float mMotorThrustCoefficient;
    std::vector<float> mPropellerSpeeds;
};
}