/*
 * mainpgm.cpp
 *
 *  Created on: 12-May-2020
 *      Author: zenmonk
 */

#include <iostream>

#include "CountBinaryOnes.h"

int main(){
	int num;
	std::cout << "\nEnter a number: ";
	std::cin >> num;
	std::cout << "\nNumber of ones in its binary is " << getBinaryOnes(num);
	return EXIT_SUCCESS;
}



