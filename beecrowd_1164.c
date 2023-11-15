#include <stdio.h>

int main (){
  int n, x, i, k, sum = 0;
  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d",&x);
    for(k=1;k<x;k++){
      if(x%k==0){
        sum+=k;
      }
    }
    if(sum==x){
      printf("%d eh perfeito\n",x);
    }
    else{
      printf("%d nao eh perfeito\n",x);
    }
    sum=0;
  }
}
