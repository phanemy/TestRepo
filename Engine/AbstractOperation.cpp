#pragma once
#include "AbstractOperation.h"
#include <iostream>

AbstarctOperationEngine::AbstarctOperationEngine() {
	m_numberA = 0;
	m_numberB = 0;
}

void AbstarctOperationEngine::AskNumberA() {
	std::cout << "Type number A: "; // Type a number and press enter
	std::cin >> m_numberA; // Get user input from the keyboard
}

void AbstarctOperationEngine::AskNumberB() {
	std::cout << "Type number B: "; // Type a number and press enter
	std::cin >> m_numberB; // Get user input from the keyboard
}

double AbstarctOperationEngine::NumberA() { return m_numberA; }
double AbstarctOperationEngine::NumberB() { return m_numberB; }

