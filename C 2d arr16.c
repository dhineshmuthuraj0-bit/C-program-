#include <stdio.h>

int main(){
    int R,C,i,j,index=-1,min=1000000000;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int sum=0;
        for(j=0;j<C;j++)
            sum+=a[i][j];
        if(sum!=0 && sum<min){
            min=sum;
            index=i;
        }
    }
    printf("%d",index);
}
