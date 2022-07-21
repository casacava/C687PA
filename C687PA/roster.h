//
//  roster.h
//  C687PA
//
//  Created by Cass on 7/19/22.
//
#include <string>
#include <array>
#include “student.h”
#ifndef roster.h
#define roster.h

class Roster {
protected:
    Student *classRosterArray[5];
    
public:
    void add(string studentID, string firstName, string lastName, string emailaddress, int age, int num1, int num2, int num3, Degree degree);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(Degree degree);
    
    int iterator = 0;
    
    ~Roster();
};

#endif /* roster_h */
