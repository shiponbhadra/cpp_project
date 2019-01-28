#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Item;
void getDetail();
class Person
{
public:
    string name;


};
class Customer : public Person
{
public:
    string origin;

 void getdata1()
    {

        cout<<"enter your name : ";
        cin>>name;
        cout<<"Please enter your gender : ";
        cin>> origin;
    }
    friend void getDetail(Customer);

};


class ItemCategory
{
public:
    string itemCategory;

};
class Item : public ItemCategory
{
 public:
     char goods[20][20];
     string productOrigin[20];
    int i,n,s[10];
    double p[20],d=1,q[20],x=0,t[20],z=0;
    public:
        void getdata()
    {

        cout<<"enter the numbers of items : ";
        cin>>n;
    }
    void compute()
    {for(i=0;i<n;i++)
    {
    cout<<endl<<"Please enter the category of the item : ";
    cin>>itemCategory;
    cout<<"enter the name of the item : ";
    cin>>goods[i];
    cout<<"Enter the Origin of the product : ";
    cin>>productOrigin[i];

    cout<<"enter the quantity the item : ";
    cin>>q[i];
    cout<<"enter the price : ";
    cin>>p[i];
    cout<<"enter the discount : ";
    cin>>d;
    t[i]=p[i]*q[i];
    x=t[i]+x;
    d=t[i]*d/100;
    z=z+d;
    }
    }

    void show()
    {cout<<"**************************************bill**************************************";
    cout<<endl;

    cout<<"S.NO."<<"\t"<<"item name"<<"\t"<<"product_origiin"<<"\t"<<" "<<"quantity"<<"\t"<<"price"<<"\t"<<"totalamount"<<endl;
    for(i=0;i<n;i++)
        {
            s[i]=i+1;
    cout<<" "<<s[i]<<"\t"<<" "<<goods[i]<<"\t"<<" "<<productOrigin[i]<<"\t"<<"    "<<q[i]<<"\t\t"<<" "<<p[i]<<" "<<"\t "<<t[i]<<endl;
    }
    cout<<"********************************************************************************"<<endl;
    cout<<endl<<" TOTAL AMOUNT  : "<<x;
    cout<<endl<<" LESS DISCOUNT : "<<z;
    cout<<endl<<" -------------------";
    cout<<endl<<" GRAND TOTAL   : "<<x-z;
    cout<<endl;
    }
    };
    void getDetail(Customer e)
    {

        cout<<"Thank you "<<e.name <<". You will get discount if be our regular customer"<<endl;
    }
    int main()
    {


      cout<<"----------Welcome to our Online Departmental Store------------\n"<<endl;
       Customer c;
       c.getdata1();


        Item g;
        g.getdata();
        g.compute();
        cout<<endl;
        cout<<endl;
        g.show();
        getDetail(c);

    }

