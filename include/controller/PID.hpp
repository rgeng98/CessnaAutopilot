#pragma once

#include <Eigen/Dense>
#include <controller/base.hpp>

namespace controller
{
namespace PID
{
    class PIDController
    {
        public:
        PIDController();
        private:
        Eigen::MatrixXf A, B;
    };
}
}