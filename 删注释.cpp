#include <stdio.h>
#include <string.h>
int main()
{
	int note = 0, f, n, i;
	char s[100];
	while (gets(s))
	{
		if (s[0] == '#'&&s[1] == '#'&&s[2] == '#') continue;
		f = 0; n = strlen(s);
		for (i = 0; i < n; i++)
			if (s[i] == '/'&&s[i + 1] == '/') break;
			else if (s[i] == '/'&&s[i + 1] == '*') { note = 1; i++; }
			else if (s[i] == '*'&&s[i + 1] == '/') { note = 0; i++; }
			else if (!note) { putchar(s[i]); f = 1; }
		if (f) putchar('\n');
	}
}

Ð¤ìÏÌì 2018 / 11 / 13 21:57 : 12
