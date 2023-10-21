#include<stdio.h>
int main()
{
    int x,y,cunt=0;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++){
        cunt+=1;
        if (cunt == x){
            printf("%d\n",i);
            cunt = 0;
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}
