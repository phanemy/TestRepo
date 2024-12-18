#pragma once
#include "Addition.h"
#include <iostream>

AddEngine::AddEngine() :AbstarctOperationEngine(){}

double AddEngine::Compute() {return m_numberA + m_numberB;}
