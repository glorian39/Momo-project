#include <iostream>
#include <string>

using namespace std;

int main() {
    // initialize variables
    int code = 170;
    string pin = "0000";
    int balance = 1000;
    int attempts = 0;
    int option = 0;
    int receivernumber;
    

    // loop until exit option is selected
    while (option != 4) {
    // prompt user to code
    int input_code;
    cout << "Please enter your code: ";
    cin >> input_code;
    // check if PIN is correct
    if (input_code == code) {
    attempts = 0; // reset attempts if correct
    // display menu and get user's choice
    cout << "1. Reset PIN" << endl;
    cout << "2. Check balance" << endl;
    cout << "3. Send money" << endl;
    cout << "4. Exit" << endl;
    cout << "Please select an option: ";
    cin >> option;
    // handle selected option
    switch (option) {
    case 1: // reset PIN
    cout << "Enter old pin: ";
    cin >> pin;
    cout << "Enter new pin." << endl;
    cin>>pin;
    cout <<"Pin changed successfully"<< endl;
    break;

    case 2: // check balance
    cout<<"Enter your pin"<< endl;
    cin>>pin;
    cout<<"Your balance is:"<<balance<< "cedis"<< endl;
    break;
    case 3: // send money
    cout<<"receiver number"<< endl;
    cin>>receivernumber;
    int amount;
    cout << "Enter amount to send: ";
    cin >> amount;
    cout<<"Enter your pin"<< endl;
    cin>>pin;
	if (amount <= balance) {
    balance -= amount;
    cout << "Money sent successfully." << endl;
    cout << "New balance is " << balance << " cedis." << endl;
    } else {
    cout << "Insufficient funds." << endl;
    }
    break;
    case 4: // exit
    cout << "Exiting program." << endl;
    break;
    default:
    cout << "Invalid option selected." << endl;
    }
    } else {
    attempts++; // increment attempts if incorrect
    if (attempts >= 3) {
    cout << "Too many incorrect attempts. Exiting program." << endl;
    break;
    } else {
    cout << "Incorrect PIN. Please try again." << endl;
    }
    }
    }
     return 0;
}
