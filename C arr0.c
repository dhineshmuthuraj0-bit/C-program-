#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int marks[N];
    int i=0;
    while(i<N) {
        scanf("%d",&marks[i]);
        i++;
    }
    int L,R;
    scanf("%d %d",&L,&R);
    int max=marks[L-1];
    i=L-1;
    while(i<=R-1) {
        if(marks[i]>max){
            max=marks[i];
    }
    i++;
}
    printf("%d\n",max);
    return 0;
}
