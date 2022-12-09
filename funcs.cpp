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

std::vector<int> goodVibes(const std::vector<int>& v){
	std::vector<int> betterVect;
	for(int x=0;x<v.size();x++){
		if(v.at(x)>0){
			betterVect.push_back(v.at(x));
		}
	}
	return betterVect;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
	for(int x=0;x<vegeta.size();x++){
		goku.push_back(vegeta.at(x));
	}
	vegeta.clear();
	
}