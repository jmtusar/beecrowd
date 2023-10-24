#include<stdio.h>
int main()
{
    int x,y,tmp=0;
    int a[2000]={0};
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        ++a[y-1];
    }
    for(int i=0;i<2000;i++){
        if(a[i]!=0){
            printf("%d aparece %d vez(es)\n",i+1,a[i]);
        }
    }
}
