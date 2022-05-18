#include"payment.h"
#include"ProjectProposal.h"
#include"ProjectBooking.h"

   class Report{
   	
   	 private:
   	 	 payment *pay1[5];
   	 	 ProjectProposal *pro1[5];
   	 	 ProjectBooking  *book1[5];
   	  
   	public:
   		Report();
   		Report(payment *pay1[],ProjectProposal *pro1[],ProjectBooking  *book1[]);
   		void  bookingDetail();
   		void  proposalDetail();
   		void  paymentDetail();
   		~Report
   };

