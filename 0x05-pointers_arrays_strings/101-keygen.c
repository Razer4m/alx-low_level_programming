#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for 101-crackme.
 */
void generate_password(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int password_length = 12, i;
	char password[password_length + 1];

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		int random_index = rand() % (sizeof(charset) - 1);

		password[i] = charset[random_index];
	}
	password[password_length] = '\0';
	printf("Generated Password: %s\n", password);
}
