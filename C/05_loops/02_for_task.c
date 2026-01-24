/*
	
	for(assigement;codition;increment/decrement){
		code..
	}
  
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	
//	for(i=1;i<=10;i++){
//		if(i<=5){
//			printf("i : %d\n",i);
//		}
//	}

//	for(i=1;i<=10;i++){
//		if(i>=5){
//			printf("i : %d\n",i);
//		}
//	}
	
	//1 2 3 7 8 9 10
	
	for(i=1;i<=10;i++){
		if(!(i<=3 || i>=7)){
			printf("i : %d\n",i);
		}
	}
	
	
	getch();
}

