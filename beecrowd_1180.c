#include <stdio.h>

int main() {

    int n,tmp,x;
    scanf("%d",&n);
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    tmp=arr[0];
    x=0;
    for(int i=1;i<n;i++){
        if(arr[i]<tmp){
            tmp=arr[i];
            x=i;
        }
    }
    printf("Menor valor: %d\n",tmp);
    printf("Posicao: %d\n",x);
    //return 0;
}
