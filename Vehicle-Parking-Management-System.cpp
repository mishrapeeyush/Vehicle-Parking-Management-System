#include <iostream>
#include <conio.h>
using namespace std;
int nom = 0, nob = 0, noc = 0, amount = 0, count = 0;
int menu();
void bus();
void car();
void motorcycle();
void showDetail();
void Delete();

void bus()
{
    nob++;
    amount = amount + 100;
    count++;
}
void motorcycle()
{
    nom++;
    amount = amount + 50;
    count++;
}
void car()
{
    noc++;
    amount = amount + 70;
    count++;
}
int menu(void)
{
    int ch;
    cout << "**********************************************************************************************************" << endl;
    cout << "Press 1 for BUS. You have to pay 100 INR" << endl;
    cout << "Press 2 for CAR. You have to pay 70 INR" << endl;
    cout << "Press 3 for MOTORCYCLE. You have to pay 50 INR" << endl;
    cout << "Press 4 to VIEW the Record" << endl;
    cout << "Press 5 to DELETE the Record" << endl;
    cout << "Press 6 to EXIT the interface" << endl;
    cout << "**********************************************************************************************************" << endl;
    cout << "Please ENTER your choice: " << endl;
    cin >> ch;
    return ch;
}
void showDetail()
{
    cout << "**********************************************************************************************************" << endl;
    cout << "Total number of BUSES standing in parking lot: " << nob << endl;
    cout << "Total number of CARS standing in parking lot: " << noc << endl;
    cout << "Total number of MOTORCYCLES standing in parking lot: " << nom << endl;
    cout << "Total number of VEHICLES standing in parking lot: " << count << endl;
    cout << "Total MONEY collected at parking lot: " << amount << endl;
    cout << "**********************************************************************************************************" << endl;
}
void Delete()
{
    nob = 0;
    noc = 0;
    nom = 0;
    amount = 0;
    count = 0;
}
int main()
{
    int exit;
    do
    {
        switch (menu())
        {
        case 1:
            bus();
            break;
        case 2:
            car();
            break;
        case 3:
            motorcycle();
            break;
        case 4:
            showDetail();
            break;
        case 5:
            Delete();
            break;
        default:
            cout << "You have entered a WRONG choice. Please enter again" << endl;
        }
        cout << "To enter more vehicle details,presss 0.ELSE any other number to EXIT the interface" << endl;
        cout << "Please enter your choice" << endl;
        cin >> exit;
    } while (exit == 0);
    cout << "Thank you. Please visit again :)" << endl;
    getch();

    return 0;
}
