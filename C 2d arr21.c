#include <stdio.h>

int main(){
    int R,C,i,j,index=0,max=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int len=1;
        for(j=1;j<C;j++){
            if((a[i][j]%2)!=(a[i][j-1]%2))
                len++;
            else
                break;
        }
        if(len>max){
            max=len;
            index=i;
        }
    }
    printf("%d",index);
}
