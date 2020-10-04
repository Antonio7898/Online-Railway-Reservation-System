#include <bits/stdc++.h>
#include <stdlib.h>
#include <sstream>
#include <string>
typedef unsigned long long int ullt;
using namespace std;
int c=2;
struct cls
{
  string bogi;
  string status;
  int st;
};
ullt u=8798779678,l=3567867789;
struct train
{
    int tno;
    string tnm;
    string frm;
    string to;
    string deptime;
    string arvtime;
    string duration;
    cls c[2];
};
struct passengerdeatil
{
    ullt PNR;
    int tno;
    string tnm;
    string frm;
    string to;
    string deptime;
    string arvtime;
    string duration;
    string name;
    int age;
    char sex;
    string coach;
    string bogi;
    string berthloc;
};
train t[8] = {{12295,"SanghmitraExp","MAS","KTE","15:40","19:25","27h45m","SL","W/L",78,"3A","AVAIL",45},
              {12669,"GangakaveriExp","MAS","KTE","17:40","22:18","28h38m","SL","AVAIL",145,"3A","W/L",23},
              {18233,"NarmadaExp","INDB","KTES","17:15","08:40","15h25m","SL","AVAIL",56,"3A","AVAIL",12},
              {12295,"SanghmitraExp","ET","PCOI","08:30","05:08","20h30m","SL","AVAIL",12,"3A","W/L",39},
              {11093,"MahanagriExp","ET","PCOI","12:45","00:12","11h27m","SL","W/L",36,"3A","W/L",10}};

passengerdeatil b[4]={{4566587966,18233,"NarmadaExp","INDB","KTES","17:15","08:40","15h25m","Kiran",23,'F',"3A","B3","45"},
                      {7845094567,12669,"GangakaveriExp","MAS","KTE","17:40","22:18","28h38m","Mandy",29,'M',"SL","W/L 78","W/L 87"}};
class trainlist
{
    
