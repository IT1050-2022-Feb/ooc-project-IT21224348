#include"AdvertisingPackage.h"


class systemDeveloper{
	
	private:
	char Develpoername[20];
	char DeveloperUname[20];
	char Developeremail[20];
	char Developerpwd[10];
	int DeveloperNo;
	
	public:
		
		systemDeveloper();
		systemDeveloper(char dname[], char duname[], char demail[], char dpwd[],int dno );
		void login();
		void managePackageDetail();
		~sytemDeveloper();	
};
