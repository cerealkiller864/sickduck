#include <iostream>
using namespace std;
#define MAX 300

int random(int min, int max)
{
    int range = max - min + 1;
    return rand() % range + min;
}

int main()
{
    int arr[MAX];
    int N;
    cout << "Nhap N: ";
    cin >> N;

    for (int i=0; i<N; i++)
    {
        arr[i] = random(-15, 15);
    }

    int odd_sum = 0;
    int max = -16;
    cout << "Mang: ";
    for (int i=0; i<N; i++)
    {
        cout << arr[i] << ' ';
        if (arr[i] % 2 != 0)
            odd_sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "\nTong cac phan tu la so le = " << odd_sum << endl;
    cout << "Phan tu lon nhat trong mang = " << max <<  endl;

    // sap xep mang theo thu tu tang dan
	for(int i=0; i<N-1; i++)
	{		
		for(int j=i+1;j<N; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

    cout << "Mang da sap xep: ";
    for (int i=0; i<N; i++)
    {
        cout << arr[i] << ' ';
    }
    
    return 0;
}