#include "Registereduser.h"
#include<cstring>

Registereduser()
{
   strcpy(Regusername,"");
   strcpy(Regpassword,"");
}
 Registereduser(char reuname, char reupassword,int UID, char Uname[], char Uemail[],int Ucno): Guestuser(UID, 
                                             Uname, Uemail,Ucno)
{
    strcpy(Regusername,reuname);
    strcoy(Regpassword,reupassword);
}
void Registereduser::login()
{
  
}
void Registereduser::logout()
{
  
}
void Registereduser::inspectloginDetail()
{
  
}
void Registereduser::displayDetail()
{
  
}
Registereduser::~Registereduser()
{
  
}
