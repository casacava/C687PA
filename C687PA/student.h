//
//  student.h
//  C687PA
//
//  Created by Cass on 7/19/22.
//
#include "degree.h"
#include <string>
#ifndef student_h
#define student_h

using namespace std;


#endif /* student_h */

class Student {
protected:
    
    string studentID;
    string firstName;
    string lastName;
    string emailaddress;
    int age;
    int numDays3Courses;
    
    Degree degree;
    
public:
    Student(string studentID, string firstName, string lastName, string emailaddress, int age, int numDays3Courses, Degree degree);
    
    //accessors (ie getters) for each instance variable
    
    string getstudentID () const;
    string getfirstName () const;
    string getlastName () const;
    string getemailAddress () const;
    int getage () const;
    int *getnumDays3Courses ();
    
    // mutators (ie setters) for each instane variable
    void setstudentID (string studentID);
    void setfirstName (string firstName);
    void setlastName (string lastName);
    void setemailaddress (string emailaddress);
    void setnumDays (int day0, int day1, int day2);
    void setDegree (Degree degree);
   
    virtual void print();
    virtual Degree getDegreeProg() = 0;
    
    //Destrcutor
    ~Student();
};
