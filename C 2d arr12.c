#include <stdio.h>

int main(){
    int R,C,i,j,k,l,maxCount=0,value;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            int count=0;
            for(k=0;k<R;k++)
                for(l=0;l<C;l++)
                    if(a[i][j]==a[k][l]) count++;
            if(count>maxCount){
                maxCount=count;
                value=a[i][j];
            }
        }
    }
    printf("%d",value);
}
