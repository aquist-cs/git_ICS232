#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Sample GDB commands

run                  - start program
q                    - exit gdb
b <lineNumber>       - set a breakpoint
b <functionName>
n                    - execute next statement, step over function call
s                    - execute next statement, step into function
c                    - continue to next breakpoint
p <variable>         - print value of a variable
x/xw <address>       - print memory in 32-bit word in hex
x/dw <address>       - print memory in 32-bit word in decimal
x/s <address>        - print memory as a string
x/10xb <address>     - print memory as 10 bytes in hex
delete breakpoints n - delete a breakpoint
*/

struct person {
	struct person *next;
	char *name;
	int age;
	int married;
};

int func1()
{

	int a1[10];
	int sum;
	
	sum = 0;
	for (int i = 0; i < 10; i++) {
		a1[i] = 100 + i;
		sum += a1[i];
	}
	
	return (sum);
	
	
}

int main(int argc, char ** argv)
{

	int i;
	struct person *head;
	struct person *p;
	struct person *pTemp;

	func1();
	
	head = NULL;

	for (i = 0; i < 10; i++) {
		p = malloc(sizeof(struct person));
		p->next = head;
		head = p;
		p->name = strdup("Robin");
		p->age = 36 + i;
		p->married = 0;
	}
	
	for (p = head; p != NULL; p = p->next)
		printf("Name = %s, age = %d, married = %d\n", 
			p->name, p->age, p->married);

	for (p = head; p != NULL; p = pTemp) {
		pTemp = p->next;
		free(p->name);
		free(p);
	}

	return (0);

}
