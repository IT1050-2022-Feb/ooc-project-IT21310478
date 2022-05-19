#include "MarkingLecture.h"
#include <iostream>
using namespace std;

MarkingLecture::MarkingLecture() {
    cout << "Default Constructor called" << endl;
}

void MarkingLecture::setMarkingLectureId(int pMarkingLectureId)
{
    this->markingLectureId = pMarkingLectureId;
}

void MarkingLecture::setLecturerType(char pLecturerType[10])
{
    this->lecturerType[10] = pLecturerType[10];
}

void MarkingLecture::setSalary(double pSalary)
{
    this->salary = pSalary;
}

MarkingLecture::~MarkingLecture()
{
    cout << "Destructor called" << endl;
}
