//
//  roster.h
//  C687PA
//
//  Created by Cass on 7/19/22.
//
#include <string>
#include <array>
#include "student.h"


class Roster {
public:
    int index;

    int rosterSize;

    Student** classRosterArray;
    Roster();

    Roster(int rosterSize);

    void parseAndAdd(const string& row);

    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays0,
             int courseDays1, int courseDays2, DegreeProgram degreeProgram) const;

    bool remove(const string& studentID);

    void printAll() const;

    void printAverageDaysInCourse(const string& studentID) const;

    void printInvalidEmails() const;

    void printByDegreeProgram(DegreeProgram degree) const;

    Student* getStudentAt(int index) const;

    ~Roster();
};


