#include <iostream>//Header file
using namespace std;


int addTwo(int a,int b);               /***function prototype statements***/
float add2(float a, float b);
double addtoo(double a, double b);
long addto(long a, long b);

int main()
{
	double x,y;/*** We will enter variables of type double via the command line***/
	int c; //variables to to assign functions to
	float d;
	double e;
	long f;	
	
	cout<<"Enter first number: \n";//entering numbers
	cin>>x;
	cout<<"Enter second number: \n";
	cin>>y;
	
	c= addTwo(x,y);// assigning the values returned by functions to variables
	d= add2(x,y);
	e= addtoo(x,y);
	f= addto(x,y);

	cout<<"\n int addition is "<<c<<endl;// Printing out variables
	cout<<"\n float addition is "<<d<<endl;
	cout<<"\n double addition is "<<e<<endl;
	cout<<"\n long addition is "<<f<<endl;
	return 0;
}

//function definition
int addTwo(int a,int b)
{
	return (a+b);//Adding 2 integers
}

float add2(float a, float b)
{
	return (a+b);//adding 2 floats
}
double addtoo(double a, double b)
{
	return (a+b);//adding 2 long floata
}
long addto(long a, long b)
{
	return (a+b);// adding 2 longs together
}