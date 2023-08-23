#include"main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @str: string variable
 * Return: 1337 coding strings
*/

char *leet(char *str)
{
int i;
int j;
char *chars = "aAeEoOtTlL";
char *nums1337 = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; chars[j] != '\0'; j++)
{
if (str[i] == chars[j])
{
str[i] = nums1337[j];
}
}
}
return (str);
}
