#include <iostream>
using namespace std;

int main() {
    const int xpq = 150;
    int xpmax = 1000;
    int LV = 1;
    int XPN = 0;
    cout << "CAP HIEN TAI CUA BAN LA: " << LV << endl;
    cout << "KINH NGHIEM HIEN TAI: " << XPN << endl;
    int soluongquai;

    while (true){
        cout << "nhap so luong quai ";
        cin >> soluongquai;
        if (soluongquai == 0){
            break;
        }
        int exp=xpq*soluongquai;
        XPN=XPN+exp;

        while (XPN >= xpmax){
            XPN=XPN-xpmax;
            xpmax=xpmax*1.75;
            LV++;
            cout << "chuc mung da len cap "<< LV << endl;
        }
        cout << "CAP HIEN TAI CUA BAN LA: " << LV << " Kinh nghiem can de len cap: "<< xpmax <<endl;
        cout << "KINH NGHIEM HIEN TAI: " << XPN << endl;
        break;
    }
    return 0; 
}
