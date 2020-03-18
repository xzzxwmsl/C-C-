#include <stdio.h>
#include <windows.h>

int fun1(int n);
int fun2(int n);

int xx = 0;
int yy = 0;

const int value = (1 << 17) - 290;
int main()
{

	int x = fun1(value);

	printf("________________________\n");

	int y = fun2(value);

	printf("result is %d %d \n", x, y);

	system("pause");
	return 0;
}

int fun1(int n)
{
	printf("it's %d times to call this function1\n", ++xx);

	if (n <= 1)
		return 1;
	else
	{

		return fun1(n / 2) + 1;
	}
}

int fun2(int n)
{
	printf("it's %d times to call this function2\n", ++yy);
	if (n <= 1)
		return 1;
	else
	{

		return 2 * fun2(n / 2) + n;
	}
}
