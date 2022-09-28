#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y, a;
	
	printf("input the year:");
	scanf("%i",&y);
	if((y%4)==0){
		0;
	 if((y%100)!=0){a=1;
		}
		if((y%400)==0){ a=1;
	}}
	else {a=0;
	}
		
	printf("is the year %i the leap year?: %i\n	", y, a); }
