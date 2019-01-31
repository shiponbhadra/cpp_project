
#include<iostream>
#include<string>

#define ee long

using namespace std;

class PlayerDetail
{
public:
    int d, m,y ,match,wicket,run;
    PlayerDetail() {}
   PlayerDetail(int p, int q, int r,int t, int w, int z)
    {
        d = p;
        m= q;
        y= r;
        match=t;
        wicket=w;
        run=z;

    }

    void display();
    int putyear();
};
int PlayerDetail:: putyear()
    {
       return y;
    }

 inline void PlayerDetail::display()
    {
        cout<<"Date of birth    : "<<d<<"."<<m<<"."<<y<<endl;
        cout<<"Match            : "<<match<<endl;
        cout<<"Wicket           : "<<wicket<<endl;
        cout<<"Runs             : "<<run<<endl;
    }

class Person
{
public:
    string name;
    PlayerDetail pld;
    void getData(string name, PlayerDetail data)
    {
        this->name = name;

        pld = data;
    }
    int fun()
    {
        return pld.putyear();
    }
    void putData();
};
 void Person :: putData()
    {
        cout<<"Name             : "<<name<<endl;
        pld.display();
    }
class Cricketer: public Person,public PlayerDetail
{
public:
    PlayerDetail pld;
    string category;
    void inforcric(string oo, PlayerDetail pldtl, string category)
    {
        getData(oo, pldtl);
        this->category = category;
    }

    string getcategory()
    {
        return category;
    }
    int fun1()
    {
        return fun();
    }
    void putInfo();
};
 void Cricketer :: putInfo()
    {
        putData();
        cout<<"Player Category  : "<<category<<endl;
    }
int main()
{
    cout<<"Players Information are given below : "<<endl;
    cout<<endl;

    Cricketer cric[27];
    cric[0].inforcric("Tamim_Iqbal",PlayerDetail(20,03,1992,231,0,8345), "batsman");
    cric[1].inforcric("Taskin_Ahamed",PlayerDetail(5,9,1997,65,97,134), "fastbowler");
    cric[2].inforcric("Sakib_al Hassan",PlayerDetail(5,11,1993,201,264,5800), "batsman");
    cric[3].inforcric("Mahamudullah",PlayerDetail(4,2,1986,253,155,6385), "batsman");
    cric[4].inforcric("Musfiqur rahman",PlayerDetail(5,11,1991,203,0,6500), "batsman");
    cric[5].inforcric("Imrul_kayes",PlayerDetail(5,11,1986,135,0,3100), "batsman");
    cric[6].inforcric("Mostafizur_Rahim",PlayerDetail(5,10,1996,72,98,190), "fastbowler");
    cric[7].inforcric("Miraz_Hossain",PlayerDetail(5,9,1996,50,70,560), "spinbowler");
    cric[8].inforcric("Sadman Islam",PlayerDetail(18,5,1995,51,0,1739), "batsman");
    cric[9].inforcric("Khaled Ahmed",PlayerDetail(20,10,1992,22,34,1), "spinbowler");
    cric[10].inforcric("Abu Jayed",PlayerDetail(2,9,1993,45,53,50), "fastbowler");
    cric[11].inforcric("Ariful Haque",PlayerDetail(18,11,1992,85,54,1654), "batsman");
    cric[12].inforcric("Kamrul Islam",PlayerDetail(10,12,1991,66,94,173), "fastbowler");
    cric[13].inforcric("Nurul Hasan",PlayerDetail(21,11,1993,76,1,1854), "spinbowler");
    cric[14].inforcric("Nayeem hossain",PlayerDetail(2,12,2000,150,0,5600), "batsman");
    cric[15].inforcric("Musrafi",PlayerDetail(5,1,1996,29,36,114), "fastbowler");
    cric[16].inforcric("Mohammad Mithun",PlayerDetail(2,3,1991,119,02,3430), "keeper");
    cric[17].inforcric("Mossadek Hossain",PlayerDetail(10,12,1995,84,36,2144), "batsman");
    cric[18].inforcric("Anamul Haque",PlayerDetail(16,12,1992,83,2,5908), "keeper");
    cric[19].inforcric("Mithun_Hossain",PlayerDetail(5,11,1992,11,5,360), "batsman");
    cric[20].inforcric("Liton_Das",PlayerDetail(5,12,1996,36,0,890), "keeper");
    cric[21].inforcric("Nasir_Hossain",PlayerDetail(5,10,1996,120,76,2900), "batsman");
    cric[22].inforcric("Sabbir_Rahman",PlayerDetail(5,9,1995,76,45,1200), "batsman");
    cric[23].inforcric("Mominul",PlayerDetail(5,12,1996,43,17,630), "batsman");
    cric[24].inforcric("Abu Haider",PlayerDetail(14,2,1996,56,98,140), "fastbowler");
    cric[25].inforcric("Rony",PlayerDetail(5,05,1996,15,21,54), "fastbowler");
    cric[26].inforcric("Demon_Gus",PlayerDetail(5,06,1995,23,0,534), "keeper");

   ee d1=0,d2=0,d3=0,d4=0;
    Cricketer AR[8];
    int z=0,i=0;
    while(i<27)
    {
        if(cric[i].getcategory()=="keeper" && (2018-cric[i].fun1()>20) && (2018-cric[i].fun1()<30)&& d1<1)
        {
            AR[z] = cric[i];
            d1++;
            z++;
        }
        if(cric[i].getcategory()=="fastbowler" && (2018-cric[i].fun1()>20) && (2018-cric[i].fun1()<30) && d2<2)
        {
            AR[z] = cric[i];
            d2++;
            z++;
        }
        if(cric[i].getcategory()=="spinbowler" && (2018-cric[i].fun1()>20) && (2018-cric[i].fun1()<30) && d3<1)
        {
            AR[z] = cric[i];
            d3++;
            z++;
        }
        if(cric[i].getcategory()=="batsman"  && (2018-cric[i].fun1()>20) && (2018-cric[i].fun1()<30) && d4<4)
        {
            AR[z] = cric[i];
            d4++;
            z++;
        }
        i++;
    }
    ee count=1;
    for(int i = 0; i < z; i++)
    {
        cout<<"Player No.       : "<<count<<endl;
        AR[i].putInfo();
        cout<<endl;
        cout<<endl;
        count++;

    }
    return 0;
}
