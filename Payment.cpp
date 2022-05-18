#include"Payment.h"

    payment::payment()
    {
    	paymentinvoice=000;
    	paymentamount=0.00;
      	withdrawinvoice=000;
        withdrawamount=0.00;
        strcpy(paymenttype," ");
      	strcpy(paymenttype,"");
	}
	payment::payment(int pinv, double pamount,int winv, double wamount, char ptype, char wtyp)
	{
		paymentinvoice=pinv;
    	paymentamount=pamount;
      	withdrawinvoice=winv;
        withdrawamount=wamount;
        strcpy(paymenttype,ptype);
      	strcpy(withdrawtype,wtyp);	
	}
	void payment::checkpayment()
	{
		
	}
	void payment::confirmpayment()
	{
		
	}
	void payment::checkWithdraw()
	{
		
	}
	void payment::confirmwithdraw()
	{
		
	}
	payment::~payment()
	{
		
	}