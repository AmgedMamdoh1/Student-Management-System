#include <iostream>
#include "Student/student.h"
#include "Student_mangment/student_mangment.h"
void print_menu()
{
    // Menu of program
    std::cout << "==== Student Mangment System V 1.0.0====" << std::endl
              << "[1] Add Student " << std::endl
              << "[2] View Students " << std::endl
              << "[3] Search by ID " << std::endl
              << "[4] Exit " << std::endl ;
}
int main ()
{
    int choice;
    

    do
    {
        print_menu();
        // User Choice
        std::cout << "Enter your choice : ";
        std::cin >> choice;
       if (choice == 1)
        {
            std::cout << "Enter Student Name : ";
            std::string name; std::cin >> name;
            std::cout << "Enter Student GPA : ";
            float gpa; std::cin >> gpa;
            Add_student(name, gpa);
            
        }
        else if (choice == 2)
        {
            view_student();
            
        }
        else if (choice == 3)
        {
            search_student();
            
        }
        else if (choice == 4)
        {
            std::cout << "Goodbye";
            
        }
        else
        {   
            std::cout << "Invalid Choice " << std::endl;
            
        }  
    } while (choice != 4);

    return 0;
}