#include<iostream>
using namespace std;
class madhu
{   private:
    void read()
    {
        cout<<"read function"<<endl;
    }
    void write()
    {
        cout<<"write function"<<endl;
    }
    public:
     void start()
     {
       // cout<<"madhu sekhrar"<<endl;
        read();
        write();
       cout<<"madhu sekhrar"<<endl;
     }
    public:
};
int main()
{
    madhu man;
    man.start();

}