/*
	for(assigement;codition;inc/dec){
		for(assigement;codition;inc/dec){
			code;
		}	
	}
	
	* 
	* * 
	* * * 
	* * * * 
	* * * * *
	
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int r,c;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	getch();
}






