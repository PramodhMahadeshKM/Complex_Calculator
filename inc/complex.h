/**
 * @file complex.h
 * @author PramodhMahadeshKM (pramodhmahadesh@GMAIL.COM)
 * @brief 
 * @version 0.1
 * @date 2021-03-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

/**
 * @brief structure to create complex number.
 * contains two variables:
 * int real - which contians real value
 * float img - which contains imaginary or iota value 
 * 
 */
typedef struct complex_t
{
    int real;
    float img;
}complex_t;

/**
 * @brief sum will evaluate sum of two complex numbers
 * 
 * @param num1 contains real and imaginary value
 * @param num2 contains real and imaginary value
 * @return int will return 1 or 0 to show whether the arguments are right or not respectively
 */
int sum(complex_t *num1,complex_t *num2);

/**
 * @brief diff will evaluate difference of two complex numbers 
 * 
 * @param num1 contains real and imaginary value
 * @param num2 contains real and imaginary value
 * @return int will return 1 or 0 to show whether the arguments are right or not respectively
 */
int diff(complex_t *num1,complex_t *num2);

/**
 * @brief mul will evaluate multiplication of two complex numbers 
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not respectively
 */
int mul(complex_t *num1,complex_t *num2);

/**
 * @brief div will evaluate division of two complex numbers 
 * 
 * @param num1 contain real and imaginary value
 * @param num2 contain real and imaginary value
 * @return int will return 1 or 0 to show whether the argument are right or not respectively
 */
int div(complex_t *num1,complex_t *num2);

#endif