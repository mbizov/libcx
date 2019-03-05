# Makefile for libcx

CC=gcc
AR=ar
ARFLAGS=rcs
CFLAGS=-pipe -O2

all: libcx.o libcx.a

libcx.o:
	$(CC) $(CFLAGS) -c -o libcx.o cx_math.c

libcx.a:
	$(AR) $(ARFLAGS) libcx.a libcx.o
