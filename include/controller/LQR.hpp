#pragma once

#include <Eigen/Dense>
#include <controller/base.hpp>

namespace controller
{
namespace LQR
{
    class LQRController
    {
        public:
        LQRController(float inMass, float inLx, float inLy, float inLz);
        private:
        Eigen::MatrixXf mA = Eigen::MatrixXf(12,12);
        Eigen::MatrixXf mB = Eigen::MatrixXf(12, 4);
        Eigen::MatrixXf mC = Eigen::MatrixXf(6, 12);
        Eigen::MatrixXf mD = Eigen::MatrixXf(6, 4);
        Eigen::MatrixXf mR = Eigen::MatrixXf(4, 4);
        Eigen::MatrixXf mQ = Eigen::MatrixXf(4, 4);
        float mMass, mLx, mLy, mLz;
    };
}
}