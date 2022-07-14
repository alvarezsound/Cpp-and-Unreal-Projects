#include <iostream>
using namespace std;

class Dog {
    public:
        string breed, color, height, weight;

        void Shake(){
            cout << "The " + breed + " does a shake \n";
        }

        void Sit(){
            cout << "The " + breed + " sits \n" ;
        }

        bool LayDown(){
            cout << "The " + breed + " lies down \n";
        }

        bool IsGoodBoy(){
            cout << "The " + breed + " is a good boy \n";
        }
};

int main() {
    Dog Beagle;
    Beagle.breed = "Hound";
    Beagle.color = "Brown";
    Beagle.height = "2 feet";
    Beagle.weight = "60 pounds";
    return 0; 
}