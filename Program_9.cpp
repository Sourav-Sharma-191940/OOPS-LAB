//WAP to demonstrate the concept of:
// a) Parametrized constructor
// b) Copy constructor
// c) Constructor overloading
#include<iostream>
using namespace std;
class Area
{
public:
double length,breadth,side;
double getLength()      
{
	return length;
}
double getBreadth()    
{
	return breadth;
}
double getSide()
{
	return side;
}
   Area()                                 
 {
		length=5;
		breadth=5;
 }
   Area(double l,double b)    
 {
 	length=l;
 	breadth=b;
 }	
   Area(double s)       
   {
   	 side=s;
   }
	 Area(Area &p)           
	 {
	 	length=p.length;
	 	breadth=p.breadth;
	 }
  double calcArea(double l,double b)   
  {
  	double area=l*b;
  	return area;
   }	 
};
	 int main()
	 {
	 	Area ar1,ar3;
	 	Area();
	    cout<<"The length of shape 1 is:  ";
	    cout<<ar1.getLength();
	    cout<<endl<<"The breadth of shape 1 is: ";
	    cout<<ar1.getBreadth();
		cout<<endl<<"The area of shape 1 is: ";
		cout<<ar1.calcArea(ar1.length,ar1.breadth)<<endl;
		Area ar2(5.6,4.2);
		ar3=ar2;
	 	cout<<endl<<"The length of shape 2 is:  ";
	    cout<<ar3.getLength();
	    cout<<endl<<"The breadth of shape 2 is: ";
	    cout<<ar3.getBreadth();
		cout<<endl<<"The area of shape 2 is: ";
        cout<<ar3.calcArea(ar3.length,ar3.breadth)<<endl;
        Area ar4(3.6);
        cout<<endl<<"The side of given square is: ";
        cout<<ar4.getSide();
        cout<<endl<<"The area of the given square is: ";
        cout<<ar4.calcArea(ar4.side,ar4.side);
		return 0;
	 }