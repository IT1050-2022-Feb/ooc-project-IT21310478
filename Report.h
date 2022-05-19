#include"Exam.h"
#include"Course.h"
#include"Payment.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5

class Report
{
  private:
    Course* Course[SIZE1];
    Exam* Exam[SIZE2];
    Payment* pay[SIZE3];
  public:
    Report();
    Report(Course* pbbok[], Exam* psell[], Payment* ppay[]);
    void CourseDetailsReport();
    void ExamDetailsReport();
    void PaymentDetailsReport();
    ~Report();
};
