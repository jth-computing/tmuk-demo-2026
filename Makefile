# Makefile for tmuk-demo-2026
#
# This makefile has three targets:
# * all
# * run
# * hello

all: hello

run: all
	./hello

hello: hello.c
