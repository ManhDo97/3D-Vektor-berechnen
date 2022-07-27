#include"Header.h"

main() {
	struct vektor A, B, C;
	double bA, bB, bC, sValue;
	printf("Vektor A:\n");
	Eingabe(&A);
	Ausgabe(A);
	printf("Vektor B:\n");
	Eingabe(&B);
	Ausgabe(B);
	sValue = skalar(A, B);
	printf("Das Skalarprodukt von A*B ist: %.2lf\n", sValue);
	C = kreuz(A, B);
	printf("Vektor C: ");
	Ausgabe(C);
	bA = betrag(A);
	bB = betrag(B);
	bC = betrag(C);
	printf("Betrag(A) = %.2lf, Betrag(B) = %.2lf, Betrag(C) = %.2lf\n", bA, bB, bC);
	
}