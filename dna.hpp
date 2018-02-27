#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"
namespace dna
{
char complementaryBase( char base )
{
	if( base == 'A' )
	{
		return 'T';
	}
	else if( base == 'T' )
	{
		return 'A';
	}
	else if( base == 'C' )
	{
		return 'G';
	}
	else
	{
		return 'C';
	}
}
char *complementarySequence (char *base, int size)
{
	char *dna = new char [size];
	for(int i=0;i<size;++i)
	{
		dna[(size-1)-i]=complementaryBase(base[i]);
	}
	return &dna[0];
}
char *analyzeDNA (char *base, int size, int &countA, int &countC, int &countG, int &countT)
{
	countA=arrays::countCharacter(&base[0],size,'A');
	countC=arrays::countCharacter(&base[0],size,'C');
	countG=arrays::countCharacter(&base[0],size,'G');
	countT=arrays::countCharacter(&base[0],size,'T');
	return complementarySequence(&base[0],size);	
}
}
#endif // DNA_HPP
