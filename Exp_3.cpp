// Experiment:- 3
// Write a function power() which raise a number m to a power n. The function takes double value of m and integer 
// value of n and returns the result. Use a default value of n is 2 to make the function to calculate squares 
// when this argument is omitted. 

# include <iostream>
# include <cmath>
using namespace std;
 
 double power(double m, int n){
     double res = 1;
     for(; n>0; n--)
       res = m * res;
       return res;
 }
 int main(){
     double m=0, res;
     int n=2;
     cout<<"Enter the base value: ";
     cin>>m;
     cout<<"Enter the power value: ";
     cin>>n;
     double power = pow(m, n);
     cout<<m<<" to the power " <<n<< " is: "<< power<<endl;
     cout<<m<<" to the power " <<2<< " (default power value) is: "<< pow(m, 2);

 }
