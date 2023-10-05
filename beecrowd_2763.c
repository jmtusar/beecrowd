#include <stdio.h>

int main() {

    int w,x,y,z;
    scanf("%d.%d.%d-%d",&w,&x,&y,&z);
    printf("%03d\n%03d\n%03d\n%02d\n",w,x,y,z);

    return 0;
}
