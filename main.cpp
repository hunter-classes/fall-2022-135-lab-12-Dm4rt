#include <iostream>
#include "funcs.h"
#include <vector>

int main(){
	std::vector<int> vect=makeVector(8);
	for(int x=0;x<8;x++){
		std::cout<<vect.at(x)<<std::endl;
	}
}