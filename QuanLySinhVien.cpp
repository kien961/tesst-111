#include<iostream>
#include<string>
using namespace std; 
class SinhVien
{
    private:
    char MaSV[10];
    char TenSV[50];
    public:
    void NhapSV()
    {
        cin.ignore;
        cout<<"\nnhap Ma sinh vien: ";
        getline(cin,MaSV);
        cin.ignore;
        cout<<"\nnhap Ten sinh vien: ";
        getline(cin,TenSV);
        cin.ignore;

    }
    friend class LopHoc;
    friend class MonHoc;
};
class LopHoc
{
    private:
    char TenLop[30];
    int Khoa;
    public:
    void LopHoc();
};
class MonHoc
{
    private:
    char TenMon[30];
    int Sotrinh;
    int Diem;
    public:
    void MonHoc();
}
void LopHoc::LopHoc()
    {
        cout<<"\nnhap ten lop: ";
        getline(cin,TenLop);
        cin.ignore;
        cout<<"\nNhap khoa: ";
        cin>>Khoa;
    }
void MonHoc::MonHoc()
{
    cout<<"\nNhap ten mon: ";
    getline(cin,TenMon);
    cin.ignore;
    cout<<"\nnhap so trinh: ";
    cin>>SoTrinh;
    cout<<"\nnhap Diem: ";
    cin>>Diem;
}

int main() 
{    

    system("pause");
    return 0;  
}
