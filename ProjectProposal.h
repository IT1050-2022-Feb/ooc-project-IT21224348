#include"FreelancingDesigner.h"
#include"Customer.h"
#include"Payment.h"

class ProjectProposal{
	
	  private:
	        int proposalID;
	        double Proposalprice;
	        char projectDescription[50];
	  
	        FreelancingDesigner *frpro;
	        Customer *cusPro;
	        payment *pay[1];
	        
	    
	    
      public:	
 	       ProjectProposal();
 	       ProjectProposal(int proID,double Proprice, char ProDec,FreelancingDesigner *frpro,Customer *cusPro);
 	       void generalProposalID();
 	       void CalProposalprice();
 	       ~Proposal();
};

