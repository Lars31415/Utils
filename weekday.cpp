#include "weekday.hpp"

/**
 * @brief Calculates the day of the week using Zeller's Congruence algorithm.
 *
 * This function takes the day, month, and year as parameters and returns the day of the week as an integer.
 *
 * @param d Day of the month (1-31).
 * @param m Month (1-12).
 * @param y Year.
 * @return Day of the week (0 for Saturday, 1 for Sunday, ..., 6 for Friday).
 */
uint8_t weekday(uint8_t d, uint8_t m, uint16_t y)
{
    // Adjust the year and month based on Zeller's Congruence algorithm
    // If the month is January or February, decrement the year by 1; otherwise, subtract 2 from the year.
    d += m < 3 ? y-- : y - 2;

    // Apply Zeller's Congruence formula to calculate the day of the week
    // (23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7
    return (23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}
