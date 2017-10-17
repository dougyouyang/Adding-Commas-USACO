//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    char newn[20];
    long long n;
    int i=0, s=0;
    
    cin >> n;
    
    while(n)
    {
        newn[s++]='0'+n%10;
        n/=10, i++;
        if(i==3 && n)
            newn[s++]=',', i=0;
    }
    
    for(i=s-1;i>=0;i--)
        cout << newn[i];
    cout << endl;
    
    return 0;
}
