#include "Strangle.h"
#include<iostream>

using namespace std;


void Strangle::getK() {
	cout << "K1=" << K1 << endl;
	cout << "K2=" << K2 << endl;
}

int Strangle::GetInputData() {
	cout << "Enter strangle spread option data:" << endl;
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

double Strangle::Payoff(double z) {
	if (z<=K1)
		return K1-z;
	if (z >= K2)
		return  z- K2;
	return 0.0;
}