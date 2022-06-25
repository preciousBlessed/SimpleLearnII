// My factorial calc only evaluates correctly up to 12.
// This is a great limitation.
// Future me, fix this.
#include<iostream>
using namespace std;
void factorial_of_(unsigned long int n){
  if(n == 0){
    cout<<n<<"! = 1";
    // return 1;
  }
  unsigned long int prod = 1;

  for(int x = 1; x<= n; x++){
    prod *= x;
    // return prod;
  };
  cout<<n<<"! = "<<prod;
}

int main(){
  unsigned long int n;
  cout<<"Sorry, due unresolved limitations, I can't calculate beyound 12!.";
  cout<<"You want to find the factorial of ? : ";
  cin>>n;
  factorial_of_(n);
  return 0;
}
