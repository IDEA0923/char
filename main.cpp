#include <iostream>
using namespace std;
string a;
int main() {
	cout<<"input your chars:";
	cin>>a;
	int b = a.size();
	for(int c = 0;c<b;c++){
		cout<<a[c]<<" = "<<(int)a[c]<<endl;
	}
	return 0;
}