#include "Enrolment.h"
#define SIZE 5

class Staff{
  protected:
    int SatffId;
    char Staffnic[12];
    char Staffname[20];
    char Staffaddress[100];
    char Staffemail[30];
    char Staffphone[10];

    Enrolment* apt[SIZE];

  public:
    Staff();
    Staff(int pStaffId, char pStaffNic[12], char pStaffName[20], char pStaffAddress[100], char pStaffEmail[30], int pStaffPhone[10]);
    void updateStaffDetails();
    void viewCurrentDetails();
    void manage( Enrolment* papt);
    ~Staff();

};

