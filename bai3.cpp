#include <iostream>

using namespace std;

struct CongNhan
{
	char Ten;
	int Tuoi;
};

int main()
{
	CongNhan arr[5];
	arr[0].Ten = 'A';
	cout << "Tuoi cua A = ";
	cin >> arr[0].Tuoi;
	
	arr[1].Ten = 'B';
	cout << "Tuoi cua B = ";
	cin >> arr[1].Tuoi;
	
	arr[2].Ten = 'C';
	cout << "Tuoi cua C = ";
	cin >> arr[2].Tuoi;

	arr[3].Ten = 'D';
	cout << "Tuoi cua D = ";
	cin >> arr[3].Tuoi;

	arr[4].Ten = 'E';
	cout << "Tuoi cua E = ";
	cin >> arr[4].Tuoi;

	for (int i=0; i<4; i++)
	{
		for (int j=i+1; j<5; j++)
		{
			if (arr[i].Tuoi > arr[j].Tuoi)
			{
				CongNhan temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i=1; i<=5; i++)
	{
		cout << "Thu " << i+1 << ": " << arr[i-1].Ten << endl;
	}
}
