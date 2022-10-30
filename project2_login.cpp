#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void login();
void registration();
void forgot();



int main()
{
    main:
    int c;
    cout<<"\t\t\t_________________________________________\n\n\n";
    cout<<"\t\t\t                 WELCOME TO LOGIN PAGE   \n\n\n";
    cout<<"\t\t\t_______________________ MENU ___________ \n\n\n";
    cout<<"                                               \n\n\n";
    cout<<"Press 1 to Login                 |"<<endl;
    cout<<"Press 2 to Register              |"<<endl;
    cout<<"Press 3 if forgot your password  |"<<endl;
    cout<<"Press 4 to Exit                  |"<<endl;
    cout<<"\n\t\t\t Please enter your choice :";
    cin>>c<<endl;

    switch(c)
    {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;
        case 3;
           forgot();
           break;
        case 4:
            cout<<"\t\t\t ThankYou \n\n";
            break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from the options given above \n"<<endl;
            main();


    }
    
}

void login()
{
    int count;
    string userId,password,id,pass;
    system("cls");
    cout<<"\t\t\tPlease enter username and password :";
    cout<<"\t\t\tUSERNAME :";
    cin>>userId;
    cout<<"\t\t\tPASSWORD :";
    cin>>password;
    ifstream input("records.txt");
    while (input>>id>>pass)
    {
      if (id==userId && pass==password)
      {
         count=1;
         system("cls");
      }
      
   }
   input.close();
   if(count==1)
   {
       cout<<userId<<"\n your login is successfull \n Thanks for logging in ! \n";
   }

   else{
       cout<<"LOGIN ERROR!!!! \n Please check your username and password \n";
   }
}

void registration()
{
    string ruserId,rpassword,rid,rpass;
    system("cls");
   cout<<"\t\t\tUSERNAME :";
   cin>>ruserId;
   cout<<"\t\t\tPASSWORD :";
   cin>>rpassword;
   ofstream f1("records.txt",ios::app);
   f1<<ruserId<<' '<<rpassword<<endl;
   system("cls");

cout<<" \n\n\n your registration is successfull !!! \n\n ";
main();

}

void forgot()
{
    int option;
    system("cls");
    cout<<" you forgot your password ? No worries \n";
    cout<<"Press 1 to search your id by username \n";
    cout<<"Press 2 to get back to main menu \n";
    cout<<"\t\t\tenter your choice:";
    cin>>option;

    switch (option)
    {
    case 1:
        int count=0;
        string suserId,sId,spass;
        cout<<"\n\t\t Enter the username which you remembered";
        cin>>suserId;
        ifstream f2("records.txt");
        while(f2>>sId>>suserId)
        {
            if (sId==suserId)
            {
                count=1;
            }
            

        }
        f2.close();
        if(count==1)
        {
            cout<<"\n\n Your account is found \n";
            cout<<"\n\n Your password id:"<<spass;
            main();
        }

        else
        {
            cout<<"\n\t Sorry your account is not found !! \n";
            main();
        }
        break;
    
    case 2:
        main();
    default:
        cout<<"wrong choice please try again";
        forgot();

        break;
    }

}
