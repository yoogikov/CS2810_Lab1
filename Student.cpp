#include "Student.hpp"
#include "Faculty.hpp"
#include "RollNumber.hpp"

Student::Student(RollNumber *r, std::string hostel, Faculty *facad, float cgpa):r(r), hostel(hostel), facad(facad), cgpa(cgpa){};

void Student::setType(int type){
    this->type = type;
};

std::string Student::getHostel(){return hostel;};

Faculty* Student::getFacad(){return facad;};

void Student::changeHostel(std::string hostel){this->hostel = hostel;};





BTech::BTech(RollNumber *r, std::string hostel, Faculty *facad, float cgpa): Student(r, hostel, facad, cgpa){
    setType(0);
}

Faculty* BTech::getBTPGuide(){return BTPGuide;};

void BTech::setBTPGuide(Faculty *fac){BTPGuide = fac;};






DualDegree::DualDegree(RollNumber *r, std::string hostel, Faculty *facad, float cgpa): Student(r, hostel, facad, cgpa){
    setType(1);
}

Faculty* DualDegree::getDDPGuide(){return DDPGuide;};
Faculty* DualDegree::getTASupervisor(){return TASupervisor;};

void DualDegree::setDDPGuide(Faculty *fac){DDPGuide = fac;};
void DualDegree::setTASupervisor(Faculty *fac){TASupervisor = fac;};
