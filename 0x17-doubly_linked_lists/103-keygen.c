#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * f4 - Finds the biggest number.
 * @usr: The username.
 * @len: The length of the username.
 * Return: The biggest number.
 */
int f4(char *usr, int len)
{
	int c;
	int vch;
	unsigned int rand_num;

	c = *usr;
	vch = 0;

	while (vch < len)
	{
		if (c < usr[vch])
			c = usr[vch];
		vch += 1;
	}

	srand(c ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - Multiplies each char of username.
 * @usr: The username.
 * @len: The length of the username.
 * Return: The multiplied char.
 */
int f5(char *usr, int len)
{
	int c;
	int vch;

	c = vch = 0;

	while (vch < len)
	{
		c = c + usr[vch] * usr[vch];
		vch += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - Generates a random char.
 * @usr: The username.
 * Return: The generated random char.
 */
int f6(char *usr)
{
	int c;
	int vch;

	c = vch = 0;

	while (vch < *usr)
	{
		c = rand();
		vch += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - The main program.
 * @argc: The number of arguments.
 * @argv: The arguments' vector.
 * Return: 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, c, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;

	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	c = vch = 0;
	while (vch < len)
	{
		c = c + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(c ^ 79) & 63];

	c = 1;
	vch = 0;
	while (vch < len)
	{
		c = argv[1][vch] * c;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(c ^ 85) & 63];

	keygen[3] = ((char *)alph)[f4(argv[1], len)];

	keygen[4] = ((char *)alph)[f5(argv[1], len)];

	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (c = 0; keygen[c]; c++)
		printf("%c", keygen[c]);
	return (0);
}
