

#include"Registereduse.h"
#include"payment.h"
#include"Projectproposal.h"
#include"projectBooking.h"
#include"AdvetisingPackage.h"



class Customer : public Registereduser
{
  	private: 
        ProjectProposal *cPro;
	    ProjectBooking  *cBook;
	    AdvertisementPackage *Cpac;  	      
  	    payment *payments[2]; 
  	  
    public:
  	  	   
  	  	Customer();
  	  	Customer(char reuname, char reupassword,int UID, char Uname[], char Uemail[],int Ucno);
  	  	void selectpackage(AdvertisementPackage *Cpac1);
  	  	void palceAproject(ProjectBooking  *cBook1);
  	  	void selectdesigner(ProjectProposal *cPro1);
  	    void Paypayment();
  	    ~Customer();

};
  
  
  



