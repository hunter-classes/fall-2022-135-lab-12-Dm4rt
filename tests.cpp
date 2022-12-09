#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("makeVector"){   
	std::vector<int> vect=makeVector(8);
	for(int x=0;x<8;x++){
		CHECK(vect.at(x)==x);
	}
	std::vector<int> noVect=makeVector(5);
	for(int x=0;x<5;x++){
		CHECK(noVect.at(x)==x);
	}
	std::vector<int> siVect=makeVector(13);
	for(int x=0;x<13;x++){
		CHECK(siVect.at(x)==x);
	}
}



