#include<iostream>
#include<cmath>
using namespace std;
class triangle{
public:
    double s1, s2, s3;
        double S=((s1+s2+s3)/2);
        cout<<sqrt(S*(S-s1)*(S-s2)*(S-s3));
};

int main(){
    triangle t;
    cin>>t.a>>t.b>>t.c;
    t.area();
}
