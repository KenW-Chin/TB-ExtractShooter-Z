// #include "Person.h"
#include <string>
#include <iostream>

using namespace std;

// the user
class Player : public Person {
    private:
    Inventory myInventory{};
    // Main weapon that they cannot drop, fists
    Item currentWeapon {"Fists"};

    public:
    // retrieves and stores items in their inventory
    Inventory getInventory(){
        return myInventory;
    }

    // enables the player to use a weapon from their inventory. If none, use their fists
    Item currentWeapon(){
        return myInventory.getWeapon() || currentWeapon;
    }

    void actions();

};