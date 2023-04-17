#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int ai[t],pi[t];
    for(int i=0;i<t;i++)
    {
        cin>>ai[i]>>pi[i];
    }
    int cost=0,min;
    cost=ai[0]*pi[0];
    min=pi[0];
    for(int i=1;i<t;i++)
    {
        if(pi[i]<min)
        {
            min=pi[i];
           cost=cost+ai[i]*pi[i]; 
        }
        else
        {
            cost=cost+ai[i]*min;
        }
    }
    cout<<cost;
    return 0;
}
