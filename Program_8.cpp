//WAP to create an abstract class named Shape that contains an empty method numberOfSides().
// Provide three classes named Trapezoid, Triangle and Hexagon such that each one of the classes
// inherits the class shape. Each one the classes contains only the method numberOfSides()
// that shows the number of sides in the given geometrical figures.
#include<iostream>
using namespace std;

class Shape                
{
  public:
	  virtual int NumberOfSides() = 0;      
};

 class Triangle:public Shape
 {   
   public:
		 int NumberOfSides()
		{
		   cout<<"Number of sides in a Triangle are : 3 ";
           return 0;
   		}	
 };
 class Trapezoid:public Shape
{
  public:
	    int NumberOfSides()
	 {
	    cout<<endl<<"Number of sides in a Trapezoid are : 4 ";
	    return 0;
	 }			
};
      class Hexagon:public Shape
 {
	public:
		  int NumberOfSides()
		{
			cout<<endl<<"Number of sides in a Hexagon are: 6 ";
        	return 0;
		}
 };
    
   int main()       
 {
   Shape  *s;        
   Triangle t;
   Trapezoid td;
   Hexagon h;
   s=&t;
   s->NumberOfSides();
   s=&td;
   s->NumberOfSides();
   s=&h;
   s->NumberOfSides();
   return 0;
 }