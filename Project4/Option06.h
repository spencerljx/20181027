#ifndef option06_h
#define option06_h
#include "BinModel.h"


class EurOption {
private:
	int N;

public:
	void setN(int N_){
		N = N_;
	}
	void getN();
	virtual double Payoff(double z) = 0;
	double PriceByCRR(BinModel Model);

};

class call :public EurOption {
private:
	double K;
public:
	void SetK(double K_) {
		K = K_;
	}
	int GetInputData();
	double Payoff(double z);
};

class put : public EurOption {
private:
	double K;
public:
	void SetK(double K_) {
		K = K_;
	}
	int GetInputData();
	double Payoff(double z);
};

class BullSpread:public EurOption {
private:
	double K1;
	double K2;
public:
	void SetK(double k1,double k2) {
		K1=  k1;
		K2 = k2;
	}
	int GetInputData();
	double Payoff(double z);
};

class BearSpread :public EurOption {
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

