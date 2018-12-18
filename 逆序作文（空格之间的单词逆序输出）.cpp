#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;       //在把字符赋值给a[]的过程中，每次遇到当前字符为空格或换行符
	int i, j, k, b1;//则把前面的字符逆序赋值给b[]，并记录当前的位置，然后下次再遇到空格为换行符
	char a[100];   //从上次记录的位置开始到当前空格或换行符之间的字符赋值给b[]，知道a[]读取到#
	char b[100];   //最后将b[]输出
	c = getchar();
	while (c == '#')
	{
		getchar();
		b1 = 0;
		if ((c = getchar()) == '#') break;
		else
		{
			a[0] = c; i = 0; j = 0;
			for (k = 1; (c = getchar()) != '#'; k++)
			{
				a[k] = c;
				if (c == ' ' || c == '\n')
				{
					j = k - 1;
					for (; j >= i; j--, b1++)  //注意j和i的范围与取值
					{
						b[b1] = a[j];
					}
					b[b1] = c;
					b1++;
					i = k + 1;
				}

			}

		}
		for (b1 = 0; b1 < i - 1; b1++)
			printf("%c", b[b1]);
		printf("\n");
		getchar();
		c = getchar();
	}
	return 0;
}
