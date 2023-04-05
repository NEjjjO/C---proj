#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <iostream>
#include <string.h>
#include "Car.h"

using namespace std;

class Person {
protected:
    string phone_num;
    string address;


public: 
    string name2;
    string id; 

    //setters
    void setSalary(int sal);
    void setAge(int a);
    void setHeight(int high);
    void setWeight(int wegh);
    void setIq(int num);
    void setName(string nam);
    void setName(char nam);

    //getters
    int getSalary();
    int getAge();
    int getHeight();
    int getWeight();
    int getIq();
    const string& getName();
    
    //constructor
    Person(const string &name); //def const
    Person(const string &name, int age);
    Person(const string &name, int age, const string& occupation);
    Person(const string &name, int age, const string& occupation, const string& hobby);

    // Destructor
    ~Person();

    static int s_count;

    
private:
    int age;
    int height;
    int salary;
    int weight;
    int iq;
    string m_name;
    string m_occupation;
    string m_hobby;
};

class Main {
public:
    void setBool(bool mein); 
    void setRandom(int ran);
    int getBool();
    int getRandom();

private:
    bool mainbool = true;
    int random;
};
#endif