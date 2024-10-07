#include <stdio.h>
#include <string.h>

struct person {
	char name[256];
	int age;
	int married;
};

int main(int argc, char ** argv)
{

	int j;
	struct person p1[10];
	int p1Len;
	int sum;

	p1Len = sizeof(p1) / sizeof(p1[0]);
	
	printf("p1Len = %d, sizeof(p1) = %ld, sizeof(p1[0]) = %ld\n",
		p1Len, sizeof(p1), sizeof(p1[0]));
		
	for (int i = 0; i < p1Len; i++) {
		strcpy(p1[i].name, "Robin");
		p1[i].age = 36 + i;
		p1[i].married = 0;
	}
	
	for (int i = 0; i < p1Len; i++)
		printf("Name = %s, age = %d, married = %d\n", 
			p1[i].name, p1[i].age, p1[i].married);

	j = 0;
	sum = 0;
	for (int i = 0; i < p1Len; i++) {
		if (p1[i].age > 40)
			j = j + 1;
		sum += p1[i].age;
	}
	printf("Ages > 40 = %d\n", j);
	printf("Average Age = %d\n", sum / p1Len);
	
	return (0);

}
