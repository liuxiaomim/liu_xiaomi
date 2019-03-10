#include <iostream>

#include <string>
class Matrix
{
private:
      int a[2][2];
public:
      Matrix(int b[2][2]);
      Matrix operator+(Matrix c);
      Matrix operator-(Matrix c);
      Matrix operator*(Matrix c);
      Matrix operator=(Matrix c);
      Matrix operator+=(Matrix c);
      void Show();
};

 Matrix::Matrix(int b[2][2])
{
     for(int i=0;i<2;i++)
     for(int j=0;j<2;j++)
     a[i][j]=b[i][j];
}

 Matrix Matrix::operator+(Matrix c)
{
       int ar[2][2];
       for(int i=0;i<2;i++)
       for(int j=0;j<2;j++)
       ar[i][j]=a[i][j]+c.a[i][j];
       return Matrix(ar);
}

 Matrix Matrix::operator-(Matrix c)
   {
   int ar[2][2];
   for(int i=0;i<2;i++)
   for(int j=0;j<2;j++)
   ar[i][j]=a[i][j]-c.a[i][j];
   return Matrix(ar);
   }



 Matrix Matrix::operator*(Matrix c)
 {
        int ar[2][2];
        int t;
        for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
               {
                   ar[i][j]=0;
                   for(t=0;t<2;t++)
                   ar[i][j]=ar[i][j]+a[i][t]*c.a[t][j];
               }

        return Matrix(ar);
 }

 Matrix Matrix::operator=(Matrix c)
   {
        int ar[2][2];
        for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        a[i][j]=c.a[i][j];

   }

 Matrix Matrix::operator+=(Matrix c)

 {
      int i,j;
      for(i = 0;i < 2;i++)
           {
                for(j = 0;j < 2;j++)
                a[i][j]+=c.a[i][j];
           }


}


 void Matrix::Show()
 {
        int i,j;
        for(int i=0;i<2;i++)
              {
                    for(int j=0;j<2;j++)
                    cout<<a[i][j]<<" ";
                    cout<<endl;
              }
}


   void main()
   {
        int ar1[2][2]={{1,2},{3,4}};
        int ar2[2][2]={{2,3},{4,5}};
        int ar3[2][2];


       Matrix b1(ar1),b2(ar2),b3(ar3);
       cout<<"b1 is :"<<endl;
       b1.Show();
       cout<<"b2 is :"<<endl;
       b2.Show();
       b3=b1+b2;
       cout<<"b3add is :"<<endl;
       b3.Show();
       b3=b1-b2;
       cout<<"b3sub is :"<<endl;
       b3.Show();
       b3=b1*b2;
       cout<<"b3mul is :"<<endl;
       b3.Show();
       b3=b1;
       cout<<"b3fu is :"<<endl;
       b3.Show();
       b1+=b2;
       cout<<"b1jiad is :"<<endl;
       b1.Show();
   }



