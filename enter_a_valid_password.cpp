//Aamir Ayaan Quraishi
//23070123002
//Aim - ask the user to enter the password if the entered password matches print access granted.

#include<iostream>
using namespace std;

int main(){
    int i=1234;
    int password;
    while(true){
        cout << "Enter password:";
        cin >> password;
        if(password == i){
            cout << "Access granted" << endl;
            break;
        }else {
            cout << "Invalid password. Please try again." << endl;
        }
    }
    
    return 0;
}


/*
OUTPUT
Enter password:12
Invalid password. Please try again.
Enter password:123
Invalid password. Please try again.
Enter password:1234
Access granted
*/
