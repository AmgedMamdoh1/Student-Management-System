#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int ID;
    float gpa;
    public:
    Student()
    {
        name = "";
        ID = 0;
        gpa = 0.0;
    }
    // name
    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }
    // gpa
    void set_gpa(float g)
    {
        gpa = g;
    }
    float get_gpa()
    {
        return gpa;
    }
    //ID
    void set_id(int id)
    {
        ID = id;
    }
    int get_id()
    {
        return ID;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"GPA : "<<gpa<<endl;
        cout<<"ID : "<<ID<<endl;
    }
};