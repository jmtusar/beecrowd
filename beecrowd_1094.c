#include <stdio.h>

int main() {

    int x,y,total=0,cuntC=0,cuntR=0,cuntS=0;
    char z;
    scanf("%d",&x);

    for(int i=0;i<x;i++){
        scanf("%d %c",&y,&z);
        total+=y;
        if(z=='C'){
            cuntC+=y;
        }
         if(z=='R'){
            cuntR+=y;
        }
        if(z=='S'){
            cuntS+=y;
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",cuntC);
    printf("Total de ratos: %d\n",cuntR);
    printf("Total de sapos: %d\n",cuntS);
    printf("Percentual de coelhos: %.2f \%\n",(cuntC*100.00)/total);
    printf("Percentual de ratos: %.2f \%\n",(cuntR*100.00)/total);
    printf("Percentual de sapos: %.2f \%\n",(cuntS*100.00)/total);
}
/*
Total: 92 cobaias
Total de coelhos: 29
Total de ratos: 40
Total de sapos: 23
Percentual de coelhos: 31.52 %
Percentual de ratos: 43.48 %
Percentual de sapos: 25.00 %
*/
