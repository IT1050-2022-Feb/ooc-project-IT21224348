#include"ProjectProposal.h"
#inlude<cstring>



     ProjectProposal::ProjectProposal()
     { 
	         proposalID=000;
	         Proposalprice=0.00;
	        strcpy(projectDescription,"")
     	
	 }
	 ProjectProposal::ProjectProposal(int proID,double Proprice, char ProDec,FreelancingDesigner *frpro,Customer *cusPro)
	 {
	 	proposalID=proID;
	 	Proposalprice=Proprice;
	 	strcpy( projectDescription,ProDec);
	 	
	 	
	 }
	 void ProjectProposal::generalProposalID()
	 {
	 	
	 }
	 void ProjectProposal::CalProposalprice()
	 {
	 	pay[0]=new payment();
	 }
	 ProjectProposal::~ProjectProposal()
	 {
	 	
	 }
	 
	 
	 
