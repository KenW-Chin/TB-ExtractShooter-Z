#include <stdio.h>
#include <string>

using namespace std;

// Stores Player class (HP, Items, Actions)
class Person{
    private:
        string name {};
        int maxHealth {100};
        int health {};
        bool isAlive {true};

    public:
    Person(string name){
        this->name = name;
    };

    bool isAlive() {return isAlive;}

    int getHealth(){
        return this->health;
    }
    
    void takeDamage(int damage){
        if(getHealth() < damage || getHealth() == damage){
            isAlive = false;
        }
        else{
            setHealth(getHealth() - damage);
        }
    };

    void heal(int health){
        setHealth(getHealth() + health);
    }

    virtual void actions() = 0;
    void update();
};