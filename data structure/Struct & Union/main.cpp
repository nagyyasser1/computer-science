#include <iostream>
using namespace std;
void structExample();
void unionExample();

struct User
{
    int id;
    string name;
    bool admin;
};

union Grade
{
    int gpa;
    // string status;
};

int main()
{
    unionExample();
    return 0;
}

void unionExample()
{
    Grade std1;
    std1.gpa = 3;
    cout << "Gpa is : " << std1.gpa;
    // std1.status = "success";
    // cout << "Status is : " << std1.status;
}

void structExample()
{
    User u1;
    cout << "Enter your id !: " << endl;
    cin >> u1.id;
    cout << "Enter your name !: " << endl;
    cin >> u1.name;
    cout << "Are you admin ? (true/false): " << endl;

    cin >> u1.admin;

    cout << "Name: " << u1.name << endl;
    cout << "Admin: " << u1.admin;
}