#include<iostream>
using namespace std;
    class square{
        public:
        int length;
        int width;
        int height;
        void info(){
        cout<<"Enter length of cube:";
        cin>>length;
        cout<<"Enter breadth of cube:";
        cin>>width;
        cout<<"Enter height of cube:";
        cin>>height;

        }


    };
    class Cube: public square{
        public:
        int calV;
        int calA;
        int calculate(){
        calV=length*length*length;
        calA=6*length*length;
            return (calA,calV);

        }
        int display(){
            cout<<"Cube's volume:" <<calV<<endl;
            cout<<"Cubes Area:" <<calA;

        }

    };
    int main(){
    Cube Obj;
    Obj.info();
    Obj.calculate();
    Obj.display();
    return 0;

    };
