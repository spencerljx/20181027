#ifndef Strangle_h
#define Strangle_h
#include "Option06.h"
#include<iostream>

class Strangle :public EurOption {
private:
	double K1;
	double K2;
public:
	void SetK(double k1, double k2) {
		K1 = k1;
		K2 = k2;
	}
	void getK();
	int GetInputData();
	double Payoff(double z);
};
#endif
