#include<iostream>
using namespace std;
class complex{
private:
    int a,b;
public:
    ~complex(){
        cout<<"Hello constructor is destroy"<<endl;

    }
    complex (int k){
    a=k;
    cout<<k<<endl;
    }
    complex(int x,int y);
};
complex::complex(int x,int y){//scope resolution
    a=x;
    b=y;
    cout<<a<<endl;
    cout<<b<<endl;


}


int main(){
    complex c1(3);
    complex c2(4,8);
    //complex c;
}
