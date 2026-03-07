#include <stdio.h>

int main(){
    int R,C,i,j,index=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    long long max=-1000000000,prod;
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        prod=1;
        for(j=0;j<C;j++)
            prod*=a[i][j];
        if(prod>max){
            max=prod;
            index=i;
        }
    }
    printf("%d",index);
}
