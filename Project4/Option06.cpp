#include "BinModel.h"
#include "Option06.h"
#include<iostream>
#include<cmath>

using namespace std;

void EurOption::getN() {
	cout << "N=" << N << endl;
}

double EurOption::PriceByCRR(BinModel Model) {
	double q = Model.RiskNeutProb();
	double Price[100];
	for (int i = 0; i <= N; i++) {
		Price[i] = Payoff(Model.S(N, i));
	}
	for (int n = N - 1; n >= 0; n--) {
		for (int i = 0; i <= n; i++) {
			Price[i] = (q*Price[i+1] + (1 - q)*Price[i]) / (1 + Model.GetR());
		}
	}
	return Price[0];
}


int call::GetInputData() {
	cout << "Enter call option data:" << endl;
	int N;
	cout << "Enter steps to expiry N:";
	cin >> N;
	setN(N);
	cout << "Enter strike prices K:";
	cin >> K;
	cout << endl;
	return 0;
}

double call::Payoff(double z) {
	if (z > K)
		return z - K;
	return 0.0;
}

int put::GetInputData() {
	cout << "Enter put option data:" << endl;
	int N;
	cout << "Enter steps to expiry N:";
	cin >> N;
	setN(N);
	cout << "Enter strike prices K:";
	cin >> K;
	cout << endl;
	return 0;
}

double put::Payoff(double z) {
	if (z < K)
		return K-z;
	return 0.0;
}

int BullSpread::GetInputData() {
	cout << "Enter European bull spread data:" << endl;
	int N;
	cout << "Enter steps to expiry N:";
	cin >> N;
	setN(N);
	cout << "Enter parameter K1:";
	cin >> K1;
	cout << "Enter parameter K2:";
	cin >> K2;
	cout << endl;
	return 0;
}

double BullSpread::Payoff(double z) {
	if (z>=K2)
		return K2-K1;
	if (z<=K1)
		return 0.0;
	return z-K1;
}

int BearSpread::GetInputData() {
	cout << "Enter European bull spread data:" << endl;
	int N;
	cout << "Enter steps to expiry N:";
	cin >> N;
	setN(N);
	cout << "Enter parameter K1:";
	cin >> K1;
	cout << "Enter parameter K2:";
	cin >> K2;
	cout << endl;
	return 0;
}

double BearSpread::Payoff(double z) {
	if (z >= K2)
		return 0.0;
	if (z <= K1)
		return K2 - K1;
	return K2-z;
}