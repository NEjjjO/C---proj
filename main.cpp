#include <iostream> 
#include <string.h>
#include "Person.h"

using namespace std;

int main() {
    // Create objects with the different constructors
    Person person1("Raluca", 20);
    Person person2("Fabi", 19, "Engineer");
    Person person3("Andrei", 20, "Student", "Football");
    Person vosy("Kristof", 19, "enjinir","3D printing");

    // Modify object's age with "this" pointer
    person1.setAge(19);
    person3.setAge(10);


    cout << "Person 1's stats are:" << endl;
    cout << "Person 1's age is:" << person1.getAge() << endl;
    cout << "Person 1's salary is:" << person1.getSalary() << endl;
    cout << "Person 1's weight is:" << person1.getWeight() << endl;
    cout << "Person 1's height is:" << person1.getHeight() << endl;
    cout << "Person 1's iq is:" << person1.getIq() << endl << endl;
    
    cout << "Person 2's stats are:" << endl;
    cout << "Person 2's age is:" << person2.getAge() << endl;
    cout << "Person 2's salary is:" << person2.getSalary() << endl;
    cout << "Person 2's weight is:" << person2.getWeight() << endl;
    cout << "Person 2's height is:" << person2.getHeight() << endl;
    cout << "Person 2's iq is:" << person2.getIq() << endl << endl;
    
    cout << "Person 3's stats are:" << endl;
    cout << "Person 3's age is:" << person3.getAge() << endl;
    cout << "Person 3's salary is:" << person3.getSalary() << endl;
    cout << "Person 3's weight is:" << person3.getWeight() << endl;
    cout << "Person 3's height is:" << person3.getHeight() << endl;
    cout << "Person 3's iq is:" << person3.getIq() << endl << endl;



    // Print the count of Person objects
    cout << "There are " << Person::s_count << "Person objects." << endl << endl;

    Main main1, * pm;
    pm = &main1;

    main1.setBool(false);
    pm->getBool();
    if (pm->getBool() == true) {
        cout << "main is true" << endl;
    }
    else {
        cout << "main is false" << endl;
    }

    main1.setRandom(rand());
    cout << "Your random number today is:" << main1.getRandom() << endl << endl;
    return 0;
}