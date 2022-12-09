#include <iostream>
#include "funcs.h"
#include <vector>

int main(){
	std::vector<int> vect=makeVector(8);
	for(int x=0;x<8;x++){
		std::cout<<vect.at(x)<<std::endl;
	}
	
	std::vector<int> v{1,2,-1,3,4,-1,6};
	std::vector<int> betterV=goodVibes(v);
	
	std::vector<int> z{1,2,-1,3,-5,0,4,-1,6,-12,11};
	std::vector<int> betterZ = goodVibes(z);
}