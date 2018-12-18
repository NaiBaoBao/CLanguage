#include <stdio.h>
int main()
{
	int a, d, n, x, i, j, flag, p, sushu[220];
	while (scanf_s("%d %d %d", &a, &d, &n) != EOF)
	{
		p = 0;
		for (i = 0; i <= 5000; i++)
		{
			flag = 1;
			x = a + d * i;
			if (x >= 3)
			{
				for (j = 2; j < x; j++)
				{
					if (x%j == 0)
					{
						flag = 0;
						break;
					}
				}
			}
			else if (x == 1)flag = 0;

			if (flag == 1)
			{
				sushu[p] = x;
				p++;
			}
			if (p == n)break;
		}
		printf("%d\n", sushu[n - 1]);
		getchar();
	}
	return 0;
}