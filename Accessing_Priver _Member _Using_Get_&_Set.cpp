#include<iostream>

using namespace std;
class Student
{
 private:    // private data member
     int rollno;
 public:     // public accessor and mutator functions
     int getRollno();
     void setRollno(int i);
};
int Student::getRollno()
 {
  return rollno;
 }

 void Student::setRollno(int i)
 {
  rollno=i;
 }
int main()
{
 Student A;
 //A.rollno=1;  //Compile time error
 //cout<< A.rollno; //Compile time error

 A.setRollno(1);  //Rollno initialized to 1
 cout<< A.getRollno(); //Output will be 1
 return 0;
}
