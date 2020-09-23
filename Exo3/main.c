#include <stdio.h>
#include <stdlib.h>

void bisextile() {
	int a = 0;
	printf("Entrez une annee");
	scanf_s("%d", &a);

	if (a < 10000) {
		if ((a % 4 == 0) && (a % 100 != 0) || (a % 100 == 0) && (a % 400 == 0))
		{printf("c'est une annee bissextile");}
		else { printf("ce n'est pas une annee bissextile"); }
	}
	else {printf("\nEntrez une valeur plus petite que 10 000");}
	
}

int main() {
	bisextile();
}