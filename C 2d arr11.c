#include <stdio.h>

int main(){
    int R,C,i,j,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int sorted=1;
        for(j=0;j<C-1;j++){
            if(a[i][j]>a[i][j+1]){
                sorted=0;
                break;
            }
        }
        if(sorted) count++;
    }
    printf("%d",count);
}
