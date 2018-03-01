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
	double Variance=0;
	for(int i=0;i<arraySize;++i)
	{
		Variance+=mathematics::square((base[i]-meanArray(&base[0],arraySize)));
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
struct DoubleArray
{
	char *basePointer;
	int size;
};
struct CharacterArray
{
	char *basePointer;
	int size;
};
void printAll (DoubleArray array)
{
	for (int i=0;i<array.size;++i)
	{
		std::cout<<"Element "<<i<<" = "<<array.basePointer[i]<<std::endl;
	}
}
double maxArray (DoubleArray array)
{
	double Max=0;
	for(int i=0;i<array.size;++i)
	{
		if(array.basePointer[i]>array.basePointer[i+1])
		{
			if(array.basePointer[i]>Max)
			{
				Max=array.basePointer[i];
			}
		}
	}
	return Max;
}
double minArray (DoubleArray array)
{
	double Min=array.basePointer[0];
	for(int i=0;i<array.size;++i)
	{
		if(array.basePointer[i]<array.basePointer[i+1])
		{
			if(array.basePointer[i]<Min)
			{
				Min=array.basePointer[i];
			}
		}
	}
	return Min;
}
double meanArray (DoubleArray array)
{
	double Sum=0;
	for(int i=0;i<array.size;++i)
	{
		Sum+=array.basePointer[i];
	}
	return Sum/array.size;
}
double varianceArray (DoubleArray array)
{
	double Variance=0;
	for(int i=0;i<array.size;++i)
	{
		Variance+=mathematics::square((array.basePointer[i]-meanArray(array)));
	}
	return Variance/(array.size-1);
}
}
#endif // ARRAYS_HPP
