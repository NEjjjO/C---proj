#include "Person.h"

Person::Person(const string& name) : m_name(name){
    s_count++;
    cout << "default constructor" << endl;
}

// Constructor implementation
Person::Person(const string& name, int age) : m_name(name), age(age){
    s_count++; // Increment the count of Person objects
    cout << "constructor with values" << endl;
}

Person::Person(const string& name, int age, const string& occupation) : m_name(name), age(age), m_occupation(occupation) {
    s_count++; // Increment the count of Person objects
    cout << "constructor with all values" << endl;
}

Person::Person(const string& name, int age, const string& occupation, const string& hobby) : m_name(name), age(age), m_occupation(occupation), m_hobby(hobby) {
    s_count++; // Increment the count of Person objects
    cout << "constructor with parameter" << endl;
}

// Destructor implementation
Person::~Person() {
    s_count--; // Decrement the count of Person objects
    cout << "Destructor " << m_name << "." << endl;
}


// counter for persons
int Person::s_count = 0;

//setters
void Person::setSalary(int sal) {
    salary = sal;
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
void Person::setName(string nam)
{
    name2 = nam;
}
}
void Person::setAge(int a) {
    this->age = a;
}


//getters for person
int Person::getSalary() {
    return salary;
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
const string& Person::getName()
{
    return m_name;
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
int Main::getBool() {
    return mainbool;
}
int Main::getRandom() {
    return random;
}