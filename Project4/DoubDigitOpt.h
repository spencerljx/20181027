#ifndef DoubDigitOpt_h
#define DoubDigitOpt_h
#include "Option06.h"

class DoubDigitOpt :public EurOption {
private:
	double K1;
	double K2;
public:
	void SetK(double k1, double k2) {
		K1 = k1;
		K2 = k2;
	}
	int GetInputData();
	double Payoff(double z);
};
#endif
