//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	float loanAmount, Rate, noOfPayments, amountBack, monthlyPayment, temp1, temp2, temp3, interestPaid;
//	cout << "Enter the amuount of loan: ";
//	cin >> loanAmount;
//	
//	cout << "The number of payments: ";
//	cin >> noOfPayments;
//	cout << "The monthly interest rate is ";
//	cin >> Rate;
//	Rate = Rate / 100;
//	cout << "The rate is : ";
//	cout << Rate << '\n';
//	temp1 = pow(1 + Rate, noOfPayments);
//	temp2 =Rate * temp1;
//	temp3 = (pow(1 + Rate, noOfPayments) - 1);
//	monthlyPayment = (temp2 / temp3) * loanAmount;
//	interestPaid = (loanAmount - monthlyPayment);
//	amountBack = monthlyPayment * noOfPayments;
//	cout << "The monthly payment amount is: "<< monthlyPayment << '\n';
//	cout << "The interest paid amount  is: " << interestPaid << '\n';
//	cout << "The total amount back is: " << amountBack;
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}