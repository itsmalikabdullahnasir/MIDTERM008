#include <iostream>
using namespace std;

int main() {
	double total_amount;
	int loyaltyPoints = 0;
	int option;
	
	while(true) {
		cout<<"PRESS 1 TO MAKE PURCHASE & PRESS 2 TO REDEEM & PRESS 0 TO EXIT = "<< endl;
		cin>>option;
		if(option == 1){
			cout<<"ENTER PURCHASE AMOUNT = ";
			cin>>total_amount;
			loyaltyPoints += (int)(total_amount/10);
			cout<<"Total loyality points: " << loyaltyPoints << endl;
		}
		else if(option == 2){
			if(loyaltyPoints >= 10){
				loyaltyPoints -= 10;
				cout << "$5 discount given. Remaining points =  " << loyaltyPoints << endl;
			}
			else{
				cout << "NOT ENOUGH POINTS TO REDEEM" << endl;
			}
		}
		else if(option == 0){
			cout<<"QUITTING" << endl;
			break;
		}
		else{
			cout << "Invalid choice. Please try again." << endl;
		}
	}
	cout<<"Thanks for your time!!!!" << endl;
	return 0;
}
