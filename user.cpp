#include<iostream>
#include<conio.h>
#include<cctype>
#include <stdlib.h>
#include<fstream>
using namespace std;
int log();

class bank
{

public :
		int save,l;
		
		int choice;
		long double a;
		int accno;
		string s1; 
		string s2;
		string add;
		string mob;
		string line;
		char type;
		int deposit;
		
		public:
		void accnumber();
		void create();
		void show();
		void dep();
		void del();
		void modify();
		void search();
	void draw();
			

	};

		void bank::accnumber()
		{
			
		ifstream infile("COUNT.dat");
		infile>>a;

		ofstream outfile("COUNT.dat");
		a+=1;
		outfile<<a;
		outfile.close();
		}
			
			void bank::modify()
			{
				system("cls");
				
			}
		void bank:: create()
			{	
				system("cls");
				ofstream fout;  
    			fout.open ("data.dat",ios::app); 
    
     			cout<<"\n\t\t\t\tAccount number:";
				 cout<<a; 
     			
     
     			cout<<"\n\t\t\t\tYour First Name";
     			cin>>s1;
				 
   			
     
   				cout<<"\n\t\t\t\tEnter Mobile Number:"; 
    			cin>>mob;
    			cout<<"\nEnter Type of The account (C/S) : ";
                	cin>>type;
	               type=toupper(type);
	             cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
                    	cin>>deposit;
    			
                cout<<"\n\n\nAccount Created..";
     
     
   				fout<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit<<"\n"; 
        
 				
  			
 			    fout.close(); 
 			
				cout<<"\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cin>>save;
				system("cls");	
		
			}
			
       void bank::show()
			{
		
				system("cls");
	 			ifstream outf("data.dat",ios::app);
				 
				cout<<"\n\t\t\t\tAcc no "<<"Fname"<<"\t"<<"mob"<<"\t"<<"type"<<"\t"<<"deposit";
			    while ((outf>>a>>s1>>mob>>type>>deposit))
				{
					
				cout<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit;
				
				}

				outf.close();
				
	 			cout<<"\n\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cout<<"\t\t\t\t";cin>>save;
				system("cls");
			}
		
        void bank::dep()
             {
				
				
				int choice,id;
				int amount;
				ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				cout<<"\nEnter the Account Number :";
                cin>>id;
                
                 while ((inf>>a>>s1>>mob>>type>>deposit))
                  {
                  
				  	if(a==id)
				  	{
				  	
				  	  system("cls");
                     
                     
                        	
			    		 		cout<<"Enter the Amount Deposite :";
                         		cin>>amount;
                         		deposit=deposit+amount;
                         		outf<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit<<"\n";
                         		
                         		cout<<"Changes saved!";
                      	
							
				  			}
                             else
                             	outf<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit; 
                     }
                           
				  
				   outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				  
	 			cout<<"\nPress 1 Goto Main Menu...\n";			
				cin>>save;
				system("cls");	
				
			}
		

void bank::del()
{
	
	int del;
	ifstream inf("data.dat");
	ofstream outf("new.dat");
	cout<<"enter account number";
	cin>>del;
	
	while((inf>>a>>s1>>mob>>type>>deposit))
	{
		if(a!=del)
		{
		outf<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit;	
		}
		else
		{
			cout<<"record deleted";
		}
	}
	inf.close();
	outf.close();
	remove("data.dat");
	rename("new.dat","data.dat");
}




void bank::draw()
			{
				
				int choice,id;
				int amount;
				ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				cout<<"\nEnter the Account number:";
                cin>>id;
                
                 while ((inf>>a>>s1>>mob>>type>>deposit))
                  {
                  
				  	if(a==id)
				  	{
				  	
				  	
                     system("cls");
                     
                     
                        	
			    		 		cout<<"Enter the Amount Of Withdraw :";
                         		cin>>amount;
                         		deposit=deposit-amount;
                         		outf<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit;	
                         		
                         		cout<<"Changes saved!";
                      	
							
				  			}
                             else
                             	outf<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit;	
                     }
                           
				  
				   outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				  
	 			cout<<"\nPress 1 Goto Main Menu...\n";			
				cin>>save;
				system("cls");		
			}
			

void bank::search()
		{
			int no;
			system("cls");
			cout<<"Enter Account Number :";
			cin>>no;
	 			
				ifstream fin("data.dat",ios::app);
				
				
				cout<<"\n\t\t\t\tAcc no "<<"Fname"<<"\t"<<"Lname"<<"\t"<<"add"<<"\t"<<"mob\t\t"<<"Day-Month-Year\t"<<"Type\t"<<"Balance\n\n";
			    while ((fin>>a>>s1>>mob>>type>>deposit))
				{
					
					if(a==no)
					{			
				 	cout<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<mob<<"\t"<<type<<"\t"<<deposit;
			        }
				}

				fin.close();
				
	 			cout<<"\n\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cout<<"\t\t\t\t";cin>>save;
				system("cls");	
			
		}
			








// main page
int main()
{
//    log();
   bank b1;
	char ch;
	int num;
	while(1)
	{
		
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t06. DELETE ACCOUNT";
		cout<<"\n\n\t07. VIEW ACCOUNT";
		cout<<"\n\n\tSelect Your Option  ";
		cin>>ch;
			system("cls");
		switch(ch)
		{
		case '1':
			{
				b1.accnumber();
			b1.create();
				break;	
			 
			 	}
			 	case '2':{
			 	
		                     b1.dep();
		
			
				break;	
			 
			 	}
			 	case '3':
			 		{
			 			b1.draw();
			 			break;
					 }
					 case '4':
			 		{
			 			b1.search();
			 			break;
					 }
			 	case '6':{
			 	
		
			 b1.del();
			
				break;	
			 
			 	}
			 	case '7':
			 		{
			 			b1.show();			
						 break;
						 		 }
	    }
	}


	return 0;
}  //













int log ()
{
    string user;
    string user1="adesh";
    string Pass;
    string Pass1="1234";
    int at = 0;

    while (at < 3)
    {
        cout << "Enter your user name: ";
        cin >> user;
        cout << "Enter your user password: ";
        cin >> Pass;

        if (user == user1 && Pass == Pass1 )
        {
            cout << "\n\n Welcome adesh \n\n\n";
             cout << "Thank you for logging in.\n";
             cout <<"press any key";
            
             getch();
              system("cls");
           break;
        }
        
        else
        {
            cout << "Invalid login attempt. \n" << '\n';
            at++;
        }
    }
    if (at == 3)
    {
            cout << "your login attempts is overroold .";
           
    }

return 0;

}




