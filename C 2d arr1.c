#include <stdio.h>

int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int arr[R][C];
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int Max=-1,Second=-1;
            for(int i=0;i<C;i++) {
                for(int j=0;j<R;j++) {
                if(arr[i][j]>Max) {
                    Second = Max ;
                    Max = arr[i][j];
                }
                else if(arr[i][j]>Second && arr[i][j]!=Max) {
                    Second = arr[i][j];
                }
            }
        }
            printf("%d\n",Second);
            return 0;
        }



