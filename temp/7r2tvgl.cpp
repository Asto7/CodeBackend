#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	for(int i=0;i<t;i++){
	    cin>>s;
	 int c=0;
	 for(int j=0;j<s.length();j++){  

	char a=s[j];int ii=1;
	for(int k=j+1;k<s.length();k++){
	    if(a==s[k])
	    ii++;
	    else break;
	}
	if(ii>1){
	    s.erase(j,ii);
	    j=-1;
	}
}

cout<<s<<endl;	    
	}

	return 0;
}