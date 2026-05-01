#include <stdio.h>
#include <string>

using namespace std;

// Stores Player class (HP, Items, Actions)
class Person{
    private:
        string name {};
        int health {};
    public:
    Person(string name, int health){
        this->name = name;
        this->health = health;
    };
};