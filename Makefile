# Makefile for libcx

CC=gcc
AR=ar
ARFLAGS=rcs
CFLAGS=-pipe -O2

all: libcx.o libcx.a

libcx.o:
	$(CC) $(CFLAGS) -c -o libcx.o cxmath.c

libcx.a:
	$(AR) $(ARFLAGS) libcx.a libcx.o
