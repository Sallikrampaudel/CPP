#include<iostream>
using namespace std;
        class complex{
            private:
                 int a,b;
            public:
                    void setdata(int x,int y)
                    {
                        a=x;
                        b=y;

                    }
            void display(){
            cout<<a<<endl;
            cout<<b<<endl;
            }
            friend void fun(complex c);
        };
        void fun(complex c){
        cout<<c.a+c.b;
        }
    int main(){
        complex c,c2;
        c.setdata(2,3);

        c2.setdata(5,6);
        fun(c2);

        return 0;

    }
