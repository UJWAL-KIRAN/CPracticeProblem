#define _USE_MATH_DEFINES // for C
#include <math.h>

//Question 1 Sum of digits of a number
int sumDigi(int num)
{
    int number=num, sum=0, remainder=0;
    while(number>0)
    {
        remainder=number%10;
        sum+=remainder;
        number=number/10;
    }
    return sum;

    /*Alternate method as learned in the class
    int sum = 0;
    int power = 10000, reminder, digit_in_hand;


    while(power != 0)
    {
        reminder = num % power;
        digit_in_hand = num/ power;
        sum = sum + digit_in_hand;
        num = reminder;
        power = power / 10;
    }
    return sum;*/
}

//Question 2 reverse the given number
int reverseofnum(int num)
{
    int number = num;
    int reverse = 0;
    int lastdigit=0;
    while(number!=0)
    {
        lastdigit=number%10;
        reverse=reverse*10+lastdigit;
        number=number/10;
    }
    return reverse;

}

//Question 3 Count the occurrence a number
int occurence(int num)
{
    int number=num;
    int referencenum=9;
    int count = 0,remainder=0;
    while(number>0)
    {
        remainder=number%10;
        if(remainder==referencenum)
        {
            count++;
        }
        number/=10;
    }
    return count;
}

//Question 4 Check for Palindrome
int pali(int num)
{
    int number=num;
    int remainder=0;
    int rebmun=0;           //rebmun is the reverse of number
    while(number!=0)
    {
        remainder=number%10;
        rebmun=rebmun*10+remainder;
        number/=10;
    }
    printf("%d",rebmun);
    //return 0;

    if(rebmun==num)
    {
        return 0;
    }
    else{
        return 9;
    }

}

//int primi(int num)
//{
//    int count=0;
//    int number=num;
//    for(int i=0; i<=number;i++)
//    {
//        if(i%2 && i%number)
//        {
//            prime+=i;
//            printf("%d",prime);
//        }
//        else{
//            continue;
//        }
//    }
//    return prime;
//}


//Supportive function to generate N number prime numbers
int is_prime_number(int input)
{
// 2, 3, 5, 7, 11, 13, 17 .... are prime numbers that are divisible
// by ONE or itself

 int flag = 0, i;

 for(i=2; i<= input/2; i++)
 {
     if(input % i == 0){ // If its true, its not a prime number
        flag = 1; // flip the flag
        break;
     }
 }
 if(flag == 1) return 0; //not a prime number
 else return 1;
}

//Question 5 Generate the first N prime number N being a user given number

int generate_first_n_prime_numbers(int limit)
{
    int count = 0, input = 2;

    while(count < limit)
    {
        if(is_prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("\t%d", input); // display the prime number
        }

        input++; // choosing next number
    }
    printf("\n%d",count);

    return 0;
}

//Question 6 sum of the series 1+11+111+....111 up to n.
int oneoneone(int lmt)
{
    int sum=0,j=1;
    for(int i=0; i<lmt;i++)
    {
        sum=sum+j;
        j=(j*10)+1;
    }
    printf("%d",sum);
    return sum;
}

//Question 7 Armstrong Number
int strong(int num)
{
    int remainder=0,soln=1,result=0,number1=num,number=num,count=0;
    while(number1!=0)
   {
       number1=number1/10;
       count++;

   }
    printf("%d",count);
    while(number>0)
    {
        remainder=number%10;
        soln=pow(remainder,count);      //pow is power function taken from math.h header to get the power of a number
        result=result+soln;
        printf("\n%d",result);
        number=number/10;
    }
    if(result==num)
        return 0;
}

//Question 8 Amicable numbers.
int ami(int a,int b)                //Amicable numbers are two different natural numbers
                                    //related in such a way that the sum of the proper divisors of
                                    //each is equal to the other number.
{
    int firstnum=a,secnum=b,firstdiv=0,secdiv=0;

    for(int i=1;i<firstnum;i++)
    {
        if(firstnum%i == 0)
            firstdiv=firstdiv+i;
    }
    for(int i=1;i<secnum;i++)
    {
        if(secnum%i == 0)
            secdiv=secdiv+i;
    }
    printf("%d,%d,%d,%d",firstnum,secdiv,firstdiv,secnum);
    if((firstnum==secdiv) && (secnum==firstdiv))
        return 0;
}

//Question 9 menu driven program to read two integers & find their sum, difference & product.
int menu(a,b,c)
{
    int option=c,first=a,second=b,sum=0,product=0,difference=0;

    switch(option)
    {
        case 1:
            {
                sum=first+second;
                printf("\n%d",sum);
                break;
            }
        case 2:
            {
                difference=first-second;
                printf("\n%d",difference);
                break;
            }
        case 3:
            {
                product=first*second;
                printf("\n%d",product);
                break;
            }
    }
}

//Question 10 Area of the elements based on the shape
void cube(int cubeside)
{
    printf("%d",cubeside*cubeside*cubeside);
}

void cuboid(int l, int w, int h)
{
    int SA;
    SA=(2*l*w)+(2*l*h)+(2*h*w);
    printf("%d",SA);
}

void sphere(float r)
{
    float Area=0;
    Area=4*M_PI*r*r;
    printf("%f",Area);
}

void cylinder (float r, float h)
{
    float Area=0;
    Area=(2*M_PI*r*h)+(2*M_PI*r*r);
    printf("%f",Area);
}


void cone (float radius, float height)
{
    float Area=0;
    Area=M_PI* radius * (radius + sqrt(radius * radius + height * height));;
    printf("%f",Area);
}


//Question 11 Electricity Bill Problem.
int electricitybill(int unit)
{
    int units=unit;
//    printf("Enter the number of units consumed\n\n");
//    scanf("%d",&units);

    if(units<=200)
    {
        return units*1;
//        printf("%d",units*1);
    }
    else if(units>200 && units<300)
    {
        return units*1.5;
//        printf("%d",units*1.5);
    }
    else
    {
        return units*2;
//        printf("%d",units*2);
    }
}
