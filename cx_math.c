#include "cx_math.h"

/* signum function */
double sgn(double x) {
	if (x > 0) return 1.0f;
	if (x == 0) return 0.0f;
	if (x < 0) return -1.0f;
}

double cx_magnitude(cx_float *z) {
	return sqrt(pow(z->re, 2) + pow(z->im, 2));
}

double cx_rad_angle(cx_float *z) {
	return atan2(z->re, z->im);
}

double cx_deg_angle(cx_float *z) {
	return RAD_DEG(atan2(z->re, z->im));
}

double cx_real(cx_float *z) {

}

double cx_imaginary(cx_float *z) {

}

cx_float cx_conjugate(cx_float *z) {
	cx_float z_conj;
	z_conj.re = z->re;
	z_conj.im = -z->im;
	return z_conj;
}

cx_float cx_add(cx_float *z1, cx_float *z2) {
	cx_float z3;
	z3.re = z1->re + z2->re;
	z3.im = z1->im + z2->im;
	return z3;
}

cx_float cx_sub(cx_float *z1, cx_float *z2) {
	cx_float z3;
	z3.re = z1->re - z2->re;
	z3.im = z1->im - z2->im;
	return z3;
}

cx_float cx_mul(cx_float *z1, cx_float *z2) {
	cx_float z3;
	z3.re = ((z1->re * z2->re) - (z1->im * z2->im));
	z3.im = ((z1->re * z2->im) + (z2->re * z1->im));
	return z3;
}

cx_float cx_div(cx_float *z1, cx_float *z2) {
	cx_float z3;
	z3.re = ((z1->re * z2->re) + (z1->im * z2->im)) / (pow(z2->re, 2) + pow(z2->im, 2));
	z3.im = ((z1->im * z2->re) - (z1->re * z2->im)) / (pow(z2->re, 2) + pow(z2->im, 2));
	return z3;
}

cx_float cx_sqrt(cx_float *z) {
	cx_float z1;
	double gamma = sqrt((z->re + cx_magnitude(z)) / 2);
	double delta = sgn(z->im) * sqrt((-z->re + cx_magnitude(z)) / 2);

	z1.re = gamma;
	z1.im = delta;

	return z1;
}