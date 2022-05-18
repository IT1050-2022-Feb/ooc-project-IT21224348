#include"Guestuser.h"
#include<cstring>

Guestuser::Guestuser()
{
  GuserID=000;
  strcpy(Gusername,"");
  strcpy(Guseremail,"");
  Guserno=0000000000;
}
Guestuser::Guestuser(int UID, char Uname[], char Uemail[],int Ucno)
{
    GuserID=UID;
    strcpy(Gusername,Uname);
    strcpy(Guseremail,Uemail);
    Guserno=Ucno;
}
void Guestuser::searchpackageDetail(AdvetisementPackage *uad)
{

}
void Guestuser::displayDetail()
{
  
}
Guestuser::~Guestuser()
{
  
}
