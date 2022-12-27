#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){
	cout << "Enter initial loan: ";
	double loan;
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	double interest;
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	double Payment;
	cin >> Payment;
	double TotalLoan, LoanOnly, NewBalance = 1; 
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int year = 0;

	while(NewBalance > 0){ 
		year = year+1;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		LoanOnly = loan*(interest/100);
		TotalLoan = loan + LoanOnly;
		if(TotalLoan>Payment){
		NewBalance = TotalLoan - Payment;
		}else{
			Payment = TotalLoan;
			NewBalance = 0;
		}
		cout << setw(13) << left << LoanOnly;
		cout << setw(13) << left << TotalLoan;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		loan = NewBalance;
	}

	return 0;
}
