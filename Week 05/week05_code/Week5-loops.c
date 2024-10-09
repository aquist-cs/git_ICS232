#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{

	int even;
	int i;
	int *ip;
	char ch;
	int odd;
	char *sp;
	char str[256];

	static int intArry[] = {1, 10, 20, 31, 0};

	odd = 0;
	even = 0;
	for (i = 0; intArry[i] != 0; i++) {
		if (intArry[i] & 0x0001)
			odd += 1;
		else
			even += 1;
	}
	printf("1: odd = %d, even = %d, entries = %d\n", odd, even, i);

	odd = 0;
	for (i = 0; intArry[i] != 0; i++) {
		odd += intArry[i] & 1;
	}
	printf("2: odd = %d, even = %d, entries = %d\n", odd, i - odd, i);

	odd = 0;
	ip = intArry;
	while (*ip != 0) {
		odd += *ip & 1;
		ip += 1;
	}
	i = ip - intArry;
	printf("3: odd = %d, even = %d, entries = %d\n", odd, i - odd, i);

	
	i = 3;
	while (i < 10) {
		if ((i < 5) || (i > 8))
			printf("i = %d\n", i);
		i += 1;
	}

	strcpy(str, "ABC");
	str[1] = 'X';
	sp = strchr(str, 'C');
	printf("str = %s @ %p, C at %p\n", str, str, sp);

	return (0);

}
