#include"AdvertisingPackages.h"
#include<cstring>


    AdevertisingPackage::AdevertisingPackage()
    {
    	ProbooKingID=000;
	   	Probookingprice=0.00	
	    strcpy(ProbookingDescription," ")
	    
	}
	AdevertisingPackage::AdevertisingPackage(int Pid, double Pprice, char Pdes)
	{
		ProbooKingID=Pid;
	   	Probookingprice=Pprice;	
	    strcpy(ProbookingDescription,Pdes);
		
		
		
	}
    void AdevertisingPackage::dispalypackagedetail()
    {
    	
	}
	void AdevertisingPackage::updatepackageDetail(SystemDeveloper *sys1)
	{
		
	}
	void AdevertisingPackage::deletepackageDetail(SystemDeveloper *sys2)
	{
		
	}
	 AdevertisingPackage::~AdevertisingPackage()
	 {
	 	
	 }

