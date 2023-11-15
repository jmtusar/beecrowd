#include <stdio.h>
int main ()
{
	float x, y, result;
	scanf("%f %f", &x, &y);
	if (x == y)
		printf("0.00%%\n");
	else{
		result = ((y*100.0)/x)-100;
		printf("%.2f%%\n", result);
	}
}
