#include <stdio.h>
#include <stdlib.h>

void dimension() {
	float h=1,l=1,p=1;
	do { printf("Rentrez les dimension la hauteur"); scanf_s("\n %f", &h); } while ((h > 150) || (h < 1));
	do { printf("Rentrez les dimension la largeur"); scanf_s("\n %f", &l); } while ((l > 150) || (l < 1));
	do { printf("Rentrez les dimension la profondeur"); scanf_s("\n %f", &p); } while ((p > 150) || (p < 1));

	if ((h <= 55) && (l <= 35) && (p <= 25)) { printf("VALIDE"); }
	else { printf("NON VALIDE"); }

}

int main(){
	dimension();
}