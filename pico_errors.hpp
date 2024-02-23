/**
 * @file pico_errors.h
 * @brief Header file defining Pico error codes and their corresponding descriptions.
 *
 * This file declares an external map that associates Pico error codes with their human-readable descriptions.
 * The error codes are based on the Pico error codes from the "pico/error.h" header.
 */

#ifndef PICO_ERRORS_H
#define PICO_ERRORS_H

#include <map>
#include <string>

/**
 * @brief Map containing Pico error codes and their corresponding descriptions.
 *
 * This external map associates Pico error codes with their human-readable descriptions.
 * It is used to translate numeric error codes into meaningful strings.
 * The error codes are based on the Pico error codes from the "pico/error.h" header.
 * Example usage:
 * @code
 *   std::string errorMessage = pico_errors[PICO_ERROR_TIMEOUT];
 * @endcode
 */
extern std::map<int, std::string> pico_errors;

#endif // PICO_ERRORS_H
