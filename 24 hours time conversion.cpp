#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
    //09:09:08PM
    int hour=stoi(s.substr(0,2));
    string sub_s=s.substr(2,6);
    string res;
    if(s[8]=='P'&&hour>=1&&hour<=11)
    {
        hour+=12;
        string hr=to_string(hour);
        res=hr+sub_s;
        return res;
    }
    else if(s[8]=='A'&&hour==12)
    {
        string hr="00";
        res=hr+sub_s;
        return res;
    }
    else if(s[8]=='P'&&hour==12)
    {
        string hr=to_string(hour);
        res=hr+sub_s;
        return res;
    }
    else{
        res=s.substr(0,8);
        return res;
    }
}
int main()
{
    string str;
    getline(cin,str);
    string result=timeConversion(str);
    cout<<result;
    return 0;
}
