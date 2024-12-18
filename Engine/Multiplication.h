#pragma once
#include "AbstractOperation.h"

class MulEngine : public AbstarctOperationEngine
{
public:
	MulEngine();
	
	double Compute();
};