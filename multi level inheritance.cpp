#include<iostream>
using namespace std;
class A //single base class
{
public:
	int a=0,b=0,c=0;
	void getInput(){
		cout<<"Enter the number of the three subjects"<< endl;
		cin>>a>>b>>c;
	}
};
class B:public A //derived class form base class
{
public:
	 int total;
	 void sum(){
	 	total= a+b+c;
	 	cout<<"Sum"<<total<<endl;
	 }

};
class C: public B
{
public:
	int p;
	void percent(){
		p=(total/3);
		cout<<"Percent ="<<p;
	}


};

int main(){
	C obj; //object of derived class
	obj.getInput();
	obj.sum();
	obj.percent();
	return 0;
};
