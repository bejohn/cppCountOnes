/*
 * CountBinaryOne.cpp
 *
 *  Created on: 12-May-2020
 *      Author: zenmonk
 */

int getBinaryOnes(int num){
	int count{0};
	while(num){
		count++;
		num &= (num-1);
	}
	return count;
}




