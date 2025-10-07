#include<stdio.h>
   void main()
   {
           int a[5]={11,55,88,22,44};
           int ele,i,j,t;
   int *p=a;
           for(i=0;i<5;i++)
           {
                   for(j=i+1;j<5;j++)
                  {
                          if(p[i]<p[j])
                         {
                                  t=p[i];
                                  p[i]=p[j];
                                  p[j]=t;
                          }
                    }
             }
 
                          for(i=0;i<5;i++)
                                  printf("%d ",p[i]);
  printf("\n");
 }
