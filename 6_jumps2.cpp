//print all no. from 0 to 99 except which is divisible by 3 
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<100; i++)
    {
        if (i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}