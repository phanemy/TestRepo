#pragma once
#include "Multiplication.h"
#include <iostream>

MulEngine::MulEngine():AbstarctOperationEngine(){
}

double MulEngine::Compute() {return m_numberA * m_numberB;}
