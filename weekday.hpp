/**
 * @file weekday.h
 * @brief Header file for the weekday function.
 */

#ifndef WEEKDAY_H
#define WEEKDAY_H

#include <stdint.h>

/**
 * @brief Calculates the day of the week using Zeller's Congruence algorithm.
 *
 * This function takes the day, month, and year as parameters and returns the day of the week as an integer.
 *
 * @param d Day of the month (1-31).
 * @param m Month (1-12).
 * @param y Year.
 * @return Day of the week (0 for Sunday, 1 for Monday, ..., 6 for Saturday).
 */
uint8_t weekday(uint8_t d, uint8_t m, uint16_t y);

#endif // WEEKDAY_H
