/*
KULDEEP NATH
19HCS4029
TO PRINT TOTAL NUMBER OF PERMUTATION
*/
#include<iostream>
using namespace std;

int x=1;

void permute(char c[] , int indx, int l)
{
    if(l==indx+1)
    {
    	cout<<x++<<": "<<c<<endl;
	}
    else
    {
        for(int i=indx;i<l;i++)
        {
            swap(c[indx],c[i]);
            permute(c,indx+1,l);
            swap(c[indx],c[i]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    char *ch = new char[n+1];
    char a = 'a';
    ch[n+1]='\0';
    
    for(int i=0;i<n;i++)
        ch[i]=a++;
    
    if(n<=0)
    {
        cout<<"Invalid No of characters .....!!!!";
    }
    
    else if(n>1)
    {
        cout<<"Total no of permutations : \n";
        permute(ch,0,n);
    }

    return 0;
}
