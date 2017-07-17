#pragma once

#include "../statistics.hpp"
#include <string>


namespace ga
{
namespace logging
{

class logger
{
public:
    virtual void operator()(const statistics &stat) = 0;
};


} // namespace logging
} // namespace ga