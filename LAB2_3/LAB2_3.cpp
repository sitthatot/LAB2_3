#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
	printf("\n");
	for (int down = 1; down <= (n - 2); down++) {
		printf("*");
		for (int space = 1; space <= (n-2); space++) {
			printf(" ");
		}
		printf("*");
		printf("\n");

	}
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
	
	
	return 0;
} 