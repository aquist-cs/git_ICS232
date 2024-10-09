#include <stdio.h>
#include <string.h>

struct s1 {
	int x;
	int y;
};

int function1(int x, int y)
{
	int z;

	x += 1;
	z = 10 * x + y;

	return (z);
}

int function2(int *x)
{
	int y;

	printf("function2: x = %p, %d\n", x, *x);

	*x += 1;
	y = 10 * *x;

	return (y);
}

void function3(struct s1 *s)
{

	printf("s1 = %p\n", s);
	printf("s1->x = %p\n", &s->x);
	printf("s1->y = %p\n", &s->y);
	s->x += 1;
	s->y += 10;

}

int main(int argc, char ** argv)
{

	int i;
	int r;
	struct s1 v1;
	
	for (i = 1; i < 5; i++) {
		r = function1(i, 5 * i);
		printf("function 1 called: i = %d, r = %d\n", i, r);
	}
	printf("\n");

	for (i = 1; i < 5; i++) {
		r = function2(&i);
		printf("function 2 called: i = %d, r = %d\n", i, r);
	}
	printf("\n");
	
	v1.x = 10;
	v1.y = 20;
	function3(&v1);
	printf("v1 = %p\n", &v1);
	printf("function3 called: %d, %d\n", v1.x, v1.y);
	
	return (0);

}
