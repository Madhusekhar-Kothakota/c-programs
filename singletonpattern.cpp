#include<iostream>
using namespace std;
class singleton
{
    private:
    static singleton* instance;
    singleton()
    {
        cout<<"constructor called"<<endl;
    }
    public:
    static singleton* getinstance()
    {
        if(instance==nullptr)
        {
            instance=new singleton();
        }
        return instance;
    }
};
singleton* singleton::instance=nullptr;
int main()
{
    singleton* s1=singleton::getinstance();
    singleton* s2=singleton::getinstance();
    if(s1==s2)
    {
        cout<<"same instance"<<endl;
    }
    else
    {
        cout<<"different instance"<<endl;
    }
}