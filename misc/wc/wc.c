#include <stdio.h>

#define IN  1	/* Inside a word. */
#define OUT 0	/* Outside a word. */

int main(int argc, char *argv[])
{
	FILE *input;
	int c;
	int count;
	int words;
	int state;

	state = OUT;
	words = 0;
	if (argc > 1) {
		input = fopen(argv[1], "r");
		c = getc(input);
	} else {
		input = stdin;
		c = getchar();
	}

	while (c != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++words;
		}
		if (input == stdin)
			c = getchar();
		else
			c = getc(input);
	}
	printf("%d\n", words);
	return 0;
}
