#include<bits/stdc++.h>
#include "Main_algo.cpp"
using namespace std;

int main() {
    /*
    1 - ������� ��������
    2 - ������ �������
    3 - ����������� ������� �������� ���� ����� �������� ���� � �������
    4 - ����������� ��������� ������ � ������ ������ ������� �������� ����������
    5 - ���� ������ �����, �� ����������� ����������
    6 - ����� ����������� ��������� ������ ������������ �� ��� ��� ���� ������ �� �������
    */
    Planes first("Su-57", 10000, 5000);
    Planes second("Mig-29", 9000, 4500);
    vector<Planes> vec_planes;
    vec_planes.push_back(first);
    vec_planes.push_back(second);
    Airports vnukovo("Vnukovo", "Moscow", 1.00, 2.000, 1, vec_planes);
    vnukovo.print();
    double lat1 = 51.5007; double lon1 = 0.1246;
    double lat2 = 40.6892; double lon2 = 74.0445;
    cout << haversine(lat1, lon1, lat2, lon2) << " K.M.";
    return 0;

    fly(vnukovo, first);


}
