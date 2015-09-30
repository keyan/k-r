#include <stdio.h>

/* Copy input to output */
int main(void)
{
	int c;
	c = getchar();
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}

