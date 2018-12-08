/*Experiment no 4: CSE department wants to select Programming Coach for its students. Any student of the department
 can be a coach. He need to have high profile at least three ACM regional contest participation and number of problem
 solutions of ACM need to more 300. Students need to apply in the department, if anyone’s performance is below
 the requirement he will discard automatically. As a student of CSE, write OOP code for the project. All the
 communications will be held by message.


*/
Source code:
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    string NID,DOB;
    void getInfo(string x,string y,string z)
    {
        name=x;
        NID=y;
        DOB=z;
    }
    void putInfo()
    {
        cout<<"Name : "<<name<<endl;
    }
};
class Candidate: public Person
{
public:
   int ID,solved,ACMParticipation;
    void getData(string x,string y,string z,int a,int b,int c)
    {
        getInfo(x,y,z);
        ID=a;
        solved=b;
        ACMParticipation=c;
    }
    void putData()
    {
        putInfo();
        cout<<"ID of qualified student : "<<ID<<endl;
    }
    bool qualify()
    {
        if(solved>=300 && ACMParticipation>=3)
            return 1;
        else
            return 0;
    }
};

int main()
{
    system("color f0");
    int i=0,j=0,n;
    string x,y,z;
    int a,b,c;
    cout<<"Please Input the number of Students :";
    cin>>n;
    Candidate obj[n];

    while(i<n){
            cout<<"Name NID DOB: \n";
        cin>>x>>y>>z;
        cout<<"ID SOLVED ACM_PARTICIPATED: \n";
        cin>>a>>b>>c;
        obj[i].getData(x,y,z,a,b,c);
        i++;

    }
    cout<<endl;
    cout<<"Qualified candidate list for trainer of CSE dept is given below : \n";
    while(j<n)
    {
        if(obj[j].qualify())
            obj[j].putData();
            j++;
    }
return 0;
}
