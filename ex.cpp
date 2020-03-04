#include<iostream>
using namespace std;

int exFunction(){
	char sen;
	cout<<"Enter a sentence  :";
	cin>>sen;
	for (int i=0; i<sen.length(); i++)
		cout<<sen<<endl;
	
	return 0;
}


int main(){
	exFunction();
	return 0;
}
