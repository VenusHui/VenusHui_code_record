#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define gap 8

class Student
{
private:
    int _admissionID; // 准考证号
    int _gender;      // 性别
    int _age;         // 年龄
    string _name;     // 姓名
    string _category; // 报考类别
    Student* _next;

public:
    Student();
    Student(int id, int gender, int age, string name, string category, Student* next);
    ~Student();

    int getID() { return _admissionID; }
    void setID(int id) { _admissionID = id; }

    int getGender() { return _gender; }
    void setGender(int gender) { _gender = gender; }

    int getAge() { return _age; }
    void setAge(int age) { _age = age; }

    string getName() { return _name; }
    void setName(string name) { _name = name; }

    string getCategory() { return _category; }
    void setCategory(string category) { _category = category; }

    Student* getNext() { return _next; }
    void setNext(Student* next) { _next = next; }

    bool changeInfo(Student& newStudent);

    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, Student& s);
};
#endif // !_STUDENT_H_