#include <iostream> 
#include <string.h>
#include "Person.h"
using namespace std;

int main() {

//cout << "Hello World" << endl;

Person person1("Raluca", 20);
Person person2("Fabi", 19, "Engineer");
Person person3("Andrei", 20, "Student", "Football");

cout << "Person 1's stats are:" << endl;
cout << "Person 1's age is:" << person1.getAge() << endl;
//cout << "Person 1's salary is:" << person1.getScore() << endl;
cout << "Person 1's weight is:" << person1.getWeight() << endl;
cout << "Person 1's height is:" << person1.getHeight() << endl;
cout << "Person 1's iq is:" << person1.getIq() << endl << endl;
}