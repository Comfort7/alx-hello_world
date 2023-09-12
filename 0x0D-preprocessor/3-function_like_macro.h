#ifndef ABS_MACRO_H
#define ABS_MACRO_H

/**
 * ABS - A macro that computes the absolute value of a number.
 *
 * Description: This macro takes a numeric argument `x` and computes its
 * absolute value. It returns the absolute value of `x`.
 *
 * @x: The number for which to compute the absolute value.
 *
 * Return: The absolute value of the input number `x`.
 */

#define ABS(x) (((x) < 0) ? -(x) : (x))

#endif
