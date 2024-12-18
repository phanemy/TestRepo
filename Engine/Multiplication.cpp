#pragma once
#include "Soustraction.h"
#include <iostream>

SubEngine::SubEngine():AbstarctOperationEngine(){
}

double SubEngine::Compute() {return m_numberA - m_numberB;}
