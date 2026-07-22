#include<iostream>
using namespace std;

class sunkanna
{
    private:
    int x,y;
    public:
    void father()
    {
        cout<<"NANNA"<<endl;
    }
};
class sekhar:public sunkanna
{
    public:
    int a,b;
    void son()
    {
        cout<<"koduku"<<endl;
    }
};
int main()
{
    sekhar man;
    man.son();
   man.father();
   cout<<sizeof(man)<<endl;
   cout<<sizeof(sunkanna)<<endl;
   cout<<sizeof(sekhar)<<endl;
}