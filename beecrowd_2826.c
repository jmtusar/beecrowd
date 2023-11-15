#include <stdio.h>
#include <string.h>

int main (void)
{
	char arr1[25], arr2[25];
	scanf("%s %s", arr1, arr2);

	if (strcmp(arr1, arr2) > 0){
		printf("%s\n", arr2);
		printf("%s\n", arr1);
	}
	else if (strcmp(arr1, arr2) < 0){
		printf("%s\n", arr1);
		printf("%s\n", arr2);
	}
}
