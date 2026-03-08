#include <stdio.h>

int main(){
    int R,C,i,j,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int max=a[i][0],min=a[i][0];
        for(j=1;j<C;j++){
            if(a[i][j]>max) max=a[i][j];
            if(a[i][j]<min) min=a[i][j];
        }
        if(max-min<=1000) count++;
    }
    printf("%d",count);
}
