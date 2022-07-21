//
//  student.cpp
//  C687PA
//
//  Created by Cass on 7/19/22.
//

#include "student.h"
#include <string>
#include <iostream>

using namespace std;


string Student::getstudentID() const {
    return studentID;
}

string Student::getfirstName() const {
    return firstName;
}

string Student::getlastName() const {
    return lastName;
}

string Student::getemailAddress()() const {
    return emailaddress;
}

int Student::getage() const {
    return age;
}

int *Student::getnumDays3Courses()() {
    return numDays3Courses;
}


void Student::setstudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setfirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setlastName(string lastName) {
    this->lastName = lastName;
}

void Student::setemailaddress(<#string emailaddress#>) {
    this->emailaddress = emailaddress;
}

void Student::setage(int age) {
    this->age = age;
}

void Student::setnumDays3Courses(int day0, int day1, int day2) {
    Student::numDays3Courses[0] = day0;
    Student::numDays3Courses[1] = day1;
    Student::numDays3Courses[2] = day2;
}

void Student::setDegree(Degree degree) {
    this->degree = degree;
}


Student::Student(string studentID, string firstName, string lastName, string emailaddress, int age, int* numDays3Courses, Degree degree) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailaddress = emailaddress;
    this->age = age;
    this->numDays3Courses[0] = numDays3Courses[0];
    this->numDays3Courses[1] = numDays3Courses[1];
    this->numDays3Courses[2] = numDays3Courses[2];
}


void Student::print() {}
Student::~Student() {}
