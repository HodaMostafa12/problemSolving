
#include <iostream>
using namespace std; 
 
long long findSum(long long n) 
{ 
    long long sum = 0; 
    for (long long i = 1; i <= n; i++) 
        sum = sum + i; 
    return sum; 
} 
  
 
int main() 
{ 
    long long n ;
    cin>>n;
    cout << findSum(n); 
    return 0; 
}
