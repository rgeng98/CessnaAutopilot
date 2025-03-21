#pragma once

#include <Eigen/Dense>
#include <controller/base.hpp>

namespace controller
{
namespace PolePlacement
{
    class PolePlacementController
    {
        public:
        PolePlacementController(float inMass, float inLx, float inLy, float inLz);
        private:
        Eigen::MatrixXf mA = Eigen::MatrixXf(12,12);
        Eigen::MatrixXf mB = Eigen::MatrixXf(12, 4);
        Eigen::MatrixXf mC = Eigen::MatrixXf(6, 12);
        Eigen::MatrixXf mD = Eigen::MatrixXf(6, 4);
        float mMass, mLx, mLy, mLz;
    };
}
}