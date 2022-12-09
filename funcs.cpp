#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){
	std::vector<int> vect;
	for(int x=0; x<n;x++){
		vect.push_back(x);
	}
	return vect;
}
