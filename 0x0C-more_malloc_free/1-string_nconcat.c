#include <stdlib.h>

/**
 * string_nconcat - function name
 * @s1: string 1
 * @s2: string 2
 * @n: number of byte
 * Concatenates two strings
 * Return: pointer to memory of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len = 0, s2_len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	n >= s2_len ? n = s2_len : n;

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
