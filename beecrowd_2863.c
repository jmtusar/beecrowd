#include <stdio.h>

int main (void)
{
	int x;
	float y,z;
	while(scanf("%d",&x)!=EOF)
	{
		z=100.0f;
		for(int i=0;i<x;++i)
		{
			scanf("%f",&y);
			if(y<z)
				z=y;
		}
		printf("%.2f\n",z);
	}
}
