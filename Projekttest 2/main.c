﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"



int main(void) {

	int izbor = 1;

	kreirajDatoteku("BMW.bin");


	while (izbor) {
		izbor = izbornik("BMW.bin");
	}

	return 0;
}