#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue <double> pq;
	cout<<"Pushing elements to priority_queue....";	
	pq.push(13.2);
	pq.push(9.8);
	pq.push(10.4);

	cout<<"\n\nPopping elements from priority_queue : ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}