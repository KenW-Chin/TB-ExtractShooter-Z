#include <stdio.h>
#include <string>

using namespace std;

// Stores Player class (HP, Items, Actions)
class Person{
    private:
        string name {};
        int health {};
    public:
    Person(string name){
        this->name = name;
    };

    void setHealth(int health){
        this->health = health;
    }

    virtual void actions() = 0;
};