#ifndef student_h
#define student_h
#include<iostream>
class Student
{
    private:
    std::string name;
    int ID;
    float gpa;
    public:
    Student();
    // name
    void set_name(std::string n);
    std::string get_name();
    // gpa
    void set_gpa(float g);
    float get_gpa();
    //ID
    void set_id(int id);
    int get_id();
    
};
#endif