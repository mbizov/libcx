# Introduction
Libcx is an ANSI C library for operating on complex numbers.

# How to use
All functions are defined in the `cx_math.h` and `cx_math.c` files. You either need to add the library's files to your project or compile the library using the makefile and link to it later.

# Functionality
The `cx_float` structure is used in the whole library, it defines a complex number by its real and imaginary part.

Function | Parameters | Description
--- | --- | ---
`cx_magnitude` | `cx_float *z` | The magnitude (absolute value) of the complex number `z`
`cx_rad_angle` | `cx_float *z` | The angle of the complex number `z` in radians
`cx_deg_angle` | `cx_float *z` | The angle of the complex number `z` in degrees
`cx_conjugate` | `cx_float *z` | The conjugated version of the complex number `z` (inverts the imaginary part's sign)
`cx_add` | `cx_float *z1`, `cx_float *z2` | The sum of two complex numbers `z1` and `z2`
`cx_sub` | `cx_float *z1`, `cx_float *z2` | The subtracted value of two complex numbers `z1` and `z2` (`z1` - `z2`)
`cx_mul` | `cx_float *z1`, `cx_float *z2` | The multiplied value of two complex numbers `z1` and `z2` (in rectangular form)
`cx_div` | `cx_float *z1`, `cx_float *z2` | The divided value of two complex numbers `z1` and `z2` (`z1` / `z2`) (in rectangular form)
`cx_sqrt` | `cx_float *z` | The square root of the complex number `z`

# Building
To build the library run:
  `make all`

# License
[BSD 2-Clause License](LICENSE)

# TODO
* Add functions for complex numbers in polar form
