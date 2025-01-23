#ifndef STUDENT_HPP
#define STUDENT_HPP 

#include <string>
#include "RollNumber.hpp"
#include "Faculty.hpp"

class Student{
private:
	RollNumber *r;
	std::string hostel;
	Faculty *facad;
	float cgpa;
	int type;
public:
	Student(RollNumber *r, std::string hostel, Faculty *facad, float cgpa);
	void setType(int type);
	std::string getHostel();
	Faculty* getFacad();
	void changeHostel(std::string hostel);
};

class BTech : public Student{
private:
    Faculty* BTPGuide;
public:
	BTech(RollNumber *r, std::string hostel, Faculty *facad, float cgpa);
	Faculty* getBTPGuide();
	void setBTPGuide(Faculty *fac);
};

class DualDegree : public Student{
private:
	Faculty *DDPGuide;
	Faculty *TASupervisor;
public:
	DualDegree(RollNumber *r, std::string hostel, Faculty *facad, float cgpa);
	Faculty* getDDPGuide();
	Faculty* getTASupervisor();
	void setDDPGuide(Faculty *fac);
	void setTASupervisor(Faculty *fac);
};

#endif

