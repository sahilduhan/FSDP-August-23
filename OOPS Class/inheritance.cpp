#include<bits/stdc++.h>
using namespace std;

class Base {
    protected:
    int value;
};

class Derived1 : virtual public Base{
    public:
    Derived1(){
        value  = 100;
    }
    void getValue(){
        cout<<"Derived1 Value from "<<value<<endl;
    }
};

class Derived2 : virtual public Base {
    public:
    Derived2(){
        value = 200;
    }

    void getValue(){
        cout<<"Derived2 Value from "<<value<<endl;
    }
};

class Dervied3 : public Derived1 , public Derived2 {
    public:

    void getValue(){
        Derived2 :: getValue();
    }
};

int main()
{
    
    Dervied3 helloCutie;
    helloCutie.getValue();
    
    return 0;
} 

