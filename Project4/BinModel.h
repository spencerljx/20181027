#ifndef BinModel_h
#define BinModel_h

class BinModel
{
private:
	double s0;
	double r;
	double u;
	double d;
public:
	double RiskNeutProb();
	double S(int n, int i);
	int GetInputData();
	double GetR();
};
#endif
