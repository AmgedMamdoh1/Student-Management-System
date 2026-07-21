#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int ID;
    float gpa;
    public:
    Student();
    // name
    void set_name(string n);
    string get_name();
    // gpa
    void set_gpa(float g);
    float get_gpa();
    //ID
    void set_id(int id);
    int get_id();
    // display information
    void display();
};