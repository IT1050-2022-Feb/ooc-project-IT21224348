#include"Customer.h"
#include"Payment.h"
#include"Advertisingpackages.h"

class ProjectBooking
{
     private:
     	int ProbookingID;
     	double Probookingprice;
     	char ProbookingDescription[50];
     	
     	Customer *cusBook;
     	AdvrtisingPackages *pacBook;
     	payment *payBook1[1];
     	
     public:
		ProjectBooking();
		projectBooking(int pbID, double pbprice, char pbDes,Customer *cusBook, AdvrtisingPackages *pacBook );
		void generateBookingID();
		void calprobookingprice();
		void CheckDesigner();
		~ProjectBooking();
};

