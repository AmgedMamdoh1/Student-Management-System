#include "student.h"
#include <iostream>
//constructor
Student::Student()
{
    name = "";
    gpa = 0.0;
}
//name function
void Student::set_name(std::string n)
{
    name = n;
}
std::string Student::get_name()
{
    return name;
}
//GPA function
void Student::set_gpa(float g)
{
    gpa = g;
}
float Student::get_gpa()
{
    return gpa;
}
//ID function
void Student::set_id(int id)
{
    ID = id;
}
int Student::get_id()
{
    return ID;
}
