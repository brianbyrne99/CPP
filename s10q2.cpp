#include <iostream>
#include <math.h>
using namespace std;
#define M_PI  3.14159265358979323846 //decaring Pi 

float triangle(float height=1.0,float base=2.3)//functions with default arguments 
{
	return((0.5)*height*base);
}
float square(float side=10)
{
	return side*side;
}
float rectangle(float length=20,float width=10)
{
	return length*width;
}
float rhombus(float diagnol1=10.2 ,float diagnol2=3.8)
{
	return((diagnol1*diagnol2)/2);
}
float circle(float radius=3.6)
{
   return(radius*radius*M_PI);
}
float trapezoid(float base1=8,float base2=8,float hi=3)
{
	return(((base1+base2)/2)*hi);
}

int main()
{
float height,base ,side,length,width,diagnol1,diagnol2,radius,base1,base2;
char ans;
cout<<"Do you wish to enter values?(y/n)\n";//giving the user an option to enter figures
cin>>ans;
switch(ans){
    case 'y'://Allows user to input numbers via the command line
	cout<<"Enter height and base of triangle\n";
	cin>>height>>base;
	cout<<"Area of triangle="<<triangle(height,base)<<endl;

	cout<<"\nEnter side of of square\n";
	cin>>side;
    cout<<"Area of square= "<<square(side);

    cout<<"\nEnter length and width of rectangle\n";
    cin>>length>>width;
    cout<<"Area of rectangle="<<rectangle(length,width);

    cout<<"\nEnter length of the 2 diagnols of the rhombus\n";
    cin>>diagnol1>>diagnol2;
    cout<<"Area of rhombus="<<rhombus(diagnol1,diagnol2);

    cout<<"\nEnter length of radius\n";
    cin>>radius;
    cout<<"Area of circle="<<circle(radius);

    cout<<"\nEnter length of 2 bases in trapezoid\n";
    cin>>base1>>base2;
    cout<<"Area of trapezoid="<<trapezoid(base1,base2);
    break;

    case 'n'://if the user does not wish toe enter values, the default values in the functions will be used
	cout<<"\nArea of triangle="<<triangle();
    cout<<"\nArea of square= "<<square();
    cout<<"\nArea of rectangle="<<rectangle();
    cout<<"\nArea of rhombus="<<rhombus();
    cout<<"\nArea of circle="<<circle();
    cout<<"\nArea of trapezoid="<<trapezoid();
    break;
    default:
    return 1;
}
    return 0; 
}