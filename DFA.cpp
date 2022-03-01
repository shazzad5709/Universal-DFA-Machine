#include<iostream>
using namespace std;

int main()
{
    cout<<"No. of states: ";
    int states;
    cin>>states;

    /*
    Consider the states as q0, q1 and so on
    and let q0 be the initial state

    Alphabet={0, 1}
    */

    cout<<"No. of final states: ";
    int fs;
    cin>>fs;

    cout<<"Final states are: ";
    int f[100];
    bool check[states]={false};
    for(int i=0; i<fs; i++)
    {
        cout<<"q";
        cin>>f[i];
        cout<<" ";
        check[f[i]]=true;
    }

    int tt[states][2];
    cout<<"-------------------------\n";
    cout<<"State Transitions: "<<endl;
    for(int i=0; i<states; i++)
    {
        cout<<"(q"<<i<<", 0)=q";
        cin>>tt[i][0];
        cout<<"(q"<<i<<", 1)=q";
        cin>>tt[i][1];
    }
    cout<<"-------------------------\n";

    int curst=0;
    string s;

    cout<<"Enter string: ";
    cin>>s;

    cout<<"-------------------------\n";
    cout<<"Transitions: ";
    for(int i=0; i<s.length(); i++)
    {
        cout<<"(q"<<curst<<", "<<s[i]<<")=";
        curst=tt[curst][s[i]-48];
        cout<<"q"<<curst<<endl;
    }

    cout<<"-------------------------\n";
    (check[curst])? cout<<"Accepted" : cout<<"Rejected";
}
