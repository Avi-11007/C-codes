#include <iostream>
#include <fstream>
using namespace std;

class shopping
{
private:
    float price;
    float disc;
    string pname;

public:
    void menu() void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu()
{
m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t\t__________________________________\n";
    cout << "                                            \n";
    cout << "\t\t\t\t      Supermarket Main Menu         \n";
    cout << "                                            \n";
    cout << "\t\t\t\t\t__________________________________\n";
    cout << "\t\t\t\t 1)Administrator      |";
    cout << "\t\t\t\t                      |";
    cout << "\t\t\t\t 2)Buyer              |";
    cout << "\t\t\t\t                      |";
    cout << "\t\t\t\t 3)Exit               |";
    cout << "\t\t\t\t                      |";
    cout << "\t\t\t\t Please Select        | ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "please login";
        cout << "enter email";
        cin >> email;
        cout << "enter password";
        cin >> password;
        if (email = "robby@gmail.com" &&password = "robby@123")
        {
            administrator();
        }
        else
        {
            cout << "invalid username/password";
        }

        break;

    case 2:
        buyer();
        break;

    case 3:
        exit(0);

    default:
        cout << "Please select from the above options" break;
    }
}
goto m;

void shopping ::administrator()
{
    int choice;
    cout << "Administrator menu     |";
    cout << "1)Add the product      |";
    cout << "2)Modify the product   |";
    cout << "3)Delete the product   |";
    cout << "4)Back to main menu    |";

    cout << "\n Please Enter Your Choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;

    case 3:
        rem();
        break;
    case 4:
        menu();
        break;
    default:
        cout << "invalid choice";
    }
    goto m;
}
void shopping ::buyer()
{
    int choice;
    cout << "\t\t\t 1)Buyer \n";
    cout << "                 ";
    cout << "\t\t\t 2)Buy Product \n";
    cout << "                 ";
    cout << "\t\t\t 3)Go Back \n";
    cout << "enter your choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout << "invalid choice";
        break;
    }
    goto m;

    void shopping::add()
    {
    m:
        fstream data : int c;
        int token = 0;
        float p;
        float d;
        string n;
        cout << "add new product";
        cout << "enter product code";
        cin >> pcode;
        cout << "price of the product";
        cin >> price;
        cout << "discount on the product";
        cin >> disc;

        data.open("database.txt", ios::in);
        if (!data)
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << disc << "\n";
            data.close();
        }
        else
        {
            data >> c >> n >> p >> d;
            while (!data.eof())
            {
                if (c == pcode)
                {
                    token++;
                }
                data >> c >> n >> p >> d;
            }
            data.close();
        }
        if (token == 1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << disc << "\n";
            data.close();
        }
        cout << "record inserted";
    }

    void shopping::edit()
    {
        fstream data, data1;
        int pkey, token = 0, c;
        float p, d;
        string n;
        cout << "modify the record";
        cout << "product code";
        cin >> pkey;

        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "file doesnt exists";
        }
        else
        {
            data.open("databse1.txt", ios::app | ios::out);
            data >> pcode >> pname >> price >> disc;
            while (!data.eof())
            {
                if (pkey == pcode)
                {
                    cout << "product new code";
                    cin >> c;
                    cout << "name of the product";
                    cin >> n;
                    cout << "price";
                    cin >> p;
                    cout << "discount";
                    cin >> d;
                    data1 << " " << c << " " << n << " " << p << " " << d "\n";
                    cout << "record edited";
                    token++;
                }
                else
                {
                    data1 << " " << pcode << " " << pname << " " << price << " " << disc << "\n";
                }
                data >> pcode >> pname >> price >> disc;
            }
            data.close();
            data1.close();
            remove("database.txt");
            rename("database1.txt", "database.txt");

            if (token == 0)
            {
                cout << "\n Record not found sorry";
            }
        }

    }

        void shopping::rem()
        {
            fstream data, data1;
            int pkey;
            int token = 0;
            cout << "delete product";
            cout << "product code";
            cin >> pkey;
            data.open("database.txt", ios::in);
            if (!data)
            {
                cout << "files doesnt exist";
            }

            else
            {
                data1.open("databse1.txt", ios::app | ios::out);
                data >> pcode >> pname >> price >> dis;
                while (!data.eof())
                {
                    if (pcode == pkey)
                    {
                        cout << "product deleted successfully";
                        token++;
                    }
                    else
                    {
                        data1 >> " " << pcode << " " << pname " " << price << " " << dis << " \n";
                    }
                    data.close();
                    data1.close();
                    remove("database.txt");
                    rename("database1.txt", "database.txt");

                    if (token == 0)
                    {
                        cout << " \nrecords not found";
                    }
                }
            }
        }

        void shopping::list()
        {
            fstream data;
            database.open("database.txt", ios::in);
            cout << "\n\n|_________________________\n";
            cout << "Product number | Name |Price \n";
            cout << "\n\n|_________________________\n";
            data >> pcode >> pname >> price >> dis;
            while (!data.eof())
            {
                cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
                data >> pcode >> pname >> price >> dis;
            }
            data.close();
        }

        void shopping ::receipt()
        {
            fstream data;
            int arrc[100];
            int arrq[100];
            char choice;
            int c = 0;
            float amount = 0;
            float dis = 0;
            float total = 0;
            cout << "\n\n\n\t\t\t\t RECEIPT \t\t\t\t\t";
            data.open("database.txt", ios::in);
            if (!data)
            {
                cout << "\n empty databse";
            }
            else
            {
                data.close();
                list();
                cout << "\n\n ___________";
                cout << "\n\n Please place the order";
                cout << "\n\n ___________";
            }

            do
            {
                cout << "enter product code";
                cin >> arrc[c];
                cout << "enter the product quantity";
                cin >> arrq[c];
                for (int i = 0; i < c; i++)
                {
                    if (arrc[c] == arrc[i])
                    {
                        cout << "\n\nduplicate product code please try again";
                        goto m;
                    }
                }
                c++;
                cout << "\n\n\n\n do you want to buy another product if yes press y else no";
                cin >> choice;

            } while (choice == "y")
                    cout
                << "\n\n\n\t\t\t\t RECEIPT \t\t\t\t\t";
            cout << "Product number | Name | Quantity |Price | Amount |Amount with Discount \n";

            for (int i = 0; i < c; i++)
            {
                data.open("database.txt", ios::in);
                data >> pcode >> pname >> price >> dis;
                while (!data.eof())
                {
                    if (pcode == arrc[i])
                    {
                        amount = price * arrq[i];
                        dis = amount - (amount * dis / 100);
                        total = total + dis;
                        cout << "\n"<< pcode << "\t\t" << pname<<"\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t"<< "\t\t" << dis;
                    }
                    data >> pcode >> pname >> price >> dis;
                }
            }
            data.close();
        }




        int main()
        {

            return 0;
        }