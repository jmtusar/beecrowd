#include<stdio.h>
int main()
{
    int x,y,z=0,tmp=100;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        if(y<tmp){
            tmp=y;
            z=i+1;
        }

    }
    printf("%d\n",z);
    z=0;
}
