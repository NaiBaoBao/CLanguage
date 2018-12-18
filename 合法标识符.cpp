#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int stu, num, i, j, k, len, flag = 1, n = 1;
	scanf("%d", &stu);
	for (i = 0; i < stu; i++)
	{
		scanf("%d", &num);
		n = 1;
		for (j = 0; j < num; j++)
		{
			flag = 1;
			scanf("%s", s);
			len = strlen(s);
			for (k = 1; k < len; k++)
			{
				if (s[0] >= '0'&&s[0] <= '9')
				{
					flag = 0;
					break;
				}
				else
				{
					if (!((s[k] >= '0'&&s[k] <= '9') || (s[k] >= 'a'&&s[k] <= 'z') || (s[k] >= 'A'&&s[k] <= 'Z') || (s[k] == '_')))
					{
						flag = 0;
						break;
					}
				}
			}
			if (flag == 1 && n == 1)
			{
				printf("1");
				n++;
			}
			else if (flag == 1 && n != 1)
			{
				printf(" 1");
				n++;
			}
			else if (flag == 0 && n == 1)
			{
				printf("0");
				n++;
			}
			else if (flag == 0 && n != 1)
			{
				printf(" 0");
				n++;
			}
		}
		getchar();
		printf("\n");
	}
	return 0;
}