#include<stdio.h>
int main()
{
    int n,x,y,cuntX,cuntY;
    while(scanf("%d",&n) && n!=0){
        cuntX=0;
        cuntY=0;
        for(int j=0;j<n;j++){
            scanf("%d %d",&x,&y);
            if(x>y){
                cuntX+=1;
            }
            if(x<y){
                cuntY+=1;
            }
        }
        printf("%d %d\n",cuntX,cuntY);
    }
    return 0;
}
