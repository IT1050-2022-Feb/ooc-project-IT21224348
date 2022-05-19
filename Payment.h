
      class payment{
      	
      	 private:
      	 	 int paymentinvoice;
      	 	 double paymentamount;
      	 	 int  withdrawinvoice;
      	 	 double withdrawamount;
      	 	 char paymenttype;
      	 	 char withdrawtype;
      	  
      	public:
      		payment();
      		payment(int pinv, double pamount,int winv, double wamount, char ptype, char wtyp);
      		void checkpayment();
			void checkWithdraw();
			void confirmpayment();
			void confirmwithdraw();
			~payment();  
	  };
