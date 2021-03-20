#include<stdio.h>
int main() {
    int A = 1000; int B = 70; int C = 170;
    int x = 0;
    (C - B)* x > A;
    while (1) {
        if (C * x > A + B * x) {
            break;
        }
        x++;
    }
    printf("%d", x);
}



