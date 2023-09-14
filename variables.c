#include<stdio.h>

int main()
{
int a =5;
char b = 'g';
double c = 500;
float d = 6.765;

printf("the values of a is %d \n the values of b is %c \n the values of c is %lf \n and the values of d is %f \n",a,b,c,d);

//checking the size of the data types

printf("the size of int data type is %d \n",sizeof(a));
printf("the size of char data type is %d \n",sizeof(b));
printf("the size of double data type is %d \n",sizeof(c));
printf("the size of float data type is %d \n",sizeof(d));

const int h =11;
printf("the value of h is %d",h);

//a =12;
//printf("the value of h after changing the value is %d",h);
//this will not update the value of teh variable because its a constant variable

char r;
printf("enter the character \n");
scanf("%c"&r);
printf("the character you entered is %n",r);


}