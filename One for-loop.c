#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(int  argc, char** argv) {

	int u, i;
	printf("Enter a positive integer: ");
	scanf("%d", &u);
	printf("Following are the numbers from -5 to %d\n", u);
	for (i = -5; i <= u; i++)
		printf("%d ", i);
}