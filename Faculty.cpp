#include "Faculty.hpp" 
#include "Student.hpp"
#include <string>

Faculty::Faculty(std::string n, int t){
    name = n;
    type = t;
}

void Faculty::addBTP(Student *stu){
    BTPStudents.push_back(stu);
}

void Faculty::addDDP(Student *stu){
    DDPStudents.push_back(stu);
}

void Faculty::addTA(Student *stu){
    TAs.push_back(stu);
}
