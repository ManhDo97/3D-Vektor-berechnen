#include"Header.h"


void Eingabe(struct vektor* vect) {
	printf("x: ");
	scanf("%lf", &vect->x);
	printf("\ny: ");
	scanf("%lf", &vect->y);
	printf("\nz: ");
	scanf("%lf", &vect->z);
}
void Ausgabe(struct vektor s1) {
	printf("(%0.2lf,%0.2lf,%0.2lf )\n", s1.x, s1.y, s1.z);

}

double skalar(struct vektor X, struct vektor Y) {
	return X.x * Y.x + X.y * Y.y + X.z * Y.z;
}

struct vektor kreuz(struct vektor X, struct vektor Y) {
	struct vektor Z;
	Z.x = X.y * Y.z - X.z * Y.y;
	Z.y = X.z * Y.x - X.x * Y.z;
	Z.z = X.x * Y.y - X.y * Y.x;
	return Z;
}

double betrag(struct vektor X) {

	return sqrt(pow(X.x, 2) + pow(X.y, 2) + pow(X.z, 2));
}