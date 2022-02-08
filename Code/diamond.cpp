#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int rows, n;
    cin>>rows;
    system("cls");

    n=(rows+1)/2;
    int k=0;
    for (int i = 0; i < rows; i++) 
    {
        i<n?k++:k--;
        for (int j = 0; j <= rows; j++)
        {
            if(j>=n+1-k && j<= n-1+k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    cout<<"Output diamond has " <<rows<<" number of rows";
    return 0;
}