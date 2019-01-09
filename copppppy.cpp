#include<iostream>
using namespace std;
    class test{
    private:
    int code;
    float price;
    public:
    test(int c, float p)
    {
    code=c; price=p;


    }
    void disp(){
    cout<<"code"<<code<<endl;
    cout<<"price"<<price<<endl;
    }
    test(const test &t){
    code=t.code;
    price=t.price;
    }
    };
    int main()
    {
    test t1(101,50.6);
    test t2(t1);
    test t3=t2;
    t1.disp();
    t2.disp();
    t3.disp();

    }
