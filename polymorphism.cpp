#include<iostream>
using namespace std;
class employee1
{
    public:
   virtual void display()
    {
        cout << "This is employee1 class" << endl;
    }

};
class employee2 : public employee1
{
    public:
    void display()
    {
        cout << "This is employee2 class" << endl;
    }
};
int main()
{
    employee1 *emp1;
    employee2 emp2;
    emp1 = &emp2;
    emp1->display();
    return 0;
}