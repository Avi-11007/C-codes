#include<iostream>
using namespace std;

int main(){
    int quant,choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburgers=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items sold
    int Srooms=0,Spasta=0,Sburgers=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price of items
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

    cout<<"\n \t Quantity of items we have";
    cout<<"\n Rooms available :";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger :";
    cin>>Qburgers;
    cout<<"\n Quantity of Noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake :";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken :";
    cin>>Qchicken;

    m:

cout<<"\n \t \t\t\t Please select from the menu options :";
cout<<"\n\n1)Rooms:";
cout<<"\n\n2)Pasta:";
cout<<"\n\n3)Burger:";
cout<<"\n\n4) Noodles:";
cout<<"\n\n5) Shakes:";
cout<<"\n\n6) Chicken:";
cout<<"\n\n7)Informations regarding sales and collections:";
cout<<"\n\n8)Exit:";

cout<<"\n\n Enters ypour choice:";
cin>>choice;

switch (choice)
{
case 1:
    cout<<"Enter the number of rooms you want :";
    cin>>quant;
    if (Qrooms-Srooms>=quant)
    {
        Srooms=Srooms+quant;
        total_rooms=total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you !";
    }
    else{
        cout<<"\n\tonly"<<Qrooms-Srooms<<"Rooms are available in the hotel";
    }
    break;

case 2:
    cout<<"Enter the number of pasta :";
    cin>>quant;
    if (Qpasta-Spasta>=quant)
    {
        Spasta=Spasta+quant;
        total_pasta=total_pasta+quant*250;
        cout<<"\n\n\t\t"<<quant<<"pasta is ordered !";
    }
    else{
        cout<<"\n\tonly"<<Qpasta-Spasta<<"pastas are available in the hotel";
    }
    break;

case 3:
    cout<<"Enter the number of burgers :";
    cin>>quant;
    if (Qburgers-Sburgers>=quant)
    {
        Sburgers=Sburgers+quant;
        total_burger=total_burger+quant*120;
        cout<<"\n\n\t\t"<<quant<<"burger is ordered !";
    }
    else{
        cout<<"\n\tonly"<<Qburgers-Sburgers<<"burgers are available in the hotel";
    }
    break;

case 4:
    cout<<"Enter the number of noodles :";
    cin>>quant;
    if (Qnoodles-Snoodles>=quant)
    {
        Snoodles=Snoodles+quant;
        total_noodles=total_noodles+quant*250;
        cout<<"\n\n\t\t"<<quant<<"noodles is ordered !";
    }
    else{
        cout<<"\n\tonly"<<Qnoodles-Snoodles<<"noodles are available in the hotel";
    }
    break;

case 5:
    cout<<"Enter the number of shakes :";
    cin>>quant;
    if (Qshake-Sshake>=quant)
    {
        Sshake=Sshake+quant;
        total_shake=total_shake+quant*120;
        cout<<"\n\n\t\t"<<quant<<"shakes is ordered !";
    }
    else{
        cout<<"\n\tonly"<<Qshake-Sshake<<"shakes are available in the hotel";
    }
    break;


case 6:
    cout<<"Enter the number of chicken :";
    cin>>quant;
    if (Qchicken-Schicken>=quant)
    {
        Schicken=Schicken+quant;
        total_chicken=total_chicken+quant*150;
        cout<<"\n\n\t\t"<<quant<<"shakes is ordered !";
    }
    else{
        cout<<"\n\tonly"<<Qchicken-Schicken<<"chicken are available in the hotel";
    }
    break;    

case 7:
    cout<<"Details of sales and collections";
    cout<<"\n\n Number of rooms we had:"<<Qrooms;
    cout<<"\n\n Number of rooms we gave at rent:"<<Srooms;
    cout<<"\n\n Remaining Number of rooms we have:"<<Qrooms-Srooms;
    cout<<"\n\n Total Room collection for the day:"<<total_rooms;

    
    cout<<"\n\n Number of pastas we had:"<<Qpasta;
    cout<<"\n\n Number of pasta we sold:"<<Spasta;
    cout<<"\n\n Remaining Number of pasta we have:"<<Qpasta-Spasta;
    cout<<"\n\n Total pasta collection for the day:"<<total_pasta;

    
    cout<<"\n\n Number of burger we had:"<<Qburgers;
    cout<<"\n\n Number of burger we sold:"<<Sburgers;
    cout<<"\n\n Remaining Number of burger we have:"<<Qburgers-Sburgers;
    cout<<"\n\n Total burger collection for the day:"<<total_burger;

    
    cout<<"\n\n Number of noodles we had:"<<Qnoodles;
    cout<<"\n\n Number of noodles we sold:"<<Snoodles;
    cout<<"\n\n Remaining Number of noodles we have:"<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles collection for the day:"<<total_noodles;
    
    
    cout<<"\n\n Number of shake we had:"<<Qshake;
    cout<<"\n\n Number of shakes sold:"<<Sshake;
    cout<<"\n\n Remaining Number of shakes we have:"<<Qshake-Sshake;
    cout<<"\n\n Total shakes collection for the day:"<<total_shake;

  
    cout<<"\n\n Number of chicken we had:"<<Qchicken;
    cout<<"\n\n Number of chicken we sold:"<<Schicken;
    cout<<"\n\n Remaining Number of chicken we have:"<<Qchicken-Schicken;
    cout<<"\n\n Total chicken collection for the day:"<<total_chicken;

    cout<<"\n\n\n Total Collection for the day:"<<total_rooms+total_pasta+total_burger+total_noodles+total_shake+total_chicken;
case 8:
    exit(0);

default:
    cout<<"please select numbers mentioned above";
}

goto m;

}