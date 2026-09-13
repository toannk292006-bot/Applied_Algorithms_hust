#include<iostream>
#include<math.h>
using namespace std;
// length , size
// dau + de noi chuoi
//int main(){
//	string a,b;
//	getline(cin,a);
//	getline(cin,b);
//	cout<< a+b<< endl;
//	a += b;
//	cout<< a<<endl;
//	cout<< a.length() <<endl ;
//	
//	return 0;
//} 
//int main(){
//	string a = "Abc";
//	string b = "def";
//	if(a>b){
//		cout << "a lon hon b\n";
//	}
//	else if( a == b){
//		cout << " a bang b\n";
//	}
//	else {
//		cout <<" a nho hon b\n";
//	}
//	string c = "abc";
//	string d = "def";
//	cout << d.compare(c) <<endl;
//}
// sub str  
// stoi
int main(){
	string a = "abcdef";
	string b = a.substr(2,3);
	cout << b << endl;
	string c = "1234563982498";
	string d = "32943";
	
	long long x = stoll(c);
	int y = stoi(d);
	cout << x <<"\n"<< y << endl;
	int n = 123456;
	string s = to_string(n);
	float f = 12.3432;
	string k = to_string(f);
	cout << s <<" \n"<< k << endl;
}
