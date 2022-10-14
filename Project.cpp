
#include <iostream>
using namespace std;
int main()
{
	float a, b, c,D; 
	cin >> a >> b >> c;
	D =b* b - 4 * a *c;
	if (D > 0) cout << 2;
	else if (D == 0) cout << 1;
	else cout << 0;
}
