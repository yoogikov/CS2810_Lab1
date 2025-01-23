#include <string>
#include <vector>
#ifndef FACULTY_HPP
#define FACULTY_HPP

#include "RollNumber.hpp"

class Student;  

class Faculty{
private:
	std::vector<Student*> BTPStudents;
	std::vector<Student*> DDPStudents;
	std::vector<Student*> TAs;
	std::string name;
	int type;
public:
	Faculty(std::string n, int t);
	void addBTP(Student *stu);
	void addDDP(Student *stu);
	void addTA(Student *stu);
};

#endif
