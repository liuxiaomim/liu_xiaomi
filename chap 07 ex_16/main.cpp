#include<iostream>

#include<array>

using namespace std;

int main()
{
    array<int,6>numbers={1,2,3,4,5,6}

    for(i=0;i<6;++i)

    {
        for(j=0;j<6;++j)

           sum= numbers[i]+numbers[j];
        cout<<sum<<endl;
    }
}
