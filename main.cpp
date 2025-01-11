#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    A(int a)
    {
        this->a=a;
    }
    void display();
};

void A ::display()
{
    cout<<"\n A="<<a;
}

class B
{
protected:
    int b;
public:
    B (int b)
    {
        this->b=b;
    }
    void putdata();
};
void B ::putdata()
{
    cout<<"\n b="<<b;
}

class C : public A, public B
{
    int c;
public:
    C( int a, int b, int c ):A(a),B(b)
    {
        this->c=c;
    }

    void show()
    {
        cout<<"\n C="<<c;
    }
};



int main()
{
C aa(98,87,89);
aa.display();
aa.putdata();
aa.show();

}
