#pragma once
class AddEngine
{
public:
	AddEngine();
	
	void AskNumberA();
	void AskNumberB();
	
	double NumberA();
	double NumberB();
	
	double Compute();
private:
	double m_numberA;
	double m_numberB;
};