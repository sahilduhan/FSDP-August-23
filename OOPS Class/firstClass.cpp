#include<bits/stdc++.h>
using namespace std;

// object oriented programming language

// class is an user defined datatype

// advantages

// provides structure to the code, application

class MyRobot {
// by default all the properties are private
public:
    int hands = 4;
    int legs = 4;
    int head = 4;
};


class Vehical {
public:
    int tyers;
    string vehicalType;
    int numberOfSeats;
    int safetyRating;
    int age;
    int price;
    
    void inputDetails(){
        cin >> tyers >> vehicalType >> numberOfSeats >> safetyRating >> age >> price;
    }

    void getDetails(){
        cout<<tyers<<endl;
        cout<<age<<endl;
        cout<<numberOfSeats<<endl;
        cout<<price<<endl;
        cout<<vehicalType<<endl;
    }
};

class Human {
public:
    int hands;
    int legs;
    string hairColor;
    char gender;
    int age;

    int countHands(){
        return hands;
    }
    
    char genderDetails(){
        return gender;
    }

    char genderDetails(char c){
        return gender;
    }
};


class Avenger {
public:
    string typeOfAvenger;
    string parentPlanet;
    int power;

    // void print(){
    //     cout<<typeOfAvenger << " belongs to -> " << parentPlanet << " with power of -> "<<power<<endl;
    // }

    Avenger(){
        cout<<typeOfAvenger << " belongs to -> " << parentPlanet << " with power of -> "<<power<<endl;
    }

    Avenger(int power, string planet){
        this->power = power;
        this->parentPlanet = planet; 
        cout<<"parameterised constructor"<<endl;
        cout<<this->power<< " - > " <<this->parentPlanet<<endl;
    }
};

int main(){
    MyRobot optimusPrime;

    Avenger ironMan;
    // ironMan.power = 100;
    // ironMan.typeOfAvenger = "Indian";
    // ironMan.parentPlanet = "earth";

    // ironMan.print();
    // cout<<sizeof(optimusPrime)<<endl;
    // cout<<optimusPrime.hands<<endl;
    // cout<<optimusPrime.legs<<endl;
    // cout<<optimusPrime.head<<endl;
    // Vehical ferrari;
    // ferrari.tyers = 12;
    // ferrari.age = 100;
    // ferrari.numberOfSeats = 150;
    // ferrari.price = 100;
    // ferrari.vehicalType = "laddha";
    // ferrari.inputDetails();
    // ferrari.getDetails();
    // cout<<ferrari.tyers<<endl;
    // cout<<ferrari.age<<endl;
    // cout<<ferrari.numberOfSeats<<endl;
    // cout<<ferrari.price<<endl;
    // cout<<ferrari.vehicalType<<endl;

    // Human sahil;
    // sahil.age = 22;
    // sahil.gender = 'M';
    // sahil.hands = 10;
    // sahil.hairColor = "Blue";
    // sahil.legs = 10;

    // cout<<sahil.countHands() << "->" << sahil.genderDetails() << endl;

    // constructor: it is a method only, which is invoked by at the very first time.

    return 0;
}