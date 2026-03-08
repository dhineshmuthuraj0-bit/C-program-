#include <stdio.h>

int main(){
    int R,C,i,j,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int inc=1;
        for(j=1;j<C;j++){
            if(a[i][j]<=a[i][j-1]){
                inc=0;
                break;
            }
        }
        if(inc) count++;
    }
    printf("%d",count);
}
