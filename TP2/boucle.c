#include <stdio.h>
#include <stdlib.h>

void Somme_FOR() {
	int S = 0;
	int n = 1;
	for (n = 2; n <= 100; n++) {
		S = S + n;
	}
	printf("%d", S);
	printf("\n %d", n);
}
void Somme_WHILE(){
	int n = 1;
	int S = 0;
	do { S = S + n; n=n+1; }
	while (n <= 100);

	printf("\n %d", S);
	printf("\n %d", n);
}
void Somme_DOWHILE() {
	int n = 1;
	int S = 0;
	while (n <= 100) {S = S + n; n = n + 1;}
	printf("\n %d", S);
	printf("\n %d", n);
}

void max_n() {
	int S = 0, i = 0;
	unsigned short max = USHRT_MAX;
	while (max - S >= i) { i++; S += i; }
	printf("\n %d", S);
	printf("\n %d", i);
}

void demande_n() {
	unsigned short S = 0;
	unsigned short n;
	printf("\n Entrez n");
	scanf_s("\n %hu", &n);

	for (n = n; n <= 100; n++) {
		S = S + n;
	}
	printf("\n %d", S);
	printf("\n %d", n);
}

void redemande_n() {
	unsigned short S = 0;
	unsigned short n;
	printf("\n Entrez n");
	scanf_s("\n %hu", &n);

	while (n>361) { printf("Entrez une autre valeur"); scanf_s("\n %hu", &n);}

	for (n = n; n <= 361; n++) {
		S = S + n;
	}
	printf("\n %d", S);
	printf("\n %d", n);
}

int main() {
	Somme_FOR();
	Somme_WHILE();
	Somme_DOWHILE();
	max_n();
	demande_n();
	redemande_n();
}