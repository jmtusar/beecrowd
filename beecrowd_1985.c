#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d",&x);
    float a,s=0.00;

    for(int i=0; i<x; i++){
        scanf("%d %d",&z,&y);
        if(z==1001){
            a=1.5;
        }
        if(z==1002){
            a=2.5;
        }
        if(z==1003){
            a=3.5;
        }
        if(z==1004){
            a=4.5;
        }
        if(z==1005){
            a=5.5;
        }
        s=s+a*y;
    }
    printf("%.2f\n",s);
    return 0;
}
/*
1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50

*/
