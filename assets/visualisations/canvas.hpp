/**
 *
 * CANVAS
 *
 * \@file  canvas.hpp
 * \@brief scientific animation tools with xelatex and tikz
 *
 */

#ifndef __CANVAS_HPP__
#define __CANVAS_HPP__

#include <cassert>
#include <cmath>
#include <cstddef>

#include <algorithm>
#include <array>
#include <chrono>
#include <complex>
#include <exception>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <iterator>
#include <map>
#include <mutex>
#include <optional>
#include <random>
#include <regex>
#include <string>
#include <thread>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <vector>
#include <utility>

// Insurance: C++17 Detection
#if (defined(_MSVC_LANG) && _MSVC_LANG < 201703L) || ((!defined(_MSVC_LANG)) && __cplusplus < 201703L)
#error canvas requires C++17 support
#endif

typedef unsigned int uint;
typedef unsigned long int ulint;
typedef unsigned long long int ullint;


#endif // __CANVAS_HPP__
