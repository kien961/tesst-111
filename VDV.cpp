#include<iostream>
//#include<string>//
using namespace std; 
class SinhVien
{
    private:
    char MaSV[10];
    char TenSV[50];
    char MonHoc[50];
    int SoTrinh;
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
        cout<<"\nnhap mon hoc: ";
        getline(cin,MonHoc);
        cin.ignore;
        cout<<"\nnhap so trinh: ";
        cin>>SoTrinh;

    }
    
}

int main() 
{    

    return 0;  
}
