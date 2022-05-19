#include "Enrolment.h"
#include "Staff.h"

#include <iostream>
using namespace std;

Staff::Staff() {
    cout << "Default Constructor called" << endl;
}

Staff::Staff(int pStaffId, char pStaffNic[12], char pStaffName[20], char pStaffAddress[100], char pStaffEmail[30], int pStaffPhone[10])
{
    this->SatffId = pStaffId;
    this->Staffnic[12] = pStaffNic[12];
    this->Staffname[20] = pStaffName[20];
    this->Staffaddress[100] = pStaffAddress[20];
    this->Staffemail[30] = pStaffEmail[20];
    this->Staffphone[10] = pStaffPhone[10];
}

void Staff::manage(Enrolment* papt)
{
}

Staff::~Staff()
{
    cout << "Destructor called" << endl;
}
