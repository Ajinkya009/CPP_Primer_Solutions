#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> ivec(10);
	vector<int>::size_type ix;
	for(ix=0;ix!=ivec.size();++ix){
		cin >> ivec[ix];
	}
	cout << "Ivec size is: " << ivec.size() << "\n";
	for(ix=0;ix!=ivec.size();++ix){
		if(ivec[ix]<ivec.size()){
			cout<< ivec[ix]+ivec[ix+1] << '\n';
		}
	}
}