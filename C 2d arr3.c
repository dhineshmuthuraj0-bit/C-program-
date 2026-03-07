#include <stdio.h>

int main(){
    int R,C,i,j,k,count,max=0,index=0;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<R;i++){
        count=0;
        for(j=0;j<C;j++){
            int unique=1;
            for(k=0;k<C;k++){
                if(j!=k && a[i][j]==a[i][k]){
                    unique=0;
                    break;
                }
            }
            if(unique) count++;
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    printf("%d",index);
}
