#include <stdio.h>

int main() {

    int x,y,min, max,s=0;

    scanf("%d%d", &x,&y);

    if(x < y){
        min = x;
        max = y;
    }else{
        max = x;
        min = y;
    }

    for(int i = (min + 1); i < max; ++i)
    {
        if(i % 2 != 0){
            s += i;
        }
    }
    printf("%d\n",s);
    return 0;
}
