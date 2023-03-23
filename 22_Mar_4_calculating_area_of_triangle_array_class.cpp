#include<iostream>
#include<cmath>
using namespace std;

class traiagle{
    public:
    floar a,b,c;
    void area(){
        double s=(a+b+c)/2;
        cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    }
};
