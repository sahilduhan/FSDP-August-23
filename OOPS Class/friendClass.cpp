#include<bits/stdc++.h>
using namespace std;
class Sahil {
    private:
    int toys;

    public:
    int laptop;

    Sahil(){
        cout<<"Default Constructor"<<endl;
    }
    friend class Mehtab;
};

class Mehtab {
    public:

    void print(Sahil &obj){
        cout<<obj.toys<<endl;
    }

};
int main(){


    return 0;
}