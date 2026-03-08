#include <stdio.h>

int main(){
    int R,C,i,j,k,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int unique=1;
        for(j=0;j<C;j++){
            for(k=j+1;k<C;k++){
                if(a[i][j]==a[i][k]){
                    unique=0;
                    break;
                }
            }
            if(!unique) break;
        }
        if(unique) count++;
    }
    printf("%d",count);
}
