#include<iostream>
#include<conio.h>
#include<ip
CLASS sinhvien
{
private:  int dtoan,diemly,diemhoa;
float dtb;fh

char ht[30];
public:
void nhap()
{  cout<<"nhap ho ten:";
cin>>ht;
cout<<"nhap diem toan:";
cin>>dtoan;
cout<<"nhap diem ly:";
cin>>dly;};
dtb=float(dtoan+dly+dhoa)/3.0;
void xuat()  
{  cout<<"ho ten:"<<ht;
cout<<"diem toan:"<<dtoan;
cout<<"diem ly:"<<dly;
cout<<"diem hoa:"<<dhoa;
cout<<"diem trung binh:"<<dtb;
if(dtb<5.0)
cout<<"yeu";
else if(dtb>5.0 && dtb<6.5)
cout<<"trung binh"
else if(dtb>6.5 && dtb<8.0)
cout<<"kha";
else
cout<<"gioi";
};
void main()
{ sinhvien *sv;
int n,i;
do{ cout<<"nhap so sinh vien";
cin>>n;}
while(n<0);
sv=new sv[n];
if(sv==null)
cout<<"loi cap phat bo nho";
else
cout<<"bat dau";
for(i=0;i<n;i++)
{ cout<<"STT:"<<i+1;
sv[i].nhap;
sv[i].xuat;
}
delete sv;
getch();
}.