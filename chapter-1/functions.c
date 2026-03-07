#include <stdio.h>
int power(int x, int y);

int main() {
    printf("%d", power(4,4));
}

int power(int a, int n) {
    int p = 1;
    for (int i = 1; i<=n; ++i) {
        p = p * a;
    }
    return p;
}