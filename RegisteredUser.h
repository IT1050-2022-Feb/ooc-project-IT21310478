class RegisteredUser {
protected:
    int userId;
    char nic[12];
    char name[20];
    char address[100];
    char email[30];
    char phone[10];

public:
    RegisteredUser();
    RegisteredUser(int pUserId, char pNic[12], char pName[20], char pAddress[100], char pEmail[30], int pPhone[10]);
    void updateUserDetails();
    void viewCurrentDetails();
    void makeFees();
    void inputPaymentDetails();
    ~RegisteredUser();
};
