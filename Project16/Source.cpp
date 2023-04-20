#include <iostream>
using namespace std;

int main()
{
	int n;
	
	int cont = 0;
	cin >> n;
	for ( int i = 0; i < n; i++)
	{
		
		int p,v,t;
		cin >> p;
		cin >> v;
		cin >> t;
		int res = p + v + t;
		if (res >= 2)
			cont++;


	}
	cout <<cont<<endl ;
	



}
