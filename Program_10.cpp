//WAP to show multiple inheritance.

#include<iostream>
using namespace std;

class length
{
  public:
  double len;
  void setlength()
 {
 	cout << "Enter the value of length: ";
	cin >>len;
 } 	
   double getLen()   
  {
    return len;
  }
};
class breadth
{
  public:
  double bd;  
  void setbreadth()
 {
   cout<<"Enter the value of breadth: ";
   cin >> bd;
 }
   double getBreadth()   
  {
 	return bd;
  }
};
class Area : public length, public breadth   
{
  public:
    double ar;
   void find_area()  
  {
 	ar=len*bd;
  }
   double getArea()
  {
 	return ar;
  }
   int display()    
  {
	cout<<endl<<"The given value for length is: ";
	cout<<getLen();
	cout<<endl<<"The given value for breadth is: ";
 	cout<<getBreadth();
 	cout<<endl<<"The area of the given reactangle is: ";
	cout<<getArea();
	return 0;
  }
};

 int main()
{ 
   Area a;   
   a.setlength();
   a.setbreadth();
   a.find_area();
   a.display();
   return 0;
}