#include<stdio.h>
#include "inc\complex.h"

int sum(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                             
        printf("Error\n");
        return 0;
    }
    complex_t sum_val;
    sum_val.real=num1->real + num2->real;
    sum_val.img=num1->img + num2->img;
    printf("Sum of two complex numbers is: %d + j%f\n",sum_val.real,sum_val.img);             
    return 1;
}

int diff(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                   
        printf("Error!\n");
        return 0;
    }
    complex_t diff;
    diff.real=num1->real - num2->real;
    diff.img=num1->img - num2->img;
    printf("Difference of two complex number is: %d + j%f\n",diff.real,diff.img);        
    return 1;
}

int mul(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                   
        printf("Error!\n");
        return 0;
    }
    complex_t mul;
    mul.real=(num1->real*num2->real)-(num1->img * num2->img);
    mul.img=(num1->real * num2->img)+(num1->img * num2->real);
    printf("multiplication of two complex number is: %d + j%f\n",mul.real,mul.img);    
    return 1;
}

int div(complex_t *num1,complex_t *num2){
    if(num1==NULL || num2==NULL){                   
        printf("Error\n");
        return 0;
    }
    float denom = (num2->real *num2->real) + (num2->img*num2->img);
    
    if(denom == 0){
        printf("Denominator is zero!\n");
        return 0;
    }

    complex_t div;
    
    div.real = ((num1->real * num2->real) + (num1->img * num2->img))/denom;
    div.img = ((num1->img * num2->real) - (num1->real * num2->img))/denom;
    printf("Division of two complex numbers is: %d + j%f",div.real,div.img);
    return 1;
}


