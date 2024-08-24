#include<iostream>
using namespace std;
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<" the constructor is called for object number "<<count<<endl;
        }
        ~num(){
            cout<<" desstructor is called for object number "<<count<<endl; 
            count--;
        }

};
int main(){
num n1;
{
    cout<<"entering this block"<<endl;
    cout<<"creating two more objects "<<endl;
    num n2,n3;
    cout<<"exiting this block"<<endl;
}
cout<<"back to main"<<endl;
    return 0;
}