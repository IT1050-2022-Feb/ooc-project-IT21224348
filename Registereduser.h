

       #include "Guestuser.h"

       class Registereduser : public Guestuser
        {
            protected:
               char Regusername[20];
               char Regpassword[20];
       
       
            public:
               Registereduser();
               Registereduser(char reuname, char reupassword,int UID, char Uname[], char Uemail[],int Ucno);
               void login();
               void logout();
               void inspectloginDetail();
               void displayDetail(SystemDeveloper *sys8);
               ~Registereduser();
  
        };




