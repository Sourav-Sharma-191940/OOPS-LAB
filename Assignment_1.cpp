//Assignment - 1: Write a program using recursive function to calculate the factorial of a given number.
// Also draw the recursion tree for the test valus taken in the program.
#include <iostream>
using namespace std;
int factorial(int n){
    if (n<1){
        return 1;
    }
        return n*factorial(n-1);
}
int main(){
    int number, result;
    cout<<"\nEnter the number for calculate its factorial- ";
    cin>>number;
    result = factorial(number);
    cout<<"The factorial of "<<number<<" is " << result<<endl<<endl;
    return 0;
}