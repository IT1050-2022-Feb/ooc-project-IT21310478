#include "GuestUser.h"
#include <cstring>

GuestUser::GuestUser()
{
	strcpy(NIC, "");
	strcpy(Name, "");
	strcpy(Address, "");
	strcpy(Email, "");
	strcpy(phoneNumber, "");
}

GuestUser::GuestUser(const char pNIC[], const char pName[], const char pAddress[], const char pEmail[], const char pphoneNumber[])
{
	strcpy(NIC, pNIC);
	strcpy(Name, pName);
	strcpy(Address, pAddress);
	strcpy(Email, pEmail);
	strcpy(phoneNumber, pphoneNumber);
}

void GuestUser::registerUser()
{

}

void GuestUser::displayDetails()
{

}

GuestUser::~GuestUser()
{
	//Destructor
}
