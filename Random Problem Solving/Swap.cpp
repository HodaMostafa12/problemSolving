#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 12, y = 24;
    cout << "The value of x before: " << x << "\n";
    cout << "The value of y before: " << y << "\n";

    swap(x,y);
    //this function swaps the values of x and y and returns nothing
    cout << "The value of x now: " << x << "\n";
    cout << "The value of y now: " << y << "\n";
    return 0;
}

