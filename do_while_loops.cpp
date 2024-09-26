//Aamir Ayaan Quraishi
//23070123002
//Aim - take input from user and end the loop if the user enter 'SIT' .

#include <iostream>
using namespace std;

int main() {
    string name;
    
    do {
        cout << "Enter the Name: ";
        cin >> name;
        if (name != "SIT") {
            cout << name << endl;
        }
    } while (name != "SIT");
}

/*
OUTPUT 
Enter the Name: sit
sit
Enter the Name: jit
jit
Enter the Name: SIT
*/
