#include<iostream>

using namespace std;

class Math{
	public : 
	virtual void calculate () = 0;
};
class Abhi : public Math{
	
	public : 
	int r,b,h;
	
	void calculate (){
		
		cout<<"Enter radius of circle : ";
		cin>>r;
		cout<<"Area of circle : "<<3.14*r*r<<endl;
		cout<<"Enter base of triangle : ";
		cin>>b;
		cout<<"Area of triangle : "<<0.5*b*b<<endl;
		cout<<"Enter side of rectangle : ";
		cin>>h;
		cout<<"Area of rectangle : "<<h*h<<endl;
	}
	
};

int main(){
	Abhi obj;
	obj.calculate();
	
	return 0;
}