    public:
        void trainlistupdate();
        void trlsup(); 
};
void PNRLIST()
{
    int i=0;
    cout<<"\n";
    while(i<5)
    {
        cout<<b[i].PNR<<" "<<b[i].tno<<" "<<b[i].tnm<<" "<<b[i].frm<<" "<<b[i].deptime<<" ";
        cout<<b[i].to<<" "<<b[i].arvtime<<" "<<b[i].duration<<" "<<b[i].coach<<" ";
        cout<<b[i].name<<" "<<b[i].age<<" "<<b[i].sex<<" "<<b[i].bogi<<" "<<b[i].berthloc;
        cout<<"\n\n";
        i+=1;
    }
} 
void trainlist::trainlistupdate()
{
    cout<<"\nEnter Train Details :";
    int i=3,j=0;
    while(i<5)
    {
        cin>>t[i].tno>>t[i].tnm>>t[i].frm>>t[i].to>>t[i].deptime>>t[i].arvtime>>t[i].duration;
        while(j<2)
        {
            cin>>t[i].c[j].bogi>>t[i].c[j].status>>t[i].c[j].st;
            j+=1;
        }
        j=0;
        i+=1;
    }
    i=0;
    cout<<"TrainList:\n";
    while(i<5)
    {
        cout<<t[i].tno<<" "<<t[i].tnm<<" "<<t[i].frm<<" "<<t[i].to<<" "<<t[i].deptime<<" "<<t[i].arvtime<<" "<<t[i].duration<<" ";
        while(j<2)
        {
            cout<<t[i].c[j].bogi<<" "<<t[i].c[j].status<<t[i].c[j].st<<" ";
            j+=1;
        }
        j=0;
        cout<<"\n";
        i+=1;
    }
}
void trainlist::trlsup()
{
    cout<<"Enter security code: ";
    string kl;
    cin>>kl;
    if(kl=="A78GH")
    {
        PNRLIST();
    }
    else
    {
        cout<<"wrong code";
        return;
    }
}
class trbtst : public trainlist
{
   public:
      void k1();
};
void booking()
{
    cout<<"Name :";
    cin>>b[c].name;
    cout<<"Age :";
    cin>>b[c].age;
    cout<<"Sex :";
    cin>>b[c].sex;
    cout<<"Train No:";
    cin>>b[c].tno;
    cout<<"Coach :";
    cin>>b[c].coach;
    int i=0;
    int y;
    while(i<3)
    {
        if(t[i].tno==b[c].tno)
        {
            b[c].tnm=t[i].tnm;
            b[c].frm=t[i].frm;
            b[c].to=t[i].to;
            b[c].deptime= t[i].deptime;
            b[c].arvtime = t[i].arvtime;
            b[c].duration = t[i].duration;
            int k;
            if(b[c].coach=="3A")
            {
                if(t[i].c[1].status == "AVAIL")
                {
                    t[i].c[1].st-=1;
                    k=(rand() % (4)+1);
                    ostringstream s,l;
                    s<<k;
                    string a = s.str();
                    b[c].bogi="B";
                    b[c].bogi.append(a);
                    int e =72,r=1;
                    k = (rand() % (e-r)+r);
                    l<<k;
                    a = l.str();
                    b[c].berthloc = a;
                }
                else
                {
                    ostringstream s;
                    s<<t[i].c[1].st;
                    b[c].berthloc = "W/L ";
                    string a=s.str();
                    b[c].berthloc.append(a);
                    b[c].bogi = "W/L";
                    t[i].c[1].st+=1;
                    s<<(t[i].c[1].st-10);
                    a = s.str();
                    b[c].bogi.append(a);
                }
            }
            else
            {
               if(t[i].c[0].status == "AVAIL")
                {
                    t[i].c[0].st-=1;
                    k=(rand() % (4)+1);
                    ostringstream s;
                    s<<k;
                    string a = s.str();
                    b[c].bogi="S";
                    b[c].bogi.append(a);
                    int e =72,r=1;
                    k = (rand() % (e-r)+r);
                    s<<k;
                    a = s.str();
                    b[c].berthloc = a;
                }
                else
                {
                    ostringstream s,l;
                    s<<t[i].c[0].st;
                    b[c].berthloc = "W/L ";
                    string a=s.str();
                    b[c].berthloc.append(a);
                    b[c].bogi = "W/L ";
                    t[i].c[0].st+=1;
                    l<<(t[i].c[0].st-10);
                    a = l.str();
                    b[c].bogi.append(a);
                } 
            }
            break;
        }
        i+=1;
    }
    cout<<"Booking Successfull.....\n";
    ullt k;
    k = (rand() % (u-l)+l);
    b[c].PNR = k; 
    l+=5787;
    cout<<"\n";
            cout<<"| PNR :"<<left<<setw(18)<<b[c].PNR<<"\t| "<<"Train No : "<<left<<setw(18)<<b[c].tno<<"\t| "<<"Train Name : "<<left<<setw(5)<<b[c].tnm<<"\t|\n";
            cout<<"| Source : "<<left<<setw(18)<<b[c].frm<<"\t| "<<"Sch Departure :"<<left<<setw(12)<<b[c].deptime<<"\t| "<<"Coach : "<<left<<setw(9)<<b[c].coach<<"\t|\n";
            cout<<"| Destination :"<<left<<setw(12)<<b[c].to<<"\t| "<<"Sch Arrival : "<<left<<setw(12)<<b[c].arvtime<<"\t| "<<"Duration : "<<left<<setw(5)<<b[c].duration<<"\t|\n";
        
            cout<<"\n";
            cout<<"\t| "<<left<<setw(10)<<"Name"<<"\t| "<<left<<setw(5)<<"Age"<<"\t| "<<left<<setw(5)<<"Sex"<<"\t| "<<left<<setw(10)<<"Bogi"<<"\t| "<<left<<setw(7)<<"Berth"<<"\t|\n";        
            cout<<"\t| "<<left<<setw(10)<<b[c].name<<"\t| "<<left<<setw(5)<<b[c].age<<"\t| "<<left<<setw(5)<<b[c].sex<<"\t| "<<left<<setw(10)<<b[c].bogi<<"\t| "<<left<<setw(7)<<b[c].berthloc<<"\t|";
            
    c+=1;        
}
void trbtst::k1()
{
    cout<<"Source Station:  ";
    string src,dst;
    cin>>src;
    cout<<"Destination Station: ";
    cin>>dst;
    int i=0;
    cout<<"| "<<left<<setw(9)<<"TRAIN NO"<<"\t| "<<left<<setw(20)<<"TRAIN NAME"<<"\t| "<<left<<setw(9)<<"DEP TIME"<<"\t| "<<left<<setw(9)<<"ARV TIME"<<"\t| "<<left<<setw(4)<<"DURATION"<<"\t|\n";
    for(i=0;i<5;i++)
    {
       if(t[i].frm==src && t[i].to==dst)
       {
         cout<<"| "<<left<<setw(9)<<t[i].tno<<"\t| "<<left<<setw(20)<<t[i].tnm<<"\t| "<<left<<setw(9)<<t[i].deptime<<"\t| "<<left<<setw(9)<<t[i].arvtime<<"\t| "<<left<<setw(4)<<t[i].duration<<"\t|\n";
       }
    }
}
void seatavailability()
{
    cout<<"Source Station:  ";
    string src,dst;
    cin>>src;
    cout<<"Destination Station: ";
    cin>>dst;
    cout<<"Date :";
    string dte;
    cin>>dte;
    int i=0;
    cout<<"| "<<left<<setw(9)<<"TRAIN NO"<<"\t| "<<left<<setw(20)<<"TRAIN NAME"<<"\t| "<<left<<setw(9)<<"DEP TIME"<<"\t| "<<left<<setw(9)<<"ARV TIME"<<"\t| "<<left<<setw(9)<<"DURATION"<<"\t|\n";
    for(i=0;i<5;i++)
    {
       if(t[i].frm==src && t[i].to==dst)
       {
         cout<<"| "<<left<<setw(9)<<t[i].tno<<"\t| "<<left<<setw(20)<<t[i].tnm<<"\t| "<<left<<setw(9)<<t[i].deptime<<"\t| "<<left<<setw(9)<<t[i].arvtime<<"\t| "<<left<<setw(9)<<t[i].duration<<"\t|\n";
         
       }
    }
    char k;
    do
    {
        cout<<"Enter the train no : ";
        int n;
        cin>>n;
        for(i=0;i<5;i++)
        {
            if(t[i].tno==n)
            {
                cout<<"| "<<left<<setw(7)<<t[i].c[0].bogi<<"\t| "<<left<<setw(7)<<t[i].c[1].bogi<<"\t|"<<"\n";
                cout<<"| "<<left<<setw(7)<<t[i].c[0].status<<t[i].c[0].st<<"\t| "<<left<<setw(7)<<t[i].c[1].status<<t[i].c[1].st<<"\t|";
                break;
            }
        }
        cout<<"\nChech Availability in Another Train ?[y/n]: ";
        cin>>k;
    }while(k=='y'||k=='Y');
    cout<<"\nBook Ticket ?[y/n]:";
    cin>>k;
    if(k=='y'|| k=='Y')
    {
        booking();
    }
}
int login()
{
    cout<<"User Id: ";
    string uid,pwd;
    cin>>uid;
    cout<<"\nPassword : ";
    cin>>pwd;
    if(uid=="Garyyo98" && pwd=="Galantis90")
    {
        return 1;
    }
    else
    {
        cout<<"wrong credentials";
        cout<<"\nFogot Password[y/n]? :";
        char q;
        cin>>q;
        if(q=='y'|| q=='Y')
        {
            cout<<"Enter Mobile No : ";
            ullt mb;
            cin>>mb;
            cout<<"\nOTP Sent to your mobile no through SMS";
            cout<<"\nEnter OTP :";
            int y;
            cin>>y;
            if(y==674590)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
            return 0;
    }
}
void PnrStatus()
{
    cout<<"Enter PNR no :";
    ullt kl;
    cin>>kl;
    int i=0;
    while(i<4)
    {
        if(kl == b[i].PNR)
        {
            cout<<"\n";
            cout<<"| PNR :"<<left<<setw(18)<<b[i].PNR<<"\t| "<<"Train No : "<<left<<setw(18)<<b[i].tno<<"\t| "<<"Train Name : "<<left<<setw(5)<<b[i].tnm<<"\t|\n";
            cout<<"| Source : "<<left<<setw(18)<<b[i].frm<<"\t| "<<"Sch Departure :"<<left<<setw(12)<<b[i].deptime<<"\t| "<<"Coach : "<<left<<setw(9)<<b[i].coach<<"\t|\n";
            cout<<"| Destination :"<<left<<setw(12)<<b[i].to<<"\t| "<<"Sch Arrival : "<<left<<setw(12)<<b[i].arvtime<<"\t| "<<"Duration : "<<left<<setw(5)<<b[i].duration<<"\t|\n";
        
            cout<<"\n";
            cout<<"\t| "<<left<<setw(10)<<"Name"<<"\t| "<<left<<setw(5)<<"Age"<<"\t| "<<left<<setw(5)<<"Sex"<<"\t| "<<left<<setw(10)<<"Bogi"<<"\t| "<<left<<setw(7)<<"Berth"<<"\t|\n";        
            cout<<"\t| "<<left<<setw(10)<<b[i].name<<"\t| "<<left<<setw(5)<<b[i].age<<"\t| "<<left<<setw(5)<<b[i].sex<<"\t| "<<left<<setw(10)<<b[i].bogi<<"\t| "<<left<<setw(7)<<b[i].berthloc<<"\t|";
            break;
        }
        i+=1;
    }
}
void cncl()
{
    cout<<"Enter PNR no to Cancel : ";
    ullt yt;
    cin>>yt;
    int i=0;
    while(i<5)
    {
        if(b[i].PNR==yt)
        {
            b[i].bogi = "CANCELLED";
            b[i].berthloc = "CANCELLED";
        }
    }
}
int main()
{
    int kl;
    kl = login();
    if(kl==1)
    {
        cout<<"**************************Welcome to  Shadow Railway Reservation Portal****************************\n";
        int m=789;
        while(m!=6)
        {
            cout<<"\nSelect one of the following :";
            cout<<"\n1. Train Between Stations\n2. Seat Availability\n3. PNR Status\n4. Book Ticket\n5. Cancel Ticket\n6. Exit";
            cin>>m;
            switch(m)
            {
                case 1:
                    trbtst yu;
                    yu.k1();
                    break;
            
                case 2:
                    seatavailability();
                    break;
               
                case 3:
                    PnrStatus();
                    break;
                
                case 4:
                    booking();
                
                case 5:
                    return 0;
                
                case 7:
                    trainlist kl;
                    kl.trlsup();
            }
        }
    }
    return 0;
}













