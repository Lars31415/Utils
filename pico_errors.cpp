/**
 * @file pico_errors.cpp
 * @brief Definitions for Pico error codes and their corresponding descriptions.
 *
 * This file defines a map that associates Pico error codes with their human-readable descriptions.
 * It uses the Pico error codes from the "pico/error.h" header.
 */

#include "pico_errors.hpp"

#include <pico/error.h>

/**
 * @brief Map containing Pico error codes and their corresponding descriptions.
 */
std::map<int, std::string> pico_errors = {
    {PICO_OK, "PICO_OK"},
    {PICO_ERROR_TIMEOUT, "PICO_ERROR_TIMEOUT"},
    {PICO_ERROR_GENERIC, "PICO_ERROR_GENERIC"},
    {PICO_ERROR_NO_DATA, "PICO_ERROR_NO_DATA"},
    {PICO_ERROR_NOT_PERMITTED, "PICO_ERROR_NOT_PERMITTED"},
    {PICO_ERROR_INVALID_ARG, "PICO_ERROR_INVALID_ARG"},
    {PICO_ERROR_IO, "PICO_ERROR_IO"},
    {PICO_ERROR_BADAUTH, "PICO_ERROR_BADAUTH"},
    {PICO_ERROR_CONNECT_FAILED, "PICO_ERROR_CONNECT_FAILED"},
    {PICO_ERROR_INSUFFICIENT_RESOURCES, "PICO_ERROR_INSUFFICIENT_RESOURCES"}};
