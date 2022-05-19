#include "Payment.h"
#define SIZE 5

  class Course {
    private:
    char CourseID[10];
    char CourseDate[20];
    char CourseDescription[50];
    double CoursePrice;
    int count = 0;

    Payment* payment[SIZE];

  public:
    Course();
    Course(const char pCourseID[], const char pCourseDate[],const
    char pCourseDescription[],double pCoursePrice,int pay1, int pay2);
    void calculateCoursePrice(int id, char pType[], double pAmt);
    void displayCoursePrice();
    void addCourse();
    ~Course();
};
