#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
    int noOfGear;
    string color;
    public:
        Car(){
            cout << " default car constructor called" << endl;
        }
        Car(int noOfGear, string color){
            cout << "car constructor called" << endl;
            this->noOfGear = noOfGear;
            this->color = color;
        }
        void printCarInfo(){
            cout << "noOfGear: " << noOfGear << endl;
            cout << "color: " << color << endl;
        }
};


class RaceCar: public Car {
    int maxSpeed;
    public:
        RaceCar(int noOfGear, string color,int maxSpeed):Car(noOfGear,color){ //here the parametrized constructor of car class is called
            cout << "race car constructor called" << endl;
            this->maxSpeed = maxSpeed;
        }
        void printInfo(){
            printCarInfo();
            cout << "maxSpeed: " << maxSpeed << " km/h" << endl;
        }

};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cout << "Enter number of gears , color , max speed of car: ";
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    raceCar.printCarInfo();
    return 0;
}