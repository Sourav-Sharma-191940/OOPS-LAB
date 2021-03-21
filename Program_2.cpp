//Program 2:- Write a program to make the use of inline function.
#include <iostream>
#include <cmath>
using namespace std;

 inline int power(int a, int b=2){
     double result;
      result = pow(a, b);
      return result;
}
void display(double result, int x, int y){
      cout<<"\n So "<<x<< " to the power " <<y<< " is "<<result<<endl;
}
int main(){
      int x, y=2;
      double answer;
      cout<<"Enter the base value ";
      cin>>x;
      cout<<"Enter the power value ";
      cin>>y;
      answer= power(x, y);
      display(answer, x, y);
}
