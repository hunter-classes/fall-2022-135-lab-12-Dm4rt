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
	
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};
	std::vector<int> v1After{1,2,3,4,5};
	//std::vector<int> v2After{};
	
	for(int x=0;x<v1.size();x++){
		std::cout<<v1.at(x)<<std::endl;
	}
	gogeta(v1,v2);
	for(int x=0;x<v1.size();x++){
		std::cout<<v1.at(x)<<std::endl;
	}

}