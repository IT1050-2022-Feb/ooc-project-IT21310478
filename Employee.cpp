#include "Employee.h"
#include <cstring>

Employee::Employee()
{
	employeeID = 0;
	GPA = 0.0;
}

Employee::Employee(int pemployeeId, double pgpa)
{
	employeeID = pemployeeId;
	GPA = pgpa;
}

int Employee::getEmployeeID()
{
	return 0;
}

void Employee::setGPA(double pGPA)
{
	GPA = pGPA;
}

double Employee::getGPA()
{
	return 0.0;
}

void Employee::enrollForCourse()
{

}

void Employee::searchExam()
{

}

void Employee::requestForExam()
{

}

void Employee::sendFeedback()
{
	
}

Employee::~Employee()
{
	//Destructor
}
