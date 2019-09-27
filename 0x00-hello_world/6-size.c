#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char azul;
int verde;
long int amarillo;
long long int naranja;
float blanco;
printf("Size of a char: %ld byte(s)\n", sizeof(azul));
printf("Size of an int: %ld byte(s)\n", sizeof(verde));
printf("Size of a long int: %ld byte(s)\n", sizeof(amarillo));
printf("Size of a long long int: %ld byte(s)\n", sizeof(naranja));
printf("Size of a float: %ld byte(s)\n", sizeof(blanco));
return (0);
}
