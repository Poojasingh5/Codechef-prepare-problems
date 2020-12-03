#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1)
    {
    int n;
    cin >> n;
    if(n==0)
    break;
    else
    {
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    stack <int> s;

    int flag = 1;
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        while(!s.empty() && s.top() == flag)
        {

            flag++;
            s.pop();
        }
        if(a[i] == flag)
        {
            flag++;
        }
        else if(!s.empty() && a[i] > s.top())
        {
            check = 1;
            break;
        }
        else
        {
            s.push(a[i]);
        }
    }

    if(check == 0)
    {
        cout << "yes" << endl;
    } else
    {
        cout << "no" << endl;
    }
    }
    }

    return 0;

} 
