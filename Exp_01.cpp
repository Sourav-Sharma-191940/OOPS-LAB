// c++ program to read a matrix of size mxn from the keyboard and display the same using function.

#include<iostream>
using namespace std;
int main(){
int a[50][50],n,m,i,j;
cout<<"Enter value of m and n:"<<endl;  //changes
cin>>m>>n;
cout<<"Enter elements of the matrix:"<<endl;
for(i=0;i<m;++i)
for(j=0;j<n;++j)
cin>>a[i][j];
cout<<"The Matrix is:"<<endl;
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
cout<<a[i][j]<<" ";
cout<<endl;
}
return 0;
}
