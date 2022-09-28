#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d, x, y, z;
	
	printf("input two integers:");
	scanf("%i %i",&a, &b);
	x=a+b;
	y=a-b;
	z=a*b;
	c=a/b;
	d=a%b;
	printf("+ result is %i\n- result is %i\n* result is %i\n/ result is %i\n%% result is %i\n",x,y,z,c,d);
}
