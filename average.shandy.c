#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("A program to calculate the average of five number\n");
	printf("enter a first number\n");
    scanf("%d",&a);
	printf("enter a second number\n");
    scanf("%d",&b);
    printf("enter a third number\n");
	scanf("%d",&c);
	printf("enter a forth number\n");
	scanf("%d",&d);
	printf("enter a fifth number\n");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("The average of the entered number is:%d",f);
	return 0;
}
