#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> & v){
	for(int i=0;i<v.size();i++)
		cout<<" "<<v.at(i);
}

int main(){
	vector <int> v;
	cout<<"\nInitial size() = "<<v.size();
	cout<<"\nInitial capacity() = "<<v.capacity();
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	cout<<"\nAfter push_back() size() = "<<v.size();
	cout<<"\nAfter push_back() capacity() = "<<v.capacity();
	cout<<"\nDisplay vector elements after push_back() :";
	display(v);
	cout<<"\nFirst element of vector = "<<v.front();
	cout<<"\nLast element of vector = "<<v.back();

	vector<int>::iterator itr = v.begin();
	itr = itr + 5;
	v.insert(itr,60);
	cout<<"\n\nDisplay vector elements after insertion :";
	display(v);

	v.pop_back();
	cout<<"\n\nDisplay vector elements after pop_back() :";
	display(v);

	v.erase(v.begin()+2,v.begin()+4);
	cout<<"\n\nDisplay vector elements after erase() :";
	display(v);

	v.resize(10);
	cout<<"\n\nAfter resize() vector size = "<<v.size();

	v.clear();
	cout<<"\n\nAfter clear() function :";
	display(v);

	cout<<"\n\nIs vector empty = "<<v.empty();
	return 0;
}