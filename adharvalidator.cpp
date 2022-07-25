#include<iostream>
using namespace std;
int main()
{
    string s;
    int c=0;
    
    cout<<"enter your aadhaar card number"<<endl;
    //enter aadhaar number
    cin>>s;
    //checking is it 12digit or not
    if(s.length()!=12)
    {
        cout<<"invalid aadhaar card number"<<endl;;
        return 0;
    }
    
    else
    {
        // the first letter should not start with o or 1
        if(s[0]=='0' || s[0]=='1')
        {
        cout<<"invalid aadhaar card number"<<endl;;
        return 0;
        }
        
    else
    {
        for(int i=0;i<12;i++)
        {
            if((s[i]-'0')<10 && (s[i]-'0')>=0) // checks if value is number or not
            {
                c++;
            }
        }
    }
        
    }
    if(c==12)
    cout<<"valid aadhaar number";
    
    else
    cout<<"invalid aadhaar number";
    
  return 0;
}
