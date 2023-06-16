#include <iostream>
using namespace std;

int main()
{
    for (int date = 1; date<=30; date++)
    {
        int pocketmoney = 3000;
        if (date%2==0)
        {
            continue; //skip to the next iteration of the loop
        }
        if (pocketmoney == 0)
        {
            break; //terminate the loop
        }
        cout<<"Go out today!"<<endl;
        pocketmoney = pocketmoney-300;
    }
    return 0;
}