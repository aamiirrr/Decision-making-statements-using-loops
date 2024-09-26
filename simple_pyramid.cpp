//Aamir Ayaan Quraishi
//23070123002
//Aim - To print the astrics patter in a right angle triangle form.

#include<iostream>
using namespace std;

int main(){
    int i ,j;
    int n;
    cout << "enter the value of n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "* " ;
            cout << endl ;
    }
    return 0;
}


/*
output
enter the value of n:5
*
* *
* * *
* * * *
* * * * *
*/
