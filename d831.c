#include <stdio.h>

int main()
{
    int n, m;
    int a, b;
    int flag = 0;
    int visit[n];

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        visit[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        if (a >= 0 && b < n)
        {
            flag++;
        }
    }
   
}