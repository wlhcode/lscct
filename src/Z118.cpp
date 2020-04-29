#include <cstdio>
int main () {
	char l;
	scanf("%c", &l);
	if (l == 'a' | l == 'A' | l == 'e' | l == 'E' | l == 'I' | l == 'i' | l == 'O' | l == 'o' | l == 'u' | l == 'U')
	  printf ("Vowel\n");
	else
	  printf ("Consonant\n");
	return 0;
}
