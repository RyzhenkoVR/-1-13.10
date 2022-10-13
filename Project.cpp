
#include <iostream>
using namespace std;
int main()
{
	float a, b, c,v; 
	cin >> a >> b >> c;
	v =b* b - 4 * a *c;
	if (v > 0) cout << 2;
	else if (v == 0) cout << 1;
	else cout << 0;
}
