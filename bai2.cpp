#include <iostream>

using namespace std;

int main()
{
    int Thu;
    cout << "Nhap thu: ";

    cin >> Thu;
    while (Thu < 2 || Thu > 7)
    {
        cout << "Thu khong hop le, hay nhap lai: ";
        cin >> Thu;
    }

    switch(Thu)
    {
        case 2:
        case 4:
            cout << "Phuong tien: xe dap";
            break;
        case 3:
        case 5:
        case 7:
            cout << "Phuong tien: xe oto";
            break;
        default:
            cout << "Phuong tien: xe may";
            break;
    }

    return 0;
}