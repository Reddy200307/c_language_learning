 #include<stdio.h>
void main()
{
int a[5]={10,15,64,100,511};
int b[5],i,c=0;
for(i=0;i<5;i++){
int pos;
for(pos=31,c=0;pos>=0;pos--)
{
if(a[i]>>pos&1)
c++;
}
b[i]=c;
}
for(i=0;i<5;i++)
printf("%d ",b[i]);
}



