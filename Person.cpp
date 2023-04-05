#include "Person.h"

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

//getters

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