#include <iostream>
using namespace std;

class Dog{
    public:
        string Breed, Color, Height, Weight;

        void Shake(){
            cout << "The " + Breed + " does a shake \n";
        }

        void Sit(){
            cout << "The " + Breed + " sits \n" ;
        }

        bool LayDown(){
            cout << "The " + Breed + " lies down \n";
        }

        bool IsGoodBoy(){
            cout << "The " + Breed + " is a good boy \n";
        }
};

int main(){
    Dog Beagle;
    Beagle.Breed = "Hound";
    Beagle.Color = "Brown";
    Beagle.Height = "2 feet";
    Beagle.Weight = "60 pounds";
    return 0; 
}