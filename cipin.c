#include<stdio.h>
#include<string.h>

typedef struct
{
	char word[26];
	int num;
}wordnood;

char a[20][20];
wordnood w[20];
int y;

void put(char a[20][20],int x);
void divide(char str[]);
int wordnum(char a[]);
void paixu(wordnood x[20]);

int main()
{
	int n,q=0;
	int flag = 0;
	char c[100];
	while (scanf("%[^\n]", c)!=EOF)
	{
		wordnood w_1[20];
		int z = 0;
		y = wordnum(c);
		divide(c);
		put(a, y);
		paixu(w);
		for (int i = 0; i < y; i++)
		{
			if (strcmp(w[i].word, " ") != 0)
			{
				w_1[z] = w[i];
				z++;
			}
		}
		for (int i = 0; i < z - 1; i++)
		{
			printf("%s(%d) ", w_1[i].word, w_1[i].num);
		}
		printf("%s(%d)\n", w_1[z - 1].word, w_1[z - 1].num);
		getchar();
	}
	return 0;
}

void put(char a[20][20],int x)
{
	for (int i = 0; i < x; i++)
	{
		strcpy(w[i].word, a[i]);
	}
	for (int i = 0; i < x; i++)
	{
		w[i].num=1;
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = i + 1; j < x; j++)
		{
			if (strcmp(w[i].word,w[j].word)==0)
			{
				w[i].num++;
				strcpy(w[j].word," ");
			}
		}
	}
}

void divide(char s[])
{
	int len,j,k,flag;
	len = strlen(s);
	j = 0; k = 0; flag = 0;
	for (int i = 0; i < len + 1; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z' || s[i] >= 'A'&&s[i] <= 'Z')
		{
			a[k][j] = s[i];
			j++;
			flag = 1;
		}
		else if (flag == 0) continue;
		else
		{
			a[k][j] = '\0';
			k++;
			j = 0;
			flag = 0;
		}
	}
}

int wordnum(char a[])
{
	int i = 0, m = 0, n = 0;
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
			m = 0;
		else if (m == 0)
		{
				n++;
				m = 1;
		}
		i++;
	}
	return n;
}

void  paixu(wordnood x[20])
{
	wordnood t;
	for (int i = 0; i < y; i++)
	{
		for (int j = i + 1; j < y-1; j++)
		{
			if (w[j].num > w[i].num)
			{
				t = w[j];
				w[j] = w[i];
				w[i] = t;
			}
		}
	}
	for (int i = 0; i < y; i++)
	{
		for (int j = i + 1; j < y ; j++)
		{
			if(w[j].num == w[i].num && strcmp(w[i].word, w[j].word) < 0)
			{
				t = w[j];
				w[j] = w[i];
				w[i] = t;
			}
		}
	}
}
