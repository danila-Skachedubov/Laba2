/*������ ��������� ������������� ������ ������������� ����������.
��� ������� �� ���� ������: ������, ������������� ������ ���������� ����� � ������, ������ � ������, ������ ��� ����� � ������ ��� �����, � ��� �� ���� ���������.
��� ����, ����� ��������� ����������������� ������ ������������� ����������, � ������� � ����� ��� ���� ���� price.
����� ����� ��������� ���������� ��� ����������: ��� ������� � �������, � ��������� ����.
������ ����� ��������� ��������� , � ������� ���������� ++ � -- ������� �� ����� �������� � �������������� ����������� ��� ����� (���, ��������, ����������).
��������� ����� ��� ���������� ������ �� ������ �� ���������, ��� � �������� ��.*/
#include <iostream>
#include "CAR.h"
using namespace std;

int main()
{

 setlocale(LC_ALL, "Russian");
   car *Car=new car;
   std::string model;
   int speed;
   int color;
   int price;
car a,b,c;
cout<<"������ �����a:  "<<a<<endl<<"������� ������ ������ ������:"<<endl;
cout<<"��������: "<<endl;
cin>>model;
b.set_model(model);
cout<<"��������: "<<endl;
cin>>speed;
b.set_speed(speed);
cout<<"����: "<<endl;
cin>>color;
b.set_color(color);
cout<<"����: "<<endl;
cin>>price;
b.set_price(price);

if(a==b)
{
    cout<<"������ ����������"<<endl;
}
else
        cout<<"������ ������"<<endl;
if(a!=b)
        {
            cout<<"������ ������� �����"<<endl;
        }
else
    cout<<"������ ������ �����"<<endl;
if(a>=b)
    cout<<"�������� ������ ������ ������ ��� ����� �������� ������ ������"<<endl;
else if(a<=b)
    cout<<"�������� ������ ������ ������ ��� ����� �������� ������ ������"<<endl;

if(a>b)
{
    cout<<"������ ������ ������ ������"<<endl;
}
else if(a<b)
{
    cout<<"������ ������ ������ ������"<<endl;
}
else {
    cout<<"������ � ���������� ����������"<<endl;
}

    cout<<"������� �������� ������, � ������� ������ �������� �� ������������ ����:"<<endl<<"(kia, mercedes, lambo)";
    cin>>model;
    c.set_model(model);
     cout<<"�� ����� ������������ ��������, ����������, ���������"<<endl;
    while (model!="kia"&&model!="mercedes"&&model!="lambo")
        {
    cout<<"�� ����� ������������ ��������, ����������, ���������"<<endl;
    cin>>model;
    c.set_model(model);

        }
    int t=-1;
    cout<<"������� ����� ��� ������ ��������:"<<endl<<"1-�������� ��������� ������"<<endl<<"2-�������� ���������� ������"<<endl<<"3-������� ����� ������"<<endl<<"0-��������� ���������� ���������";
    while (t!=0)
        {

cin>>t;
switch(t){

case 0:
return 0;

case 1:
 ++c;
break;

case 2:
 --c;
break;
case 3:
cin>>model;
c.set_model(model);
}}
    return 0;}

