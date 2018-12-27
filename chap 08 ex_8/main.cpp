

   (a)unsigned int values[SIZE]={2,4,6,8,10};
   (b)unsigned int *vPtr;
   (c)for(size_t i=0;i<values.size();++i)
   cout<<values[i]<<endl;
   (d)vPtr=values;
      vPtr=&values[0];
   (e)for(size_t j=0;j<values.size();++j)
      cout<<*(vPtr+j)<<endl;
   (f)for(size_t k=o;k<values.size;++k)
      cout<<*(values+k)<<endl;
   (g)for(size_t m=o;m<values.size;++m)
      cout<<vPtr[m]<<endl;
   (h)values[4];
      *(values+4)
      vptr[4];
      *(vPtr+4);
   (i)1002500+2*2;
      values[2]
   (j)values[4]µÄµØÖ·Îª1002500+4*2=1002508;
      1002508-2*4=1002500;
      values[0];


