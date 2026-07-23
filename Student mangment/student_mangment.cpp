#include <iostream>
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