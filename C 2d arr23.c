#include <stdio.h>

int main(){
    int R,C,i,j,sum=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<C;j++) sum+=a[0][j];
    for(j=0;j<C;j++) sum+=a[R-1][j];
    for(i=1;i<R-1;i++){
        sum+=a[i][0];
        sum+=a[i][C-1];
    }
    printf("%d",sum);
}
