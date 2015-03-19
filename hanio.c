#include<stdio.h>
int hanio(int n, char x, char y, char z);

int main()
{
	int time;
	scanf("%d", &time);
	hanio(time, 'A', 'B', 'C');
	printf("\n");
	system("pause");
	return 0;
}
int hanio(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c->%c\n", x, z);
	}
	else
	{
		hanio(n - 1, x, z, y);
		printf("%c->%c\n", x, z);
		hanio(n - 1, y, x, z);
	}
	return 0;
}