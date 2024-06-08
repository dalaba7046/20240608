#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int *p;
int n, m, mx, a, b;

int find(int a) {
    if (p[a] < 0) {
        return a;
    } else {
        p[a] = find(p[a]);
        return p[a];
    }
}

int main() {
    while (scanf("%d %d", &n, &m) == 2) {
        p = (int *)malloc(n * sizeof(int)); // 動態分配記憶體
        for (int i = 0; i < n; i++) {
            p[i] = -1;
        }
        mx = 1;
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &a, &b);
            a = find(a);
            b = find(b);
            if (a != b) {
                p[a] += p[b];
                mx = (mx > -p[a]) ? mx : -p[a];
                p[b] = a;
            }
        }
        printf("%d\n", mx);
        free(p); // 釋放動態分配的記憶體
    }
    return 0;
}////
