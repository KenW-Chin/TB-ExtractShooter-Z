#include <iostream>
#include <string>

using namespace std;

// Item System
class Item{
    private:
        string name {};
        int itemId {};
    public:
        Item(string name, int itemId){
            this->name = name;
            this->itemId = itemId;
        }
        
        virtual void itemFunction() = 0;
};