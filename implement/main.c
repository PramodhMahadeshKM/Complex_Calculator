#include<stdio.h>
#include "inc\complex.h"
#include "unity\unity.h"

complex_t num1={10,20};
complex_t num2={52,13};
complex_t num3={-8,10};
complex_t num4={-18,-23};
complex_t zeros={0,0};

/**
 * @brief below functions required by unity test framework
 * 
 */
void setUp(){}
void tearDown(){}


void test_sum(void){
    TEST_ASSERT_EQUAL(1,sum(&num1,&num2));          //positive value test
    TEST_ASSERT_EQUAL(1,sum(&num3,&num4));          //negative value test
    TEST_ASSERT_EQUAL(0,sum(NULL,NULL));            //NULL value test
    
}


void test_diff(void){
    TEST_ASSERT_EQUAL(1,diff(&num1,&num2));          //positive value test
    TEST_ASSERT_EQUAL(1,diff(&num3,&num4));          //negative value test
    TEST_ASSERT_EQUAL(0,diff(NULL,NULL));            //NULL value test
    
}


void test_mul(void){
    TEST_ASSERT_EQUAL(1,mul(&num1,&num2));            //positive value test
    TEST_ASSERT_EQUAL(1,mul(&num3,&num4));            //negative value test
    TEST_ASSERT_EQUAL(0,mul(NULL,NULL));              //NULL value test
}


void test_div(void){
    TEST_ASSERT_EQUAL(1,div(&num1,&num2));              //positive value test
    TEST_ASSERT_EQUAL(1,div(&num3,&num4));              //negative value test
    TEST_ASSERT_EQUAL(0,div(&num1,&zeros));             //zero denominator test
    TEST_ASSERT_EQUAL(0,div(NULL,NULL));                //NULL value test
}


int main(){
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_diff);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
     complex_t a={10,30},b={1,1};
    sum(&a,&b);
    diff(&a,&b);
    mul(&a,&b);
    div(&a,&b);
    return UNITY_END();
}
