#include <stdio.h>

#include <locale.h>

int main()
{
	int L = 1337., n = 4.;
	float R = n / L;
	setlocale(LC_ALL, "RUS");
	printf("%s\n", "Дано:");
	printf("%99d\n", n);
	printf("%99d\n\n", L);
	puts("---------------------------------------------------------------------------------------------------");
	printf("%s\n", "Ответ:");
	printf("%+.3d%s%*.*f", R, ".", R);
}
