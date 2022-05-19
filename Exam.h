#include "Payment.h"
#define SIZE 5
class Exam {
    private:
    int ExamID;
    char ExamDate[20];
    char ExamDescription[50];
    double Examfee;
    int count = 0;

    Payment* payment[SIZE];

  public:
    Exam();
    Exam(int pExamID, const char pExamdate[], const char pExamdescription[], double pExamfee, int pay1, int pay2);
    void calculateExamfee(int id, const char pType[], double
    pAmt);
    void displayExamfee();
    void addExam();
    ~Exam();

};
