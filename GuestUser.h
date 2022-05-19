class GuestUser
{
protected:
	char NIC[12];
	char Name[30];
	char Address[40];
	char Email[30];
	char phoneNumber[10];

public:
	GuestUser();
	GuestUser(const char pNIC[], const char pName[], const char pAddress[], const char pEmail[], const char pphoneNumber[]);
	void registerUser();
	void displayDetails();
	~GuestUser();
};
