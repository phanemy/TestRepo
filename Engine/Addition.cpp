#pragma once
#include "Addition.h"
#include <iostream>

AddEngine::AddEngine() {
	m_numberA = 0;
	m_numberB = 0;
}

void AddEngine::AskNumberA() {
	std::cout << "Type number A: "; // Type a number and press enter
	std::cin >> m_numberA; // Get user input from the keyboard
}

void AddEngine::AskNumberB() {
	std::cout << "Type number B: "; // Type a number and press enter
	std::cin >> m_numberB; // Get user input from the keyboard
}

double AddEngine::NumberA() { return m_numberA; }
double AddEngine::NumberB() { return m_numberB; }

double AddEngine::Compute() {return m_numberA + m_numberB;}
