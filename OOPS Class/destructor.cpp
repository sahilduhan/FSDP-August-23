#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
    int hands, legs;
};

class Student : public Person {
public:
    int rollNumber;

    Student(){
        cout<<"Student class Invoked"<<endl;
    }
};
int main(){
    Student sahil;

    
    return 0;
}