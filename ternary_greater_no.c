//WAP using ternary operator to check which number is greater among 2
#include<stdio.h>
int main(){
     int a,b;
     printf("Enter 2 numbers:");
     scanf("%d %d",&a,&b);

     (a>b)?printf("a is greater than b"):printf("b is greater than a");
}