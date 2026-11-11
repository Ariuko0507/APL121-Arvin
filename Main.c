#include <stdio.h>

int main() {
    #define N 5
    int a[N];

    for(int i=0; i<N; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for(int i=1; i<N; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }

    printf("%d", min);

    return 0;
}