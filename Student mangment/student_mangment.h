#include <string>
#include "student.h"
#ifndef student_mangment_h
#define student_mangment_h

//Add_Student requirement
const int Max_Student = 100;
extern Student arr_student[Max_Student];

//Add_student function
void Add_student(std::string name, float gpa);
//view function
void view_student();
#endif