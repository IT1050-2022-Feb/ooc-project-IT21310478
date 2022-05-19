#include "Exam.h"
#include<cstring>

Exam::Exam()
{
  ExamID = 0;
  strcpy(ExamDate, "");
  strcpy(ExamDescription, "");
  Examfee = 0;
}

Exam(int pExamID, const char pExamdate[], const char pExamdescription[], double pExamfee, int pay1, int pay2);
{
  Examfee = pExamfee;
  strcpy(ExamDate, pExamdate);
  strcpy(ExamDescription, pExamdescription);
  ExamID = pExamID;
}

void Exam::calculateExamfee(int id, const char pType[], double
pAmt)
{
  if (count < SIZE)
  {
    payment[count] = new Payment(id, pType, pAmt);
    count++;
  }
}

void Exam::displayExamfee()
{
}
