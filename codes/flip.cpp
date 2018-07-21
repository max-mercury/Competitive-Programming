#include <iostream>
#include <string>

using namespace std;


int main ()
{
    char mystr[2000],onesComp[2000];
    char cmpr[2000];
    int len,l,a=48;
    int count =1,size=0,clen,cl;
    cin >> mystr;
    len = strlen(mystr);
    l=len;
    for (int k =0;k<len;k++)
    {cmpr[k]=char(a);}
    for(int i=0; i<len; i++)
        {
            if(mystr[i] == '1')
            {
                onesComp[i] = '0';
            }
            else if(mystr[i] == '0')
            {
                onesComp[i] = '1';
            }
        }
    onesComp[len] = '\0';
    clen = strlen(onesComp);
    cl=clen; 
    while (size < len){
        if(onesComp != cmpr)
        {
            if(onesComp[clen-1]=='0')
            {
                onesComp[cl-1]='0';
                cl--;
                mystr == onesComp;
                 for(int i=0; i<strlen(mystr); i++)
                {
                if(mystr[i] == '1')
                {
                    onesComp[i] = '0';
                }
                else if(mystr[i] == '0')
                {
                    onesComp[i] = '1';
                }
                }
            }
            count++;
        }
        else
        {
            break;
        }
        size++;
    }
    cout << onesComp<<endl;
    cout<< count;
cin.get();
cin.get();
return 0;
}
