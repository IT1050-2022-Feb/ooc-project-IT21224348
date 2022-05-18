            
			
			 #include"Registereduser.h"
             #include"ProjectProposal.h"
             #include"Payment.h"
             #define size 5 

            class FreelancingDesigner : public Registeruser
             {   
                private:
      	            projectProposal *freePro[size];
      	            payment *paymnets[2];
      
	            public:
	  	             FreelancingDesigner();
	  	             FreelancingDisigner(char reuname, char reupassword,int UID, char Uname[], char Uemail[],int Ucno)
	  	             void placeAproposal(projectProposal * SfreePro);
	  	             void submitproject();
	  	             void withdrawpayment();
	  	             void displayDesignerdetails();
	  	             ~FreelancingDesigner;
           };

