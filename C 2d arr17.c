#include <stdio.h>

int main(){
    int R,C,i,j,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int sum=0;
        for(j=0;j<C;j++)
            if(j!=i) sum+=a[i][j];

        if(a[i][i]>sum) count++;
    }
    printf("%d",count);
}
