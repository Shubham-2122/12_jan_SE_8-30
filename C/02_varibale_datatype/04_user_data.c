// scanf() &varible-name : address of varibale

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("Enter your A : ");
	scanf("%d",&a);
	printf("a = %d",a);
	
	printf("\nEnter your B : ");
	scanf("%d",&b);
	printf("b = %d",b);
	
	printf("\nsum = %d",a+b);
	
	getch();
}
