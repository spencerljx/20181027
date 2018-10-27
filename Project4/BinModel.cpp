#include "BinModel.h"
#include<iostream>
#include<cmath>

using namespace std;

double BinModel::RiskNeutProb() {
	return (r - d) / (u - d);
}

double BinModel::GetR() {
	return r;
}

double BinModel::S(int n, int i) {
	return s0 * pow(1 + u, i)*pow(1 + d, n - i);
}

int BinModel::GetInputData() {
	cout << "Enter S0:";
	cin >> s0;
	cout << "Enter u:";
	cin >> u;
	cout << "Enter d:";
	cin >> d;
	cout << "Enter r:";
	cin >> r;
	cout << endl;

	if (s0 <= 0.0 || u <= -1.0 || d <= -1.0 || u <= d || r <= -1.0) {
		cout << "Illegal data ranges" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}
	if (r >= u || r <= d) {
		cout << "Arbitrage exists" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}
	cout << "Input data checked" << endl;
	cout << "There is no arbitrage" << endl;






}
