int i;
int len;
int n;

i = 0;
len = 0;
n = 0;
while (str[i++])
len++;

if ((len % 2) == 0)
n = len / 2;
else
n = (len - 1) / 2;

for (i = n; i < len; i++)
putchar(str[i]);
putchar('\n');
