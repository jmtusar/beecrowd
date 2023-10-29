#include <stdio.h>

int main() {
    int x,y,tmp=0;

    while(1){
        scanf("%d %d",&x,&y);
        int a[y],arr[y];
        if(x==0&&y==0){
            break;
        }
        for(int i=0;i<y;i++){
            scanf("%d",&a[i]);
            arr[i]=a[i];
        }
        for(int i=0;i<y;i++){
            for(int j=0;j<y;j++){
                if (i != j)
					if (a[i]==arr[j])
					{
						tmp++;
						arr[j]=0;
						for(int k=j;k<y;k++)
							if(a[i]==arr[k])
								arr[k]=0;
						break;
					}
				arr[i] = 0;
            }
        }
        printf("%d\n",tmp);
        tmp=0;
    }
    return 0;
}
