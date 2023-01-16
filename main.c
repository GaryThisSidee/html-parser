#include <stdio.h>

void parser(char a[], int b){
     int j=0;
     for(int i=0;i<b;i++)
     {
          if(a[i]=='<')
          {
               j+=1;
          }else if( a[i]=='>')
          {
               i++;
               j++;
          }else if(a[i]==' ' && a[i+1]=='<')
          {
               break;
          }else if(j>=2)
          {
               printf("%c",a[i]);
          }
     }
}
int main()
{     
    char string[]="<p> this is a heading </p>";
    int size=(sizeof(string)/sizeof(string[0]));
    parser(string,size);
    return 0;
}
