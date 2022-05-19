#include "RegisteredUser.h"
    class Employee : public RegisteredUser {

    protected:
        int employeeID;
        double GPA;

    public:
        Employee();
        Employee(int pemployeeID, double pGPA);
        int getEmployeeID();
        void setGPA(double pGPA);
        double getGPA();
        void enrollForCourse();
        void searchExam();
        void requestForExam();
        void sendFeedback();
        ~Employee();
};
