#include <iostream>

using namespace std;

int main()
{
    int side1=1,side2=1,hypotenuse=1;
    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                if(side1+side2<hypotenuse&&side1+hypotenuse<side2&&side2+hypotenuse<side1)
                {
                    if((side1*side1+side2*side2==hypotenuse*hypotenuse)||(side2*side2+hypotenuse*hypotenuse==side1*side1)||(side1*side1+hypotenuse*hypotenuse==side2*side2))
                        cout<<side1<<'\t'<<side2<<'\t'<<hypotenuse<<endl;
                }
            }
        }
    }
}
