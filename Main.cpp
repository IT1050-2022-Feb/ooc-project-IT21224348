#include"GuestUser.h"
#include"RegisteredUser.h"
#include"FreelancingDesigner.h"
#include"Customer.h"
#include"AdvertisingPackage.h"
#include"SystemDeveloper.h"
#include"ProjectBooking.h"
#include"ProjectProposal.h"
#include"SystemDeveloper.h"
#include"Report.h"
#include"payment.h"


#include<iostream>
using namespace std;

int main()
{

	 //object creation

	GuestUser *rgu= new RegisteredUser();
	RegisteredUser *FreeDesigner= new FreelancingDesigner();
	RegisteredUser *Customer =new Customer();
	AdevertisingPackage *adp = new AdevertisingPackage();
	SystemDeveloper *sys = new SystemDeveloper();
	ProjectBooking *probook = new ProjectBooking();
	ProjectProposal *Proproposal = new ProjectProposal();
	Report *rep = new Report();
	payment *pay =new payment();
	
	
	
	//Delete dynamic Object
	
	 delete rgu;
	 delete FreeDesigner;
	 delete Customer;
	 delete adp;
	 delete sys;
	 delete probook;
	 delete Proproposal;
	 delete rep;
	 delete pay;
	 
	 return 0;
}
