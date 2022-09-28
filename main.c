#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, h, m, s1;
	
	printf("input the second:");
	scanf("%i",&s);
	
	h=s/3600;
	m=(s%3600)/60;
	s1=(s%3600)%60;
	
	printf("The time for %i second is %i : %i : %i\n", s, h, m, s1);
	
	return 0;
}
