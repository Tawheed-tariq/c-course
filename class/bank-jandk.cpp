#include<iostream>
#include<string>
#include<math.h>
using  namespace std;
class account
{  
    string customername;
    string accountno;
    string typeofaccount;
 
    public:
    int balance; 
    int deposit;
    void getcustomername();
    void getaccno();
    void gettypeofacc();
    void getbalance();
    void getdeposit();
    void displaybalance();
};

void account :: getcustomername(void){
        cout<<"customer name:"<<endl;
        cin>>customername;
    }
    void account :: getaccno(void)
    {
        cout<<"acc no is:"<<endl;
        cin>>accountno;
    }
    void account :: gettypeofacc(void)
    {
        cout<<"type of acc is:"<<endl;
        cin>>typeofaccount;
    }
    void account :: getbalance(void)
    {
        cout<<"balance in acc before withdrw is:"<<endl;
    cin>>balance;
    }
    void account :: getdeposit(void)
    {

        cout<<"amount to be deposited is:"<<endl;
        cin>>deposit;
        balance=balance+deposit;
        cout<<"balance after depost is:"<<endl<<balance;
        
    }
    void account :: displaybalance(void)
    {

        cout<<"balance is:"<<endl<<balance;
    }
class sav_acct:public account
{
    float compoundinterest;
    int withdrawal;
    public:
    void getcompint();
    void getwithdrw();
};
    void sav_acct :: getcompint(void)
    { float p;
    float r;
    float n;
    float t;
    cout<<"prinicpal int is:"<<endl;
    cin>>p;
    cout<<"rate"<<endl;
    cin>>r;
    cout<<"no of times applied"<<endl;
    cin>>n;
    cout<<"no of time periods"<<endl;
    cin>>t;
    compoundinterest=p*pow((1+r/n),n*t);
      cout<<"compound interest is:"<<endl<<compoundinterest;   
       }
       void sav_acct :: getwithdrw(void)
       {
         cout<<"amount withdrawn is:"<<endl;
         cin>>withdrawal;
            balance=balance-withdrawal;
         cout<<"remaining balance is:"<<endl<<balance;
       }

class cur_acct:public account{
 int penalty;
    int minimumbalance;
    public:
    void getminbalance();
};
    void cur_acct:: getminbalance(void)
    {  cout<<balance<<endl;
        cout<<"minimum balance should be 1000"<<endl;
        if(balance<minimumbalance)
        {
            cout<<"penalty imposed:"<<endl;
            cin>>penalty;
            balance=balance-penalty;
            
        }
        else{
            cout<<"no penalty"<<endl;

        }
        
    }



int main()
{
  sav_acct acc1;
  acc1.getcustomername();
  acc1.getaccno();
  acc1.gettypeofacc();
  acc1.getbalance();
  acc1.getdeposit();
  acc1.displaybalance();
  acc1.getcompint();
  acc1.getwithdrw();
  acc1.displaybalance();
  cur_acct acc2;
  acc2.getminbalance();
  acc1.displaybalance();
  return 0;
}