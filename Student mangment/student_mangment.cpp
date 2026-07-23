#include <iostream>
#include <iomanip>
#include "student_mangment.h"

int student_counter = 0;
int student_ID = 1;
Student arr_student[Max_Student];

//Add_student function
void Add_student(std::string name, float gpa)
{
    if (student_counter < Max_Student)
    {
        arr_student[student_counter].set_name(name);
        arr_student[student_counter].set_gpa(gpa);
        arr_student[student_counter].set_id(student_ID);
        student_counter++;
        student_ID++;
    }
    else
    {
        std::cout << "memory is full" << std::endl;
    }
}
// view function that list all information
void view_student()
{
    for (int i = 0; i < student_counter; i++)
    {
    std::cout << std::left
    << std::setw(10) << arr_student[i].get_id()
    << std::setw(25) << arr_student[i].get_name()
    << std::setw(10) << arr_student[i].get_gpa()
    << std::endl;
    }
}