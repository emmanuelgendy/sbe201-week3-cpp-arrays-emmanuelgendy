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
using ECGArray = arrays::DoubleArray;

struct Statistics
{
	double mean;
	double variance;
	double min;
	double max;
};
Statistics analyzeECG (ECGArray ecg)
{
	Statistics ECG={0,0,0,0};
	ECG.mean=arrays::meanArray(ecg);
	ECG.variance=arrays::varianceArray(ecg);
	ECG.max=arrays::maxArray(ecg);
	ECG.min=arrays::minArray(ecg);
	return ECG;
}
}

#endif // ECG_HPP
