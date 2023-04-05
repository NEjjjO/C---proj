#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <iostream>
#include <string.h>
using namespace std;


class Person{
    public:
        string name;
        int id;
    //setters here
    void setScore(int sal);
    void setAge(int a);
    void setHeight(int high);
    void setWeight(int wegh);
    void setIq(int num);
    void setName(string nam);

    //getters here
    int getScore();
    int getAge();
    int getHeight();
    int getWeight();
    int getIq();
    const string& getName();



    //constructors here
    Person(const string& name);
    Person(const string& name, int age);
    Person(const string& name, int age, const string& occupation);
    Person(const string& name, int age, const string& occupation, const string& hobby);


    //destructors here
    ~Person();

    static int p_count;

    private:
    int age;
    int height;
    int weight;
    int iq;
    int score;
    string occupation;
    string hobby;
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

#endif //person.h