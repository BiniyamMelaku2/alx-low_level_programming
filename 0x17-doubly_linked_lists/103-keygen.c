#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/**
 * main - keygen for crackme5
 * @argc: size of arguments
 * @argv: pointer to arguments
 * Return: 0 On Success -1 Failed
 */

int main(int argc __attribute__ ((unused)), char **argv)
{
int c, size;
char *str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char *password;
int f1, f2, f3, f4, f5, f6;

f1 = f2 = f5 = f6 = 0, f3 = 1;
password = malloc(100);
if (!password)
return (-1);
/* Define Char 1 */
size = strlen(argv[1]);
f1 = (size ^ 59) & 63;
password[0] = str[f1];
/* Define Char 2 */
for (c = 0; c < size; c++)
f2 += argv[1][c];
password[1] = str[(f2 ^ 79) & 63];
/* Define Char 3 */
for (c = 0; c < size; c++)
f3 *= argv[1][c];
password[2] = str[(f3 ^ 85) & 63];
/* Define Char 4 */
for (c = 0; c < size; c++)
if (argv[1][c] > f4)
f4 = argv[1][c];
srand(f4 ^ 14);
f4 = rand(), f4 = f4 & 63;
password[3] = str[f4];
/* Define Char 5 */
for (c = 0; c < size; c++)
f5 += argv[1][c] * argv[1][c];
password[4] = str[(f5 ^ 239) & 63];
/* Define Char 6 */
for (c = 0; c < argv[1][0]; c++)
f6 = rand();
password[5] = str[(f6 ^ 229) & 63];
password[6] = '\0';
printf("%s\n", password);
return (0);
}
