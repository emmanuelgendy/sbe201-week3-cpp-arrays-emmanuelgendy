#ifndef ECG_HPP
#define ECG_HPP

#include "arrays.hpp"
namespace ecg
{
void analyzeECG(double *base, int arraySize, double &mean, double &variance, double &max, double &min)
{
	mean=arrays::meanArray(base, arraySize);
	variance=arrays::varianceArray(base, arraySize);
	max=arrays::maxArray(base, arraySize);
	min=arrays::minArray(base, arraySize);
}
}

#endif // ECG_HPP
