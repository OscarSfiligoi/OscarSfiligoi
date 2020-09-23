#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatoire(){
	srand(time(NULL));
	int N = rand() % 100 + 1;
	int n;
	int S = 1;
	do{
		printf("\n Donnez une valeur : ");
		scanf_s("%d", &n);

		if (n < N) { printf("Trop petit"); S = S + 1; }
		else if (n > N) { printf("Trop grand"); S = S + 1; }
		else { printf("Bravo ton score est de %d", S); }
	} while (n != N);

}

int main() {
	aleatoire();
}