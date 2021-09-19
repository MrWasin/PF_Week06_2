#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char str[50];
	int i = 0, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0, num_a = 0, num_e = 0, num_i = 0, num_o = 0, num_u = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		if ((str[i] == 'A') || (str[i] == 'a')) {
			count_a += 1;
			num_a = 1;
		}
		if ((str[i] == 'E') || (str[i] == 'e')) {
			count_e += 1;
			num_e = 1;
		}
		if ((str[i] == 'I') || (str[i] == 'i')) {
			count_i += 1;
			num_i = 1;
		}
		if ((str[i] == 'O') || (str[i] == 'o')) {
			count_o += 1;
			num_o = 1;
		}
		if ((str[i] == 'U') || (str[i] == 'u')) {
			count_u += 1;
			num_u = 1;
		}
		i += 1;
	}
	if (num_a == 1) { printf("a = %d\n", count_a); }
	if (num_e == 1) { printf("e = %d\n", count_e); }
	if (num_i == 1) { printf("i = %d\n", count_i); }
	if (num_o == 1) { printf("o = %d\n", count_o); }
	if (num_u == 1) { printf("u = %d\n", count_u); }

	return 0;
}