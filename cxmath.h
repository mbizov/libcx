/*
Copyright (c) 2019, Marin Bizov
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the <project name> project.
*/
#ifndef _CXMATH_H_
#define _CXMATH_H_
#endif

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <math.h>
#include <stdio.h>

#define DEG_RAD(x) x * (M_PI / 180.0f)
#define RAD_DEG(x) x * (180.0f / M_PI)

/* represents a complex number */
typedef struct _cx_float {
	double re; /* real part */
	double im; /* imaginary part */
} cx_float;

/* returns the magnitude of a complex number */
double cx_magnitude(cx_float *z);

/* returns the angle of a complex number in radians */
double cx_rad_angle(cx_float *z);

/* returns the angle of a complex number in degrees */
double cx_deg_angle(cx_float *z);

/* returns the real part of a complex number */
//double cx_real(cx_float *z);

/* returns the imaginary part of a complex number */
//double cx_imaginary(cx_float *z);

/* returns the conjugate of a complex number */
cx_float cx_conjugate(cx_float *z);

/* adds two complex numbers in rectangular form */
cx_float cx_add(cx_float *z1, cx_float *z2);

/* subtracts two complex numbers in rectangular form */
cx_float cx_sub(cx_float *z1, cx_float *z2);

/* multiplies two complex numbers in rectangular form */
cx_float cx_mul(cx_float *z1, cx_float *z2);

/* divides two complex numbers in rectangular form */
cx_float cx_div(cx_float *z1, cx_float *z2);

/* calculate the square root of a complex number in rectangular form */
cx_float cx_sqrt(cx_float *z);
