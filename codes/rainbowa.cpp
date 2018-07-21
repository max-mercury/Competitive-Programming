#include <iostream>
using namespace std;

int main()
{
    int t,n,i,count1,count11,count2,count22,count3,count33,count4,count44,count5,count55,count6,count66;
    bool ans1,ans2,ans3,ans4,ans5,ans6,ansmid;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        ans1 = ans2 = ans3 = ans4 = ans5 = ans6 = false;
        ansmid=false;
        int a[n];
        count1 = 0; count11 = 0;
        count2 = 0; count22 = 0;
        count3 = 0; count33 = 0;
        count4 = 0; count44 = 0;
        count5 = 0; count55 = 0;
        count6 = 0; count66 = 0;
        
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        
        for(i=0;i<n/2;i++)
        {
            if (a[i]==1) count1++;
            else if (a[i]==2) count2++;
            else if (a[i]==3) count3++;
            else if (a[i]==4) count4++;
            else if (a[i]==5) count5++;
            else if (a[i]==6) count6++;
        }
        for(i=(n/2+1);i<n;i++)
        {
            if (a[i]==1) count11++;
            else if (a[i]==2) count22++;
            else if (a[i]==3) count33++;
            else if (a[i]==4) count44++;
            else if (a[i]==5) count55++;
            else if (a[i]==6) count66++;
        }
        
        if(count1 == count11) ans1 = true;
        else ans1 = false;
        if(count2 == count22) ans2 = true;
        else ans2 = false;
        if(count3 == count33) ans3 = true;
        else ans3 = false;
        if(count4 == count44) ans4 = true;
        else ans4 = false;
        if(count5 == count55) ans5 = true;
        else ans5 = false;
        if(count6 == count66) ans6 = true;
        else ans6 = false;
            
        if(a[n/2]==7)
        {ansmid = true;}
        else{ansmid=false;}
        
        if(ans1 && ansmid && ans2 && ans3 && ans4 && ans5 && ans6)
        {
            cout << "yes"<< endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    cin.get();
    cin.get();
    return 0;
    
    }
