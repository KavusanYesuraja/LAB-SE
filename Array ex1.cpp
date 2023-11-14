#include <iostream>
using namespace std;

int main()
{
	
int myArray[5];

for(int i = 0; i < 5; i++)
{
	cout << "Enter a number: ";
	cin >> myArray[i];

}

for (int i = 4; i >= 0; i--)
{
	cout << myArray[i];
}

return 0;

}
