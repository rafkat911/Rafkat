#include<iostream>
using namespace std;

class base{
public:
    int x(){
    cout<<"This is class: base";
    return 0;
    }
};

class a: public base{

};

class b: public a{
};

int main()
{
    b obj_b;
    obj_b.x();
}
