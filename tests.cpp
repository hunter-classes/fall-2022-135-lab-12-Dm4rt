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

TEST_CASE("goodVibes"){   
	std::vector<int> v{1,2,-1,3,4,-1,6};
	std::vector<int> betterV{1,2,3,4,6};
	CHECK(betterV==goodVibes(v));
	
	std::vector<int> z{1,2,-1,3,-5,0,4,-1,6,-12,11};
	std::vector<int> betterZ{1,2,3,4,6,11};
	CHECK(betterZ==goodVibes(z));
}

TEST_CASE("gogeta"){   
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};
	std::vector<int> v1After{1,2,3,4,5};
	
	gogeta(v1,v2);
	CHECK(v1==v1After);
	CHECK(v2.empty());
}



