/**
    CS-11 cat
    Purpose: inclass

    @author Emanuel Navarro
    @version 11/13/18
*/

#include <iostream>
#include <vector>
using namespace std;

class Cat {
public:
    Cat();
    Cat(string newName, int newAge);
    int getAge() const;
    void print() const;
private:
    string name;
    int age;
};
Cat::Cat() {
    name = "none";
    age = 0;
}
Cat::Cat(string newName, int newAge) {
    name = newName;
    age = newAge;
}
int Cat::getAge() const {
    return age;
}
void  Cat::print() const {
    cout << name << " at " << age << " years.\n";
}
void printOldest(const vector<Cat>& cats) {
    int oldestIndex = 0;
    for (unsigned i = 0; i < cats.size(); i++) {
        if (cats[i].getAge() > cats[oldestIndex].getAge()) {
            oldestIndex = i;
        }
    }
    cout << "Oldest cat is ";
    cats[oldestIndex].print();
}
int main() {
    vector<Cat> cats(3);
    cats[0] = Cat("Fluffy", 7);
    cats[1] = Cat("Garfield", 5);
    cats[2] = Cat("Kitty", 3);
    printOldest(cats);
    return 0;
}