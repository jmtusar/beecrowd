#include <stdio.h>

int main() {

    int x,y,z;
    char op;
    scanf("%d",&z);
    scanf("%d %c %d",&x,&op,&y);
    if(op=='+'){
        if(x+y<=z){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else{
        if(x*y<=z){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    return 0;
}
