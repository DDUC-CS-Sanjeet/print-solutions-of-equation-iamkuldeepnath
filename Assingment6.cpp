/*
KULDEEP NATH
19HCS4029
TO PRINT SOLUTION OF EQUATION
*/
#include<iostream>
using namespace std;

void solution(int arr[],int st,int ls,int sum)
{
	// arr is the array that will store the solutions
	//st is the start index
	//ls is the last index
	//sum will have the sum of variables
	
	if(st>ls) 			//Will print the solutions
	{		
		if(sum==0)
		{
			for(int i=0;i<=ls;i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}
	}
	else          //Will provide solutions in the array
	{
		for(arr[st]=sum;arr[st]>=0;arr[st]--) 
			solution(arr,st+1,ls,sum-arr[st]);
	}
}
	
int main()
	{
		int sum,len;
		cout<<"->Enter no of variables : ";
		cin>>len;
		cout<<"->Enter the sum : ";
		cin>>sum;
		
		int * arr = new int[len];
		
		cout<<"\n=>Total no of possible combinations : \n";
		solution(arr,0,len-1,sum);
		return 0;
	}
    
