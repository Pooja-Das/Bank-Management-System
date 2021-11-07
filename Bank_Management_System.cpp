#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class bank
{
	char name[100];
	char add[100];
	char y;
	int balance;
	int dep;
	float with;
	public:
		void open_Account() ;
		void Deposit_Money();
		void Withdraw_Money();
		void Display_Account();
};
void bank ::open_Account(){
	cout<<"Enter your Full name ::"<<endl;
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter Your Address ::"<<endl;
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open saving (s) or current(c)"<<endl;
	cin>>y;
	cout<<"Enter amount for deposit "<<endl;
	cin>>balance;
	cout<<"Your Account is created Successfully"<<endl;
}
void  bank::Deposit_Money(){
	cout<<"Enter Amount you want to deposit"<<endl;
	cin>>dep;
	balance=balance+dep;
	cout<<"Your Total balance is :: "<<balance<<endl;
}
void  bank::Withdraw_Money(){
	cout<<"Withdraw"<<endl;
	cout<<"Enter Amount to withdraw"<<endl;
	cin>>with;
	balance=balance-with;
	cout<<"Your Total balance left  is :: "<<balance<<endl;
	
}
void bank::Display_Account(){
	cout<<"Account Holder's Name :"<<name<<endl;
	cout<<"Account Holder's Address :"<<add<<endl;
	cout<<"Type Of Account that you opened ::"<< y<<endl;
	cout<<"Amount you deposit ::"<<balance<<endl;
}

int main()
{
	int option;
	bank obj;
	char x;
	do{
	
	cout<<"Open Account"<<endl;
	cout<<"Deposit Money"<<endl;
	cout<<"Withdraw Money"<<endl;
	cout<<"Display Account"<<endl;
	cout<<"Exit"<<endl;
	cout<<"Select the option from above :"<<endl;
	cin>>option;
	    switch(option)
	    {
		case 1:
		cout<<"Open Account"<<endl;
		obj.open_Account();
		break;
		case 2:
		cout<<"Deposit Money"<<endl;
		obj.Deposit_Money();
		break;
		case 3:
		cout<<"Withdraw Money "<<endl;
		obj.Withdraw_Money();
		break;
		case 4:
		cout<<"Display Account"<<endl;
		obj.Display_Account();
		break;
		case 5:
			if(option==5){
				exit(1);
			
			}
		default:
			cout<<"This is not exit try again"<<endl;
		}
		cout<<"Do you want to select next option then press :: y/n"<<endl;
		cin>>x;
		if(x=='n'){
			break;
		}
		
	}while(x=='y');
	return 0;
	
}
