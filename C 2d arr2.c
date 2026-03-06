#include <limits.h>
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
    int MaxProduct = INT_MIN;
    for(int i=0;i<R;i++) {
        for(int k=i+1;k<R;k++) {
        for(int j=0;j<C;j++) {
                for(int l=0;l<C;l++) {
                        int Product = arr[i][j] * arr[k][l];
                        if (Product>MaxProduct) {
                            MaxProduct = Product;
                        }
                    }
                }
            }
        }

    printf("%d",MaxProduct);
}
