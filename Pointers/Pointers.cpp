#include <iostream>
using namespace std;

void function(int height,int width,int *pS,int *pP)
{
    *pS = height * width;
    *pP = (height + width) * 2;
}

int main()
{
    int a = 5;
    int b = 10;
    int c;
    int d;
    function(a, b, &c, &d);
    cout << function << "\n";
        

}

