#include "RegisteredUser.h"
class MarkingLecture : public RegisteredUser {

private:
    int markingLectureId;
    char lecturerType[10];
    double salary;
public:
    MarkingLecture();
    void setMarkingLectureId(int pMarkingLectureId);
    void setLecturerType(char pLecturerType[10]);
    void setSalary (double pSalary);
    double getSalary();
    void createCourses();
    void manageCourses();
    void createPaper();
    void markPaper();
    void submitMark();
    ~MarkingLecture();
};
