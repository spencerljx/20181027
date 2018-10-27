#include "Butterfly.h"
#include<iostream>

using namespace std;

void Butterfly::getK() {
	cout << "K1=" << K1 << endl;
	cout << "K2=" << K2 << endl;
}

int Butterfly::GetInputData() {
	cout << "Enter butterfly spread option data:" << endl;
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

double Butterfly::Payoff(double z) {
	double mid = (K1 + K2) / 2;
	if (z > K1&&z<=mid)
		return z-K1;
	if (z > mid&&z<=K2)
		return  K2-z;
	return 0.0;
}