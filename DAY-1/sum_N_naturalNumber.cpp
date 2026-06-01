#include<iostream>
using namespace std;
int main () {
int Number,i,sum=0;
cout << "Enter the number = ";
cin>> Number;
for( i=1; i<= Number; i++ )
  sum =sum+i;
  cout<<sum<<endl;
  return 0;
}