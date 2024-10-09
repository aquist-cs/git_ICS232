#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

	int i;
	int j;
	int k;
	char str[256];

	printf("Hello World\n");
	printf("Please enter your name: ");
	fgets(str, sizeof(str), stdin);
	i = strlen(str);
	str[i - 1] = 0;
	printf("Hello %s, glad to meet you.\n", str);

	j = 0;
	k = 0;
	for (i = 0; str[i] != 0; i++) {
		if ((str[i] == 'A') || (str[i] == 'Z'))
			j += 1;
		else if (str[i] == 'b')
			k += 1;
	}
	
	printf("Count of A and Z = %d\n", j);
	printf("Count of b = %d\n", k);

	if (j > 3)
		printf("That is a lot of A and Z\n");
	
	return (0);

}
