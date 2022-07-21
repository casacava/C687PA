//
//  main.cpp
//  C687PA
//
//  Created by Cass on 7/19/22.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;

int main() {
    std::cout << "C867 -  Scripting & Programming Applications" << std::endl;
    std::cout << "The language used is C++" << std::endl;
    std::cout << "Student ID: 010523482" << std::endl;
    std::cout << "Cass Cavazos" << std::endl;
    
    
    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Cass,Cavazos,cavaz6@wgu.edu,22, 20,SOFTWARE"};
    const auto numStudents = 5;

        auto* classRoster = new Roster(numStudents);


        cout << "C867 Scripting and Programming Applications" << endl;

        cout << "Programmed in C++ by Eric Lawson - Student ID: #001009860" << endl;

        cout << endl;

        for (const auto& i : studentData)
        {
            classRoster->parseAndAdd(i);
        }

        cout << "Students:" << endl;
        classRoster->printAll();


        cout << endl;

        cout << "Invalid student emails:" << endl;
        classRoster->printInvalidEmails();

        cout << endl;

        cout << "Average days in course:" << endl;
        for (auto i = 0; i < numStudents; i++)
        {
            classRoster->printAverageDaysInCourse(classRoster->getStudentAt(i)->getStudentID());
        }

        cout << endl;

        cout << "Students studying software: " << endl;
        classRoster->printByDegreeProgram(SOFTWARE);

        cout << endl;

        classRoster->remove("A3");

        cout << endl;

        classRoster->printAll();

        cout << endl;

        classRoster->remove("A3");

        system("pause");
    return 0; //end
};
