#pragma once
#include "AbstractOperation.h"

class SubEngine: public AbstarctOperationEngine
{
public:
	SubEngine();
	
	double Compute();
};