#include <iostream>
using namespace std;

double balance1;
int main()

{
	
	cout<<"\t\t		******  RJP BANK ATM MACHINE  ******"  <<endl;
	cout<<"\t\t  =========================================="<<endl;
	cout<<"\t\t  ========================================== \n\n"<<endl;
	
	
	
	int password;
	int pincode;
	
	
	cout<<"Please Enter the Pincode: ";
	cin>>pincode;
	
	
	if(pincode == 1234)
	{
		cout<<"\n Welcome Arjay \n";
		for(int i = 0; i<3; i++)
		{
			cout<<"Enter your password: \n";
			cin>>password;
			
			
			double balance = 100000;  //The current balance is 100000 pesos
			balance1 = balance;
			if(password == 1111)
			{
				
				for(int x=1; x< 10; x++)
				{
					double withdraw, deposit;
					int choice;
					cout<<endl;
					if(x == 1)
					{
						 cout<<"\t\t ATM" <<endl;
						 cout<<"Choose a Transaction \n\n";
					    }
					cout<<"\t\t		******MAIN SCREEN****** \n"  <<endl;
					cout<<"[1] Inquire Balance" <<endl;
					cout<<"[2] Withdraw"<<endl;
					cout<<"[3] Deposit"<<endl;
					cout<<"[4] Exit"<<endl;
					cout<<endl;
					cout<<"Enter Option: ";
					cin>>choice;
					
					
					
					switch(choice)
					{
						
					case 1:
						cout<<"Balance Inquiry"<<endl;
						cout<<"Your current Balance is: P" <<balance1<<endl;
						continue;
					case 2:
						cout<<"Withdraw"<<endl;
						cout<<"Enter Amount: P";
						cin>>withdraw;
						balance1 = balance1 - withdraw;
						cout<<"You withdraw: P" <<withdraw <<endl;
						cout<<"Your remaining balance is: P" <<balance1 <<endl;
						continue;		
					case 3:
						cout<<"Deposit"<<endl;
						cout<<"Enter amount: P";
						cin>>deposit;
						balance1 = balance1 + deposit;
						cout<<"You deposited: P" <<deposit <<endl;
						cout<<"Your new Balance is: P" <<balance1<<endl;
						continue;
					case 4:
						cout<<"EXIT MODE"<<endl;
						system("cls");
						break;
					default:
						cout<<"Invalid Option"<<endl;
						continue;
					}	
					break;				
				}
				break;
			}
			else if(i ==2)
			{
				cout<<"Card is captured"<<endl;
			}
			else
			{
				cout<<"Pls try again"<<endl;
			}
		}
	}





	
}
