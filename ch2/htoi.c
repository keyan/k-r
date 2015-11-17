# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <math.h>

/* Converts a hexadecimal string array into an decimal integer. */
int main(int argc, char* argv[])
{
	char curr;
	int total = 0;
	char* hexstr = argv[1];
	int len = strlen(hexstr);

	printf("len: %d\n", len);
	printf("hexstr: %s\n", hexstr);

	for (int i = 0, n = len-1; (curr = hexstr[n]) != '\0'; ++i, --n) {
		if (isdigit(curr)) {
			curr -= 48;
		}
		else {
			curr = tolower(curr);
			curr -= 87;
		}

		total += curr * pow(16, i);
	}

	printf("%d\n", total);
}
