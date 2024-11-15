#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;

class bank              
{
	private:                            
		float acBlnc;
		string name, fName, id, password, address, mobl, pin;       

	public:	                         
		void menu();
		void inBank();
		void newUser();
		void extCuctmer();
		void cashDeposit();
		void cashWithdraw();
		void monyTrnsfr();
		void payment();
		void srchAc();
		void editAcInfo();
		void delAc();
		void showAllRecords();
		void showPayment();

		void inAtm();
		void cumstmerBalance();
		void cashWithdrawAtm();
		void acDetail();
		
		
};
void introduction();
void design();
int main()
{
	bank obj;
	introduction();
	obj.menu();
}
	void introduction()                          // introduction Manu.    
	{
		cout<<"\n\n\n\n\n\t";
		design();

		cout<<"\a* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t $ Bank Management System $ \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\tProject By:\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t \e  xxyz\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
			design();
	
		getch();
	
	}
	
//.2	
	void bank::menu() 
	{
		p:
		system("cls");
		int choice;
		char ch;
		string pin,pass,email;
		cout<<"\n\n\n\n\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                        // Main Manu
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\tWell Come to XYZ Bank\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t1. Bank Visit\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t2. ATM Visit\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t3. Exit\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";	
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		cout<<"\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
			cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
				a:
				system("cls");                    // system("cls") for clear screen
				cout<<"\n\n\t\t\tLogin System";
				cout<<"\n\n E-mail : ";
				cin>>email;
				cout<<"\n\n\t\t Pin Code : ";    // 5 digits baink pin
				for(int i=1;i<=5;i++)
				{
					ch = getch();
					pin += ch;
					cout<<"*";
				}
				cout<<"\n\n Password : ";       // banks password 
				for(int i=1;i<=5;i++)
				{
					ch = getch();
					pass += ch;
					cout<<"*";
				}
				if(email == "hbl.bank@gmail.com" && pin == "11111" && pass == "11111")
				{
					inBank();	
				}
				
				else
				{
					cout<<"\n\tInvalid login";	
				}
			
				break;
				}
				case 2:                                  // For atm system.
				{
					inAtm();
					break;
				}
				case 3:
				{
					exit(0);
				}		
				default:
				{
					cout<<"\n\n Invalid Value...Please Try Again...";
				}			
		}
		getch();
		goto p;
	}
	void bank::inBank()
	{
		p:
		system("cls");
		int choice;
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                       // Account functions Manu
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t HBL Manu \t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 1.  New Customer\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 2.  Ex. Customer\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 3.  Cash Deposit \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 4.  Cash Withdraw \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 5.  Funds Transfer \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 6.  Bill Payments \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 7.   Serch customer details\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 8.  Edit customer Record\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 9.  Delete Account \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 10. Show All Accounts Record\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 11. Bill Payment Records\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 12. Go Back\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		cout<<"\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:                          
				newUser();
				break;
			case 2:                        
				extCuctmer();
				break;
			case 3:
				cashDeposit();
				break;
			case 4:
				cashWithdraw();
				break;
			case 5:
				monyTrnsfr();
				break;
			case 6:
				payment();
				break;
			case 7:
				srchAc();
				break;
			case 8:
				editAcInfo();
				break;
			case 9:
				delAc();
				break;
			case 10:
				showAllRecords();
				break;
			case 11:
				showPayment();
				break;
			case 12:
				menu();
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
		}
		getch();
		goto p;
	}

	void bank::newUser()                            // new account function
	{
		p:
		system("cls");
		fstream file;
		int p;
		float b;
		string n,f,pa,a,ph,i;                       // n for name. f for father name. pa for password. a for address. p for mobl number. i for id.
		
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Add New User\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
			
		design();
		cout<<"\n\n User ID : ";
		cin>>id;
		cout<<"\n\n\t\tName : ";
		cin>>name;
		cout<<"\n\n Father Name : ";
		cin>>fName;
		cout<<"\n\n\t\tAddress : ";
		cin>>address;
		cout<<"\n\n Pin Code (5 digit) : ";
		cin>>pin;
		cout<<"\n\n\t\tPassword (5 digit) : ";
		cin>>password;
		cout<<"\n\n Phone No. : ";
		cin>>mobl;
		cout<<"\n\n\t\tCurrent Balance $ : ";
		cin>>acBlnc;
		file.open("bank.txt",ios::in);
		
		if(!file)                               
		{
			file.open("bank.txt",ios::app|ios::out);
			file<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
			file.close();
		}
		else                                                 
		{
			file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			while(!file.eof())
			{
				if(i == id)
				{
					cout<<"\n\n User ID Already Exist...";
					getch();
					goto p;
				}
				file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			}
			
			
			file.close();
			file.open("bank.txt",ios::app|ios::out);               // Save data in the file. if id or data not mathch to old data.   
			file<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
			file.close();
		}
		cout<<"\n\n\t\t\t New User Account Created Successfully..."; 	
	}
	
	void bank::extCuctmer()         // already account function
	{
		system("cls");
		fstream file;
		string t_id;
		int found=0;
	cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Already User Account\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					system("cls");
					cout<<"\n\n\t\t\t Already User Account";
					cout<<"\n\n\t User ID: "<<id;
					cout<<"\n\tPin Code: "<<pin;
					cout<<"\n\tPassword: "<<password;
					cout<<"\n\tPhone number : "<<mobl;
					cout<<"\n\tBalance $ "<<acBlnc;
					found++;
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::cashDeposit()                       // cassh deposit function
	{
		fstream file,file1;
		string t_id;
		float dep;
		int found=0;
		system("cls");
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\tAmount Deposit \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		cout<<"\n\n\t\t\t";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n Amount For Deposit : ";
					cin>>dep;
					acBlnc += dep;
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
					found++;
					cout<<"\n\n\t\t\tYour Amount "<<dep<<" Sucessfully Deposit...";
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			
			remove("bank.txt");
			rename("bank1.txt","bank.txt");	
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::cashWithdraw()                             // cash withdraw function
	{
		fstream file,file1;
		string t_id;
		float with;
		int found=0;
		system("cls");
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Account Withdraw \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n Amount For Withdraw : ";
					cin>>with;
					if(with <= acBlnc)
					{
						acBlnc -= with;
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
						cout<<"\n\n\t\t\tYour Amount "<<with<<" Sucessfully Withdraw...";
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
						cout<<"\n\n\t\t\tYour Current Balance $ "<<acBlnc<<" is Less...";
					}
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::monyTrnsfr()                        // function for money transfer from one account to another
	{
		fstream file,file1;
		system("cls");
		string s_id,r_id;
		int found=0;
		float amount;	
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Money Transfer \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n\t Sender Account_ID : ";
			cin>>s_id;
			cout<<"\n\n\t Reciver Account_ID : ";
			cin>>r_id;
			cout<<"\n\n   Transction Amount $ : ";
			cin>>amount;
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(s_id == id && amount <= acBlnc)
				found++;
				else if(r_id == id)
				found++;
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			if(found == 2)
			{
				file.open("bank.txt",ios::in);
				file1.open("bank1.txt",ios::app|ios::out);
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
				while(!file.eof())
				{
					if(s_id == id)
					{
						acBlnc -= amount;
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
					}
					else if(r_id == id)
					{
						acBlnc += amount;
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
					}
					file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
				}
				file.close();
				file1.close();
				remove("bank.txt");
				rename("bank1.txt","bank.txt");
				cout<<"\n\n\t\t\tTransction Sucessfully...";
			}
			else
			{
				cout<<"\n\n\t\t\t Transction Account_IDs are Invalid...";
			}
		}
	}
	
	void bank::payment()                                                    // Payments
	{
		system("cls");
		fstream file,file1;
		int found=0;
		float amount;
		string t_id,b_name;
		SYSTEMTIME x;
		cout<<"\n\t";
		design();
	
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Bills Payments \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\t Bill Name : ";
			cin>>b_name;
			cout<<"\n\t Bill Amount : ";
			cin>>amount;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id && amount <= acBlnc)
				{
					acBlnc -= amount;
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 1)
			{
				GetSystemTime(&x);
				file.open("bill.txt",ios::app|ios::out);
				file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
				file.close();
				cout<<"\n\n\t\t\t"<<b_name<<" Bill Pay Sucessfully...";
			}
			else
			{
				cout<<"\n\n\t\t\t User ID OR Amount Invalid...";
			}
		}
	}
	void bank::srchAc()
	{
		system("cls");
		fstream file;
		string t_id;
		int found=0;	
		cout<<"\n\t";
		design();
	
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Serch customer details \t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					system("cls");
					
						cout<<"\n\t";
						design();
	
					cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
					cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
					cout<<"\t* *\t\t\t\t\t Search Customer Record \t\t\t\t  * *\n";
					cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
					cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
					design();
					cout<<"\n\n\t User ID: "<<id;
					cout<<"\n\t Name: "<<name;
					cout<<"\n\t Father's Name: "<<fName;
					cout<<"\n\t Address: "<<address;
					cout<<"\n\t Pin: "<<pin;
					cout<<"\n\t Password: "<<password;
					cout<<"\n\t Phone No.: "<<mobl;
					cout<<"\n\t Current Balance $ : "<<acBlnc;
					cout<<"\n\n=================================================";
					found++;
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::editAcInfo()
	{
		system("cls");
		fstream file,file1;
		string t_id,n,f,a,p,ph;
		int found=0,pi;
		cout<<"\n\t";
		design();
	
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Edit Customer Record \t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\ns\tName : ";
					cin>>n;
					cout<<"\n\t Father Name : ";
					cin>>f;
					cout<<"\n\t\tAddress : ";
					cin>>a;
					cout<<"\n\t Pin Code (5 digit) : ";
					cin>>pi;
					cout<<"\n\tPassword : ";
					cin>>p;
					cout<<"\n\t Phone No. : ";
					cin>>ph;
					file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<acBlnc<<"\n";
					cout<<"\n\n\n\t\t\tRecord Edit Sucessfully...";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");			
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::delAc()
	{
		system("cls");
		fstream file,file1;
		string t_id;
		int found=0;
		cout<<"\n\t";
		design();
	
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Delete Account \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n\n\t\t\tRecord Deleted Sucessfully...";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");			
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::showAllRecords()
	{
		system("cls");
		fstream file;
		int found=0;
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t  All Customers Records \t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			while(!file.eof())
			{
				cout<<"\n\n\n\t User ID : "<<id;
				cout<<"\n\t Name : "<<name;
				cout<<"\n\t Father Name : "<<fName;
				cout<<"\n\t Address : "<<address;
				cout<<"\n\t Pin : "<<pin;
				cout<<"\n\t Password : "<<password;
				cout<<"\n\t Phone No. : "<<mobl;
				cout<<"\n\t Current Balance $ : "<<acBlnc;
				cout<<"\n\n===============================================";
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
				found++;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n Data Base is Empty...";
		}
	}
	void bank::showPayment()
	{
		system("cls");
		fstream file;
		int found=0;
		float amount;
		string c_date;
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t  All Bill's Records \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bill.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			file>>id>>name>>amount>>c_date;
			while(!file.eof())
			{
				cout<<"\n\n\n\t User ID : "<<id;
				cout<<"\n\t Bill Name : "<<name;
				cout<<"\n\t Bill Amount : "<<amount;
				cout<<"\n\t Date : "<<c_date;
				cout<<"\n\n===============================================";
				file>>id>>name>>amount>>c_date;
				found++;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n Data Base is Empty...";
		}
	}


	
	void bank::inAtm()                     // Atm management system
	{
		p:
		system("cls");
		int choice;
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                       // Account functions Manu
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t HBL ATM \t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 1. Balance Inquiry\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 2.  Cash Withdraw\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 3.  Account Detailes \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t 4.  Go Back \t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		cout<<"\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cumstmerBalance();
				break;
			case 2:
				cashWithdrawAtm();
				break;
			case 3:
				acDetail();
				break;
			case 4:
				menu();
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
		}
		getch();
		goto p;
	}	
	void bank::cumstmerBalance()
	{
		system("cls");
		fstream file;
		int found=0;
		string t_id,t_pin;
		char ch;
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Balance Inquiry \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
		
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t\tPin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			
			file>>id>>name>>fName>>address>>pin>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin)
				{
					cout<<"\n\n\t\t\tYour Current Balance is $ : "<<acBlnc;
					found++;
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n\t\t\tUser ID, Pin Invalid...";
		}
	}
	void bank::cashWithdrawAtm()
	{
		fstream file,file1;
		string t_id,t_pin;
		float with;
		char ch;
		int found=0;
		system("cls");
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Cash Withdraw \t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t\tPin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fName>>address>>pin>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin )
				{
					cout<<"\n\n Amount For Withdraw : ";
					cin>>with;
					if(with <= acBlnc)
					{
						acBlnc -= with;
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
						cout<<"\n\n\t\t\tYour Amount "<<with<<" Sucessfully Withdraw...";
						cout<<"\n\n\t\t\t     Your Current Balance "<<acBlnc;
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
						cout<<"\n\n\t\t\tYour Current Balance $ "<<acBlnc<<" is Less...";
					}
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fName<<" "<<address<<" "<<pin<<" "<<password<<" "<<mobl<<" "<<acBlnc<<"\n";
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::acDetail()
	{
		fstream file;
		string t_id,t_pin;
		char ch;
		int found=0;
		system("cls");
		cout<<"\n\t";
		design();
		
		cout<<"* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t Account Details \t\t\t\t\t  * *\n";
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n";                     
		cout<<"\t* *\t\t\t\t\t\t\t\t\t\t\t\t  * *\n\t";
	
		design();
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t Pin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			file>>id>>name>>fName>>address>>pin>>mobl>>acBlnc;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin)
				{
					system("cls");
					cout<<"\n\n\t\t\tCustomer Details:";
					cout<<"\n\n\tUser ID : "<<id;
					cout<<"\n\t Name : "<<name;
					cout<<"\n\t Father Name : "<<fName;
					cout<<"\n\t Address : "<<address;
					cout<<"\n\t Pin : "<<pin;
					cout<<"\n\t Password : "<<password;
					cout<<"\n\t Phone No. : "<<mobl;
					cout<<"\n\t Current Balance $ : "<<acBlnc;
					found++;
				}
				file>>id>>name>>fName>>address>>pin>>password>>mobl>>acBlnc;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n\t Invalid User-ID...";
		}
	}
	
	void design()
	{
		for(int i=0;i<3;i++)
		{		
			for(int i=0;i<=50;i++)
			{
				cout<<"* ";
			}                                               // introduction to database.
			cout<<"\n\t";	                                  
		}
	}
