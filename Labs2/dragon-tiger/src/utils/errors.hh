#pragma once
#include <stdexcept>
#include <string>

namespace util {

void fatal_error(const std::string& msg) {
    throw std::runtime_error(msg);
}

} 
