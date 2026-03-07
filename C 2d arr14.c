#include <stdio.h>

int main(){
    int R,C,i,j,max=-100000,index=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<C;j++){
        int sum=0;
        for(i=0;i<R;i++)
            sum+=a[i][j];
        if(sum>max){
            max=sum;
            index=j;
        }
    }
    printf("%d",index);
}
