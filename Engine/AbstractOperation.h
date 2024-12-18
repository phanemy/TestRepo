#pragma once
class AbstarctOperationEngine
{
public:
	AbstarctOperationEngine();
	
	void AskNumberA();
	void AskNumberB();
	
	double NumberA();
	double NumberB();
	
	virtual double Compute() =0;
protected:
	double m_numberA;
	double m_numberB;
};