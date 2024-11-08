#include<iostream>
using namespace std;
int main(){

	int i=0;
	string statement;

	getline(cin,statement);
	cout<<"The statement was:"<<statement<<endl;

	int n = statement.length();

	string result="";


	while(i<n){
		char ch = statement[i];

		if(ch=='=' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch==';'){
			if(!result.empty()){
				cout<<result<<endl;
				result="";
			}
			cout<<ch<<endl;
			
		}else if(ch!=' '){
			result+=ch;
		}

		i++;
	}

	if(!result.empty()){
		cout<<result<<endl;
	}

	return 0;
}