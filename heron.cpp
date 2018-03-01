#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof

// We need main function here!

int main(int argc, char *argv [])
{
	mathematics::Triange t{0,0,0};
	double a = std::atof(argv[1]);
	double b = std::atof(argv[2]);
	double c = std::atof(argv[3]);
	double Area = mathematics::heron(a,b,c);
	std::cout<<mathematics::heron(t)<<std::endl;
	return 0;
}
