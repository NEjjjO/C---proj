#include "Person.h"


//constructors for person
Person::Person(const string& name) : name(name){
    p_count++;
    cout << "default constructor" << endl;
}

// Constructor implementation
Person::Person(const string& name, int age) : name(name), age(age) {
    p_count++; // Increment the count of Person objects
    cout << "constructor with values" << endl;
}

Person::Person(const string& name, int age, const string& occupation) : name(name), age(age), occupation(occupation) {
    p_count++; // Increment the count of Person objects
    cout << "constructor with all values" << endl;
}

Person::Person(const string& name, int age, const string& occupation, const string& hobby) : name(name), age(age), occupation(occupation), hobby(hobby) {
    p_count++; // Increment the count of Person objects
    cout << "constructor with parameter" << endl;
}

//ddestructors for person
Person::~Person() {
    p_count--; // Decrement the count of Person objects
    cout << "Destructor " << name << "." << endl;
}




//setters for Person
void Person::setScore(int sal) {
    score = sal;
}
void Person::setHeight(int high) {
    height = high;
}
void Person::setWeight(int wegh) {
    weight = wegh;
}
void Person::setIq(int num) {
    iq = num;
}

void Person::setAge(int a) {
    this->age = a;
}






//getters for Person
int Person::getScore() {
    return score;
}
int Person::getHeight() {
    return height;
}
int Person::getWeight() {
    return weight;
}
int Person::getIq() {
    return iq;
}
int Person::getAge() {
    return age;
}

// class Main setters
void Main::setBool(bool mein) {
    mainbool = mein;
}
void Main::setRandom(int ran) {
    random = ran;
}

//Class Main getters
int Main::getBool() {
    return mainbool;
}
int Main::getRandom() {
    return random;
}