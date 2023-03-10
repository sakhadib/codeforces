//Sakhawat Adib
//mar 10, 2023   ||   IUT   ||    Bangladesh
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int w, h, n;
        int count = 1;
        cin >> w >> h >> n;
        for(int i=1; i<2*n; i++)
        {
            if(w%2 == 1 && h%2 == 1) 
            {
                
                break;
            }
            else
            {
                if(w%2==0)
                    w = w/2;
                if(h%2==0)
                    h = h/2;
                
                count++;
            }
            count++;

            if(count>=n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;


            //test
            cout << count << endl;

        }
    }

 
    return 0;
}