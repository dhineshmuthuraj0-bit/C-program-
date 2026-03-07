#include <stdio.h>
#include <stdlib.h>

int main(){
    int R,C,i,j;
    scanf("%d%d",&R,&C);
    int a[R][C],sum[R];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        sum[i]=0;
        for(j=0;j<C;j++)
            sum[i]+=a[i][j];
    }
    int max=0;
    for(i=0;i<R;i++)
        for(j=i+1;j<R;j++)
            if(abs(sum[i]-sum[j])>max)
                max=abs(sum[i]-sum[j]);
    printf("%d",max);
}
