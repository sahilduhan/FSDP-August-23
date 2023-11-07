#include<bits/stdc++.h>
using namespace std;

class Shape {
    public:
    // function overloading

    // we define functions with same name but diffrent params and diffrent data types

    int area(int length, int breadth){
        return length * breadth;
    }

    int area(int radius){
        return 3.14 * radius * radius;
    }

    int area(double base, int height){
        return 1 / 2 * base * height;
    }
};

class OperatorOverLoading {
    public:

    int length,  breadth;

    OperatorOverLoading(){
        this->length = 0;
        this->breadth = 0;
    }
    OperatorOverLoading(int len, int br){
        this->length = len;
        this->breadth = br;
    }

    OperatorOverLoading operator+(OperatorOverLoading obj2){
        OperatorOverLoading obj3;
        obj3.length = length + obj2.length;
        obj3.breadth = breadth + obj2.breadth;
    }
};

int main(){

    OperatorOverLoading obj1(10,20);
    OperatorOverLoading obj2(30,40);

    OperatorOverLoading obj3;

    obj3 = obj1 + obj2;

    cout<<obj3.length << obj3.breadth;
    // Shape x;
    // cout<<x.area(2.0,4)<<endl;
    // cout<<x.area(10);
    return 0;
}