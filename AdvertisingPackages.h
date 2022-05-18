#include"Customer.h"
#include"ProjectBooking.h"

class AdevertisingPackage{
	
	 private:
	   	int ProbooKingID;
	   	double Probookingprice;	
	    char ProbookingDescription;
	       
	    SystemDeveloper *sys[2];
	     
	public:
	   	AdvertisingPackage();
	   	AdvertisingPackage(int Pid, double Pprice, char Pdes)
	    void dispalypackagedetail();
	    void updatepackageDetail(SystemDeveloper *sys1);
	    void deletepackageDetail(SystemDeveloper *sys2);
	    ~AdvertisingPackage();	
};

