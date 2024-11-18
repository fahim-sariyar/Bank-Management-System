#include <bits/stdc++.h>
using namespace std;

int total = -1;

struct
{
    string account_number;
    string user_name;
    string mobile_number;
    string user_address;
    string account_type;
    int balance;
}data[100];

char menu()
{
    cout << "                         "<<endl <<endl;
    cout << "\t\t\t[ Bank Management System ]" << endl;
    cout << "-------------------------------------------------------------------------"<< endl << endl;
    cout << "\t[1] Open Account" << endl;
    cout << "\t[2] Deposite Money" << endl;
    cout << "\t[3] Withdraw Money" << endl;
    cout << "\t[4] Account Details" << endl;
    cout << "\t[5] Delete Account" << endl;
    cout << "\t[6] Total Account" << endl;
    cout << "\t[7] Exit" << endl << endl;

    char choice;
    cout << "Enter Your Choice >>> ";
    choice :
    cin >> choice;
    cout << endl;

    if(choice=='1' || choice=='2' || choice=='3' || choice=='4' || choice=='5' || choice=='6' || choice=='7')
    {
        return choice;
    }

    else
    {
        cout << "\tPlease Enter A Valid Choice >>> ";
        goto choice;
    }
}

int main()
{
    int exit = 1;

    while(exit==1)
    {
        system("cls");

        char choice;
        choice = menu();

        switch(choice)
        {
            case '1' :
            {
                cout << "\t\t\t   [ Open An Account ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                add_account :

                cout << "\tAccount Number\t: ";
                cin.ignore();
                getline(cin, data[total + 1].account_number);

                cout << "\tUser Name\t: ";
                cin.clear();
                getline(cin, data[total + 1].user_name);

                cout << "\tPhone Number\t: ";
                cin.clear();
                getline(cin, data[total + 1].mobile_number);

                cout << "\tAddress\t\t: ";
                cin.clear();
                getline(cin, data[total + 1].user_address);

                cout << "\tAccoutn Type\t: ";
                cin.clear();
                getline(cin, data[total + 1].account_type);

                cout << "\tDeposit Money\t: ";
                cin >> data[total + 1].balance;

                total++;

                cout << endl;

                char add;
                cout << "\tOpen Another Account (y/n) >>> ";
                cin >> add;

                if(add=='y')
                {
                    cout << endl;
                    goto add_account;
                }

                else
                {
                    break;
                }
            }

            case '2' :
            {
                cout << "\t\t\t   [ Deposite  Money ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                account_number :

                int user = -1;
                string account;
                cout << "\tAccount Number\t: ";
                cin >> account;
                cout << endl;

                for(int i=0; i<(total+1); i++)
                {
                    if(account == data[i].account_number)
                    {
                        user = i;
                        break;
                    }
                }

                if(user==-1)
                {
                    cout << "\tInvalid Account Number !" << endl << endl;

                    char check;
                    cout << "\tTry Again (y/n) >>> ";
                    cin >> check;
                    cout << endl;

                    if(check=='y')
                    {
                        cout << endl;
                        goto account_number;
                    }

                    else
                    {
                        break;
                    }
                }

                else
                {
                    cout << endl << "\tHello " << data[user].user_name << "\t ! Your Recent Balance Is " << data[user].balance << endl << endl;

                    int balance;
                    cout << "\tAdd New Balance : ";
                    cin >> balance;
                    data[user].balance = data[user].balance + balance;
                    cout << endl;

                    cout << "\tYour Recent Balance Is " << data[user].balance << endl << endl;

                    char menu;
                    cout << "\tEnter Any Letter To Go To The Main Menu >>> ";
                    cin >> menu;

                    break;
                }
            }

            case '3' :
            {
                cout << "\t\t\t   [ Withdraw  Money ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                user_account :

                int user = -1;
                string account;
                cout << "\tAccount Number\t: ";
                cin >> account;
                cout << endl;

                for(int i=0; i<(total+1); i++)
                {
                    if(account == data[i].account_number)
                    {
                        user = i;
                        break;
                    }
                }

                if(user==-1)
                {
                    cout << "\tInvalid Account Number !" << endl << endl;

                    char check;
                    cout << "\tTry Again (y/n) >>> ";
                    cin >> check;
                    cout << endl;

                    if(check=='y')
                    {
                        cout << endl;
                        goto user_account;
                    }

                    else
                    {
                        break;
                    }
                }

                else
                {
                    cout << endl << "\tHello " << data[user].user_name << "\t ! Your Recent Balance Is " << data[user].balance << endl << endl;

                    withdraw_balance :

                    int balance;
                    cout << "\tEnter The Withdraw Ammount : ";
                    cin >> balance;
                    cout << endl;

                    if(balance>data[user].balance)
                    {
                        cout << "\tInsufficient Balance ! Please Try Again" << endl << endl;
                        goto withdraw_balance;
                    }

                    else
                    {
                        data[user].balance = data[user].balance - balance;

                        cout << "\tYour Recent Balance Is " << data[user].balance << endl << endl;

                        char menu;
                        cout << "\tEnter Any Letter To Go To The Main Menu >>> ";
                        cin >> menu;

                        break;
                    }
                }
            }

            case '4' :
            {
                cout << "\t\t\t   [ Account Details ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                check_account :

                int user = -1;
                string account;
                cout << "\tAccount Number\t: ";
                cin >> account;
                cout << endl;

                for(int i=0; i<(total+1); i++)
                {
                    if(account == data[i].account_number)
                    {
                        user = i;
                        break;
                    }
                }

                if(user==-1)
                {
                    cout << "\tInvalid Account Number !" << endl << endl;

                    char check;
                    cout << "\tTry Again (y/n) >>> ";
                    cin >> check;
                    cout << endl;

                    if(check=='y')
                    {
                        cout << endl;
                        goto check_account;
                    }

                    else
                    {
                        break;
                    }
                }

                else
                {
                    cout << "\tUser Name\t: " << data[user].user_name << endl;
                    cout << "\tPhone Number\t: " << data[user].mobile_number << endl;
                    cout << "\tAddress\t\t: " << data[user].user_address << endl;
                    cout << "Account Type\t: " << data[user].account_type << endl;
                    cout << "\tTotal Balance\t: " << data[user].balance << endl << endl;

                    char check;
                    cout << "Check Another Account (y/n) >>> ";
                    cin >> check;
                    cout << endl;

                    if(check=='y')
                    {
                        cout << endl;
                        goto check_account;
                    }

                    else
                    {
                        break;
                    }
                }
            }

            case '5' :
            {
                cout << "\t\t\t   [ Delete  Account ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                cout << "\t[1] Delete A Specific Account" << endl;
                cout << "\t[2] Delete All Account" << endl;
                cout << "\t[3] Go To The Menu" << endl << endl;

                char check;
                cout << "Enter Your Choice >>> ";
                valid_choice :
                cin >> check;
                cout << endl;

                if(check=='1' || check=='2' || check=='3')
                {
                    if(check=='1')
                    {
                        find_account :

                        int user = -1;
                        string account;
                        cout << "Account Number\t: ";
                        cin >> account;
                        cout << endl;

                        for(int i=0; i<(total+1); i++)
                        {
                            if(account == data[i].account_number)
                            {
                                user = i;
                                break;
                            }
                        }

                        if(user==-1)
                        {
                            cout << "Invalid Account Number !" << endl << endl;

                            char check;
                            cout << "Try Again (y/n) >>> ";
                            cin >> check;
                            cout << endl;

                            if(check=='y')
                            {
                                cout << endl;
                                goto find_account;
                            }

                            else
                            {
                                break;
                            }
                        }

                        else
                        {
                            cout << data[user].user_name << "'s Account Has Been Deleted" << endl << endl;

                            for(int i=user; i<(total+1); i++)
                            {
                                data[i].account_number = data[i+1].account_number;
                                data[i].user_name = data[i+1].user_name;
                                data[i].mobile_number = data[i+1].mobile_number;
                                data[i].user_address = data[i+1].user_address;
                                data[i].balance = data[i+1].balance;
                                data[i].account_type = data[i+1].account_type;
                            }

                            total--;

                            char check;
                            cout << "Delete Another Account (y/n) >>> ";
                            cin >> check;
                            cout << endl;

                            if(check=='y')
                            {
                                cout << endl;
                                goto find_account;
                            }

                            else
                            {
                                break;
                            }
                        }
                    }

                    else if(check=='2')
                    {
                        cout << "All Account Have Been Deleted !" << endl << endl;

                        total = -1;

                        char menu;
                        cout << "Enter Any Letter To Go To The Main Menu >>> ";
                        cin >> menu;

                        break;
                    }

                    else
                    {
                        break;
                    }
                }

                else
                {
                    cout << "Please Enter A Valid Choice >>> ";
                    goto valid_choice;
                }
            }

            case '6' :
            {
                cout << "\t\t\t    [ Total Account ]" << endl;
                cout << "-------------------------------------------------------------------------"<< endl << endl;

                if(total==-1)
                {
                    cout << "Empty ! First Creat An Account ..." << endl << endl;
                }

                for(int i=0; i<(total+1); i++)
                {
                    cout << "[ Account " << i+1 << " ]------------------------->>> " << data[i].user_name << endl << endl;
                }

                cout << endl;

                char check;
                cout << "Enter Any Letter To Go To The Main Menu >>> ";
                cin >> check;

                break;
            }

            case '7' :
            {
                exit = 0;

                cout << "Thank you Visitor ..." << endl;
                cout<<endl;
                cout<< "Developed  by FAHIM SARIYAR" << endl << endl;
                //(173), LABIB(164) , SHOWON(177) , NAFIUL(170)

                break;
            }

            default :
            {
                cout << "Bank Managment System ..." << endl;
                break;
            }
        }
    }

    return 0;
}
