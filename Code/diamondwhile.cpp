#include<iostream>
using namespace std;

int main()
{
    int rows, n;
    cin>>rows;
    system("cls");

    n=(rows+1)/2;
    int k=0;

    /* initialization of 'i' similar to the for loop of program: version1 */
    int i = 0;
    while (i < rows) 
    {
        i<n?k++:k--;
        
        /* initialization of 'j' similar to the for loop of program: version1 */
        int j = 0;
        while (j <= rows)
        {

            if(j>=n+1-k && j<= n-1+k)
                cout<<"*";
            else
                cout<<" ";
             
             /* operation similar to the for loop of program: version1 */
             j++;
        }
        cout<<"\n";

        /* operation 'i' similar to the for loop of program: version1 */
        i++;
    }
    cout<<"\n\n";
    cout<<"Output diamond has " <<rows<<" number of rows";
    return 0;
}