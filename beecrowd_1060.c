#include <stdio.h>
 int main(){
     int x;
     int sum=0;

     for(int i=0;i<6;i++){
        scanf("%d",&x);
        if(x>0){
            sum = sum +1;
        }

     }
     printf("%d valorea positivos\n",sum);


 }
