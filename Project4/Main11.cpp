#include"BinModel.h"
#include"Option06.h"
#include"DoubDigitOpt.h"
#include"Strangle.h"
#include"Butterfly.h"
#include<iostream>
#include<cmath>

using namespace std;
int main() {
	BinModel Model;
	if (Model.GetInputData()==1)
		return 1;
	call Option1;
	Option1.GetInputData();
	cout << "European call option price=" << Option1.PriceByCRR(Model) << endl << endl;
	put Option2;
	Option2.GetInputData();
	cout << "European put option price=" << Option2.PriceByCRR(Model) << endl << endl;
	DoubDigitOpt Option3;
	Option3.GetInputData();
	cout << "European double-digital price=" << Option3.PriceByCRR(Model) << endl << endl;
	Strangle Option4;
	Option4.GetInputData();
	Option4.getN();
	Option4.getK();
	cout << "European strangle spread option price=" << Option4.PriceByCRR(Model) << endl << endl;
	Butterfly Option5;
	Option5.GetInputData();
	Option5.getN();
	Option5.getK();
	cout << "European butterfly spread option price=" << Option5.PriceByCRR(Model) << endl << endl;
	system("pause");
	return 0;

}
/*
Enter S0:106
Enter u:0.1525
Enter d:-0.13138
Enter r:0.00545

Input data checked
There is no arbitrage
Enter call option data:
Enter steps to expiry N:8
Enter strike prices K:100

European call option price=21.7726

Enter put option data:
Enter steps to expiry N:8
Enter strike prices K:100

European put option price=11.5176

Enter double-digital option data:
Enter steps to expiry N:8
Enter parameter K1:100
Enter parameter K2:110

European double-digital price=0.260448

Enter strangle spread option data:
Enter steps to expiry N:8
Enter parameter K1:100
Enter parameter K2:110

N=8
K1=100
K2=110
European strangle spread option price=28.4991

Enter butterfly spread option data:
Enter steps to expiry N:8
Enter parameter K1:100
Enter parameter K2:110

N=8
K1=100
K2=110
European butterfly spread option price=0.921831
*/