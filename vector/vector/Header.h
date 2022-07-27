#pragma once
#include<stdio.h>
#include <math.h>
struct vektor {
	double x;
	double y;
	double z;
};
void Eingabe(struct vektor* vect);
void Ausgabe(struct vektor s1);
double skalar(struct vektor X, struct vektor Y);
struct vektor kreuz(struct vektor X, struct vektor Y);
double betrag(struct vektor X);

