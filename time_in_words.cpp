#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void converter(int t)
{
    switch (t){
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        case 10:
            cout << "ten ";
            break;
        case 11:
            cout << "eleven ";
            break;
        case 12:
            cout << "twelve ";
            break;
        case 13:
            cout << "thirteen ";
            break;
        case 14:
            cout << "fourteen ";
            break;
        case 15:
            cout << "quarter ";
            break;
        case 16:
            cout << "sixteen ";
            break;
        case 17:
            cout << "seventeen ";
            break;
        case 18:
            cout << "eighteen ";
            break;
        case 19:
            cout << "nineteen ";
            break;
        case 20:
            cout << "twenty ";
            break;
        case 30:
            cout << "half ";
            break;
    }
    return;
}

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;

    if (m==0)
    {
        converter(h);
        cout<<"o' clock"<<endl;
    }
    else if (m<=20)
    {
        converter(m);
        if (m==1)
            cout << "minute past ";
        else
            cout << ((m==15)?"past ":"minutes past ");
        converter (h);
        cout<<endl;
    }
    else if (m<=30)
    {
        int tens=m-(m%10);
        int ones=m%10;
        converter(tens);
        if (ones)
            converter(ones);
        cout << ((m==30)?"past ":"minutes past ");
        converter (h);
        cout<<endl;
    }
    else if (m<40)
    {
        m=60-m;
        int tens=m-(m%10);
        int ones=m%10;
        converter(tens);
        if (ones)
            converter(ones);
        cout << ((m==30)?"to ":"minutes to ");
        converter ((h==12)?1:h+1);
        cout<<endl;
    }
    else if (m<60)
    {
        m=60-m;
        converter(m);
        if (m==1)
            cout<< "minute to";
        else
            cout << ((m==15)?"to ":"minutes to ");
        converter ((h==12)?1:h+1);
        cout<<endl;
    }

    return 0;
}

