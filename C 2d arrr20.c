#include <stdio.h>

int main(){
    int R,C,i,j,k,l;
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
            if(count==1){
                printf("%d",a[i][j]);
                return 0;
            }
        }
    }
}
