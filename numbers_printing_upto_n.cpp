//Aamir Ayaan Quraishi
//23070123002
//Aim - to print the number in  right angle patter upto n number of rows.

#include<iostream>
using namespace std;

int main(){
  int n , k;
  cout << "enter the value of n:";
  cin >> n ;
  k=1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j <=i ; j++){
            cout << k << " ";
            k++;
            }    
            cout <<endl;
    }
    return 0;
}


/*
OUTPUT
enter the value of n:4
1
2 3
4 5 6
7 8 9 10
*/
