//Nh?p danh sách liên k?t don các s? nguyên
#include<iostream>
using namespace std;
//Khai báo c?u trúc danh scahs liên k?t don cá s? nguyên
//Khai báo c?u trúc 1 cái node
struct node
{
    int data;//d? li?u trong 1 node
    struct node *pNext;//con tr? dùng d? liên k?t gi?a các node vs nhau
};
typedef struct node NODE;//Thay th? struct node thành NODE
//Khai báo c?u trúc c?a danh sách liên k?t don
struct list
{
    NODE *pHead;//node qu?n lí d?u danh sách
    NODE *pTail;//node qu?n lí cu?i danh sách
};
typedef struct list L;//thay th? struct list thành L
//Kh?i t?o c?u trúc c?a danh sách liên k?t don các s? nguyên
void KhoiTao(L &l)
{
    //cho 2 node tr? d?n NULL
    l.pHead=NULL;
    l.pTail=NULL;
}
//Kh?i t?o 1 node
NODE *KhoiTaoNODE(int x)
{
    NODE *p=new NODE;//C?p phát vùng nh? cho NODE p
    if(p==NULL)
    {
        cout<<"\nKhong du bo nho de cap phat";
    }
    p->data=x;
    p->pNext=NULL;
    return p;
}
//Hàm thêm NODE vào d?u danh sách
void ThemVaoDau(L &l,NODE *p)
{
    //danh sách dang r?ng
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        p->pNext=l.pHead;
        l.pHead=p;
    }
    
}
void ThemVaoCuoi(L &l, NODE *p)
{
    if(l.pTail==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void xuat(L l)
{
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext)
    {
        cout<<k->data<<"   ";
    }

}
int main()
{
    L l;
    int n;
    KhoiTao(l);
    cout<<"\nNhap so luong NODE can them: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"\nnhap so nguyen: ";
        cin>>x;
        NODE *p=KhoiTaoNODE(x);
        ThemVaoCuoi(l,p);//Them NODE p vao dau danh sach lien ket don
    }
    cout<<"\nDanh sach lien ket don la: ";
    xuat(l);
    system("pause");
    return 0;
}