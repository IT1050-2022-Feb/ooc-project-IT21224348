#include"ProjectBooking.h"
#include<cstring>

  ProjectBooking::ProjectBooking()
  {
        ProbookingID=000;
     	Probookingprice=0.00;
     	strcpy(ProbookingDescription,"");
  	
  	
  }
  ProjectBooking::ProjectBooking(int pbID, double pbprice, char pbDes,Customer *cusBook, AdvrtisingPackages *pacBook)
  {
  	 pbID=ProbookingID;
  	 pbprice=Probookingprice;
  	 strcpy(ProbookingDescription,pbDes);
  	 
  	 Customer=cusBook;
  	 AdvrtisingPackages =pacBook;
  	 
  	 
  }
   void ProjectBooking::generateBookingID()
  {
  	
  }  
  void ProjectBooking::calprobookingprice()
  {
  	payBook1[0] = new payment();
  }
  void ProjectBooking::CheckDesigner()
  {
  	
  }
   ProjectBooking::~ProjectBooking()
   {
   	
   }








