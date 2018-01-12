#include<iostream>
using namespace std;

int main()
{
	string text1,text2;
	int n,count;
	cout<<"Enter the second text:";
	cin >> text1;
	cout<< "\nEnter the second text:";
	cin >> text2;
    cout<< "Enter n:";
	cin >> n;
	while(count<n){
		if(count%2==0){
			cout << text1 <<" ";
		}
		else{
			cout << text2 << " ";
		}
		count=count+1;	
	}
	return 0;
}
