//Aamir Ayaan Quraishi
//23070123002
//Aim - only print the even number from 0 to 20.

#include<iostream>
using namespace std;
int main(){
    int i ,n;
    cout << "enter the value of n:";
    cin >> n;
    for  (i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            cout << i << endl ;
        }   
    }
    return 0;
}

/*
OUTPUT
enter the value of n:20
0
2
4
6
8
10
12
14
16
18
20
*/
