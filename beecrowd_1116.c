#include <stdio.h>

int main() {

    int n,x,y,temp;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(y!=0){
            printf("%.1f\n",1.0*x/y);
        }else{
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
