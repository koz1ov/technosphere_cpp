#pragma once

#include <stdexcept>

class ShmemException : public std::runtime_error
{
public:
    using std::runtime_error::runtime_error;
};

class SharedMapException : public std::runtime_error
{
public:
    using std::runtime_error::runtime_error;
};