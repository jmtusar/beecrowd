#include <stdio.h>

int main() {

    int x,y,cunt2=0,cunt3=0,cunt4=0,cunt5=0;
    scanf("%d",&x);

    for(int i=0;i<x;i++){
        scanf("%d",&y);
        if(y%2==0){
            cunt2+=1;
        }
        if(y%3==0){
            cunt3+=1;
        }
        if(y%4==0){
            cunt4+=1;
        }
        if(y%5==0){
            cunt5+=1;
        }
    }
    printf("%d Multiplo(s) de 2\n",cunt2);
    printf("%d Multiplo(s) de 3\n",cunt3);
    printf("%d Multiplo(s) de 4\n",cunt4);
    printf("%d Multiplo(s) de 5\n",cunt5);
}
