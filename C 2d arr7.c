#include <stdio.h>

int main(){
    int R,C,i,j,k,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            int rowMin=1,colMax=1;
            for(k=0;k<C;k++)
                if(a[i][k]<a[i][j]) rowMin=0;
            for(k=0;k<R;k++)
                if(a[k][j]>a[i][j]) colMax=0;
            if(rowMin && colMax) count++;
        }
    }
    printf("%d",count);
}
