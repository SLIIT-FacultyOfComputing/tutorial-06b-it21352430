#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int studentid,char name[]) {
  studentId=studentid;
  strcpy(Name,name);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID :"<<studentId<<endl;
  cout<<"Student Name :"<<Name<<endl;
}
