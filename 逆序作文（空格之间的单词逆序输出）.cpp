#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;       //�ڰ��ַ���ֵ��a[]�Ĺ����У�ÿ��������ǰ�ַ�Ϊ�ո���з�
	int i, j, k, b1;//���ǰ����ַ�����ֵ��b[]������¼��ǰ��λ�ã�Ȼ���´��������ո�Ϊ���з�
	char a[100];   //���ϴμ�¼��λ�ÿ�ʼ����ǰ�ո���з�֮����ַ���ֵ��b[]��֪��a[]��ȡ��#
	char b[100];   //���b[]���
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
					for (; j >= i; j--, b1++)  //ע��j��i�ķ�Χ��ȡֵ
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
