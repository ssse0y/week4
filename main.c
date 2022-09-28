#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m, s1;
	
	printf("input the second:");
	scanf("%i",&s);
	m=s/60;
	s1=s%60;

	printf("the time is %i : %i",m,s1);
}
