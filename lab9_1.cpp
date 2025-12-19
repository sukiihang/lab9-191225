#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double prevBalance, rate, pay; 
	cout << "Enter initial loan: ";
	cin >> prevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2); 

	int year = 1;

	while(prevBalance > 0){
	double interest = prevBalance * rate / 100;
	double total = prevBalance + interest ;
	if(pay > total){
		pay = total;
	}
	double newBalance = total - pay; 

	cout << setw(13) << left << year; 
	cout << setw(13) << left << prevBalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newBalance;
	cout << "\n";	
	year++;
	prevBalance = newBalance;
	
}
	return 0;
}
