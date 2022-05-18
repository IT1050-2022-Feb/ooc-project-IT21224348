#include"SystemDeveloper.h"
#include<cstring>


    systemDeveloper::systemDeveloper()
    {
    	strcpy(Develpoername,"");
    	strcpy(DeveloperUname,"");
    	strcpy(Developeremail,"");
    	strcpy(Developerpwd,"");
    	DeveloperNo=0000000000;
	}
	systemDeveloper::systemDeveloper(char dname[], char duname[], char demail[], char dpwd[],int dno)
	{
		strcpy(Develpoername,dname);
    	strcpy(DeveloperUname,duname);
    	strcpy(Developeremail,demail);
    	strcpy(Developerpwd,dpwd);
    	DeveloperNo=dno;	
	}	
	void systemDeveloper::managePackageDetail()
	{
		
	}
	void systemDeveloper::login()
	{
		
	}
	systemDeveloper::~systemDeveloper()
	{
		
	}
