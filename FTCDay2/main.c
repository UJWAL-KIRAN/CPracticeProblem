#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "day2.h"

int main()
{
    //Question 1 Sum of digits of a number
       assert(sumDigi(1234) == 10);
    //Question 2 reverse the given number
       assert(reverseofnum(123) == 321);
    //Question 3 Count the occurrence a number
       assert(occurence(968790) == 2);
    //Question 4 Check for Palindrome
       assert(pali(1234321) == 0);
    //Question done to verify a prime number
       assert(primi(3) == 2);
    //Question 5 Generate the first N prime number N being a user given number
       assert(generate_first_n_prime_numbers(3)==0);
    //Question 6 sum of the series 1+11+111+....111 up to n.
       assert(oneoneone(3) == 123);
    //Question 7 Armstrong Number
       assert(strong(1634) == 0);
    //Question 8 Amicable numbers.
       assert(ami(66928, 66992) == 0);

    //Question 9 menu driven program to read two integers & find their sum, difference & product.
         int a=0,b=0,c=0;
         printf("Enter 2 numbers\n");
         scanf("%d",&a);
         scanf("%d",&b);
         printf("1.Sum, 2.Diff, 3.Product");
         scanf("%d",&c);
         menu(a,b,c);
    //Question 10 Area of the elements based on the shape
    char shape[10];
    printf("Enter the shape name\n\n");
    scanf("%s",&shape);
    printf("%s",shape);
    if(!strcmp(shape,"cube"))
    {
        int len=0;
        printf("Enter the side length of a cube");
        scanf("%d",&len);
        cube(len);
    }
    if(!strcmp(shape,"cuboid"))
    {
        int len=0;int width=0; int height=0;
        printf("Enter the side length width height");
        scanf("%d",&len);
        scanf("%d",&width);
        scanf("%d",&height);
        cuboid(len,width,height);
    }
    if(!strcmp(shape,"sphere"))
    {
        int radius=0;;
        printf("Enter the radius of the sphere");
        scanf("%d",&radius);
        sphere(radius);
    }
    if(!strcmp(shape,"cylinder"))
    {
        int radius=0; int height=0;
        printf("Enter the radius and height of the cylinder");
        scanf("%d",&radius);
        scanf("%d",&height);
        cylinder(radius,height);
    }
    if(!strcmp(shape,"cone"))
    {
       int radius=0; int height=0;
        printf("Enter the radius and height of the cone");
        scanf("%d",&radius);
        scanf("%d",&height);
        cone(radius,height);
    }




    //Question 11 Electricity Bill Problem.
    assert(electricitybill(400)==800);

}


