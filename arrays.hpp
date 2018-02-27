#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"

namespace arrays
{
void printAll(double *base, int arraySize)
{
	for (int i=0;i<arraySize;++i)
	{
		std::cout<<"Element "<<i<<" = "<<base[i]<<std::endl;
	}
}
double maxArray(double *base, int arraySize)
{
	double Max=0;
	for(int i=0;i<arraySize;++i)
	{
		if(base[i]>base[i+1])
		{
			if(base[i]>Max)
			{
				Max=base[i];
			}
		}
	}
	return Max;
}
double minArray (double *base, int arraySize)
{
	double Min=base[0];
	for(int i=0;i<arraySize;++i)
	{
		if(base[i]<base[i+1])
		{
			if(base[i]<Min)
			{
				Min=base[i];
			}
		}
	}
	return Min;
}
double meanArray (double *base, int arraySize)
{
	double Sum=0;
	for(int i=0;i<arraySize;++i)
	{
		Sum+=base[i];
	}
	return Sum/arraySize;
}
double varianceArray (double *base, int arraySize)
{
	double Sum=0;
	for(int i=0;i<arraySize;++i)
	{
		Sum+=base[i];
	}
	double Mean=Sum/arraySize;
	double Variance=0;
	for(int i=0;i<arraySize;++i)
	{
		Variance+=mathematics::square((base[i]-Mean));
	}
	return Variance/(arraySize-1);	
}
int countCharacter (char *basePointer, int size, char query)
{
	int counter=0;
	for (int i=0;i<size;++i)
	{
		if(basePointer[i]==query)
		{
			counter++;
		}
	}
	return counter;
}
}
#endif // ARRAYS_HPP
