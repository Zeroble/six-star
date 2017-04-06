#include <stdio.h>
void top(int n) {
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n * 3 - j; i++)
			printf(" ");
		printf("*");
		if (j > 0) {
			for (int i = 0; i < j + (j - 1); i++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
void line(int n) {
	for (int i = 0; i < n * 6+1; i++)
		printf("*");
	printf("\n");
}

void center_top(int n) {
	int a = 1 + 2 * n;
	for (int i = 0; i < n - 1; i++, a = a+2) {
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		printf("*");
		for (int j = 0;j < 1+2*(n-2)-(i*2) ; j++)
			printf(" ");
		printf("*");
		for (int j = 0; j < a; j++)
			printf(" ", a);
		printf("*");
		for (int j = 0; j < 1 + 2 * (n - 2) - (i * 2); j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
}
void center_center(int n) {
	for (int i = 0; i < n; i++)
		printf(" ");
	printf("*");
	for (int i = 0; i < (4 * (n-1)) + 3;i++)
		printf(" ");
	printf("*\n");
}
void center_bottom(int n) {
	int a = 4*n-3;
	for (int i = n - 1; i > 0; i--, a = a - 2) {
		for (int j = 0; j < i ; j++)
			printf(" ");
		printf("*");
		for (int j = 0; j < 3 + 2 * (n - 2) - (i * 2); j++)
			printf(" ");
		printf("*");
		for (int j = 0; j < a; j++)
			printf(" ", a);
		printf("*");
		for (int j = 0; j < 3 + 2 * (n - 2) - (i * 2); j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
}
void bottom(int n) {
	for (int j = n; j > 0; j--) {
		for (int i = 0; i < n * 3 - j+1; i++)
			printf(" ");
		printf("*");
		if (j != 1) {
			for (int i = 0; i < j + (j - 1)-2; i++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n;
	scanf("%d",&n);
	top(n);
	line(n);
	center_top(n);
	center_center(n);
	center_bottom(n);
	line(n);
	bottom(n);
	return 0;
}