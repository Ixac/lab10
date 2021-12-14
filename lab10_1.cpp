#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double lone;
	double inte,total,payment,nba ;
	double tax;
	
	cout << "Enter initial loan: ";
	cin >> lone ;

	cout << "Enter interest rate per year (%): ";
	cin>>tax;

	cout << "Enter amount you can pay per year: ";
	cin>>payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double pre = lone;
	for(int count=1 ; nba>0 ; count++){
		inte=pre*tax/100;
		total=pre+inte;
		if(total<payment)payment=total;
		nba=total-payment;
		
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count; 
	cout << setw(13) << left << pre;
	cout << setw(13) << left << inte;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << nba;
	cout << "\n";	
	pre=nba;
	}

	return 0;
}
