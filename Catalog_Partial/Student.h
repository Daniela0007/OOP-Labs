#pragma once
#include <iostream>
class Student
{
private:
    const char* name;
    float grades[4];
    const char* subjects[4];
public :
    Student(const char *);
    const char* GetName();
    void PrintNote();
    float& operator[](const char*);
    operator float();
};

