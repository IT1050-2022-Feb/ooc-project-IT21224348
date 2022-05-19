   
   
   
   
    #include"AdvertisingPackages.h"
    class Guestuser
   {
       protected:
          int GuserID;
          char Gusername[20];
          char Guseremail[20];
          int  Guserno;
        public:
          Guestuser();
          Guestuser(int UID, char Uname[], char Uemail[],int Ucno);
          void searchpackageDetail(AdvetisingPackages *uad);
          virtual void displayDetail();
         ~Guestuser();
   };




 
