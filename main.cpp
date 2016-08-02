#include <iostream>
#include <cmath>
using namespace std;


//double f(double x)
//{
//    double y= D/(d*16)
//    return y;
//}
int main()
{
    double D, d, f;
    start://the program will com back here

    cout<< " please enter D in inches:"<<endl;
    cin>> D;
    if (D<=0)
       {
        cout << " enter D bigger than 0"<< endl;
        goto start;
       }
        start2://the program will com back here
    cout<< " please enter d in inches:"<<endl;
    cin>> d;
    if (d<=0)
    {
        cout <<" d can not be 0 or less. Please enter a different number:"<<endl;
        goto start2;// the program will send you back to enter the D or D correctly

    }
    f=D*D/(16*d);

cout<< "the focal distance is:"<< f <<endl;

    return 0;
}
