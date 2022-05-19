#include "RegisteredUser.h"
#include <iostream>
using namespace std;

RegisteredUser::RegisteredUser() {
    cout << "Default Constructor called" << endl;
}

RegisteredUser::RegisteredUser(int pUserId, char pNic[12], char pName[20], char pAddress[100], char pEmail[30], int pPhone[10])
{
    this->userId = pUserId;
    this->nic[12] = pNic[12];
    this->name[20] = pName[20];
    this->address[100] = pAddress[20];
    this->email[30] = pEmail[20];
    this->phone[10] = pPhone[10];
}
RegisteredUser::~RegisteredUser()
{
    cout << "Destructor called" << endl;
}
