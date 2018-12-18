#include<stdio.h>
int Set[15];
int Arr[15];
int n;
void Arrange(int cur)
{
    if (cur == n + 1)
    {
        printf("(");
        for (int i = 1; i < cur; i++)
            {
                printf("%d", Arr[i]);
                if (i != cur - 1)
                printf(", ");
            }
        printf(")");
    }
    for (int i = 1; i <= n; i++)
    {
        int ok = 1;
        for (int j = 1; j<cur; j++)
        if (Arr[j] == Set[i])
        ok = 0;
        if (ok)
        {
            Arr[cur] = Set[i];
            Arrange(cur + 1);
        }
    }
}
int main()
{
    while (scanf("%d", &n) != EOF)
    {
        int i;
        for (int i = 1; i <= n; i++)
        Set[i] = i;
        Arrange(1);
        printf("\n");
        for (i = 1; i <= n; i++)
        {
            Set[i] = 0;
            Arr[i] = 0;
        }     
    }
    return 0;
}
