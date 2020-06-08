#include <stdio.h>
#include <string.h>
void f()
{
	char c1[100]= "Hola mundo";
	char c2[100]= “, I am <your name here>”;
	printf("%s\n", strcat(c1, c2));
}
