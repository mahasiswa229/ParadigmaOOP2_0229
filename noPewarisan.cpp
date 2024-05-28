#include <iostream>
using namespace std;

class baseClass final
{
    public:
    virtual void perkenalan()
    {
        cout << "Halo saya function dari base class" ;
    }
};

class deriviedClass : public baseClass
{
    void perkenalan()
    {
        cout << "Halo saya function dari derivied class" ;
    }
};

int main()
{
    deriviedClass a;
    a.perkenalan();

    return 0;
}