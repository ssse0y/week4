#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, t, m;
	
	printf("input the second:");
	scanf("%i",&s);
	t=s/60;
	m=s%60;

	printf("the time is %i : %i",t,m);
}
