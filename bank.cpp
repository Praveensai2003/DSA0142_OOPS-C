#include <iostream>
using namespace std;
class RBI{
 public:
 	int lendingrate;
  RBI()
  {
   cout<<"\nThis is the central bank for india"<<endl;
   lendingrate=5;
  }
};

class customer{
 public:
 	int customerno;
 	string name;
  
};
class account{
 public:
 	int accountno;
  account()
  {
   //cout<<"The account no is \t"<<endl;
  }
};
class SBI:public RBI,public customer,public account
{
 public:
  SBI(int custno,int accno, string nme)
  {
   cout<<"This is SBI Bank"<<endl;
   cout<<"The lending rate given to SBI bank is \t"<<lendingrate;
   customerno=custno;
   name=nme;
   accountno=accno;
   cout<<"\nThe customer details of SBI bank";
   cout<<"\ncustomerno is \t"<<customerno;
   cout<<"\naccno is \t"<<accno;
   cout<<"\nname is \t"<<nme;
  }
};

class ICICI:public RBI,public customer,public account
{
 public:
   ICICI(int custno,int accno, string nme)
  {
   cout<<"This is ICICIBank"<<endl;
cout<<"The lending rate given to ICICI bank is \t"<<lendingrate;
   customerno=custno;
   name=nme;
   accountno=accno;
   cout<<"\nThe customer details of ICICI bank";
   cout<<"\ncustomerno is \t"<<customerno;
   cout<<"\naccno is \t"<<accno;
   cout<<"\nname is \t"<<nme;
  }
};
class PNB:public RBI,public customer,public account
{
 public:
   PNB(int custno,int accno, string nme)
  {
   cout<<"This is PNB Bank"<<endl;
   cout<<"The lending rate given to PNB bank is \t"<<lendingrate;
   customerno=custno;
   name=nme;
   accountno=accno;
   cout<<"\nThe customer details of PNB bank";
   cout<<"\ncustomerno is \t"<<customerno;
   cout<<"\naccno is \t"<<accno;
   cout<<"\nname is \t"<<nme;
  }
};


int main()
{
SBI sbi(123,456,"Ajay");
ICICI icici(5667,8900,"Smith");
PNB pnb(7890,6545,"Jadeja");
}
