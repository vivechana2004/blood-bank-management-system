#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int k=1,l=1;
class hospital
{
    public:
    int HPID;
    char contactno[10];
    char rhesius;
    char type;
            void h_register()
        {
            HPID=k;

            cout<<"\nEnter contact no: ";
            cin>>contactno;
            cout<<"\nYour HPID is: "<<HPID<<endl;
            cout<<"\nHospital Added";
        }
    void payment_check(){
        char ch;
        cout<<"\nHas payment been made?(Y/N): ";
        cin>>ch;
        if(ch=='Y'){
            cout<<"\nTransaction complete";
        }
        else{
            cout<<"\nTransaction Incomplete";
        }
    }

};
class donor
{
    public:
    int fitness;
    char name[10];
    char contact[10];
    int DNR;
    char r; //r-rhesius
    char t; //t-type
        void d_register()
        {
            char str[2];
            cout<<"\nEnter Name: ";
            cin>>name;
            cout<<"\nEnter Contact Number: ";
            cin>>contact;
            cout<<"\nEnter fitness state( 1-fit, 0-unfit): ";
            cin>>fitness;
            while(1)
            {
            cout<<"\nEnter type: ";
            cin>>str;
            if(strcmp(str,"AB")==0||strcmp(str,"ab")==0)
            {
                t='x';
                break;
            }
            else if(strcmp(str,"A")==0||strcmp(str,"B")==0||strcmp(str,"O")==0||strcmp(str,"a")==0||strcmp(str,"b")==0||strcmp(str,"o")==0)
            {
                t=str[0];
                break;
            }
            else
            {
                cout<<"\nInvalid Type!";
            }
            }
            while(1)
            {
            cout<<"\nEnter Rhesius(+/-): ";
            cin>>r;
            if(r=='+'||r=='-')
                break;
            else
            {
                cout<<"\nInvalid rheius(+/-)";
            }
            }
            DNR=l;
            cout<<"\nYour DNR is: "<<DNR;
            cout<<"\nDonor Added.";

        }
        void d_updation()
        {
            int choice;
            cout<<"\n\nEnter choice:\n1-Update name\n2.Update fitness state\n3.Update contact number\n";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    cout<<"\nEnter updated name: ";
                    cin>>name;
                    break;
                case 2:
                    cout<<"\nEnter new fitness state: ";
                    cin>>fitness;
                    break;
                case 3:
                    cout<<"\nEnter contact number: ";
                    cin>>contact;
                    break;
                default: cout<<"\nInvalid input!";

            }
            cout<<"\nDonor Updated";

        }

};
class bloodpacket
{
public:
    char t_1;//type
    char r_1;//rhesius
    int expiry;

};
class bloodbank
{
    public:
       int z=0,x=0,c=0,v=0,w=0,n=0,m=0,q=0;
int username;
int password;
class donor d[5];
class hospital h[5];
class bloodpacket b[24];
    bloodbank(int a,int b)
    {
        username=a;
        password=b;
    }
int authenticate()
{
    int y,z;
cout<<"\nEnter username:\t";
cin>>y;
cout<<"\nEnter password:\t";
cin>>z;
int x;
if(y==username&&z==password)
{
    x=2;
    return x;
}
else
return 0;
}
void b_register()
{
d[l].d_register();
l=l+1;
}
void update()
{
    int r;
    cout<<"\nEnter DNR: ";
    cin>>r;
    if(r>=l)
    {
        cout<<"\nDNR doesnt exist\n";
        return;
    }
    else
    d[r].d_updation();
}
void h_registration()
{

    h[k].h_register();
    k=k+1;
}

void accept(){
    int hid, flag = 0, i;
    char req_t, req_r;
    cout<<"Enter HPID: ";
    cin>>hid;
    if(hid>=k){
        cout<<"Enter valid HPID\n";
        return;
    }
    cout<<"\nEnter required blood type: ";
    cin>>req_t;
    cout<<"\nEnter required rhesius type(+/-): ";
    cin>>req_r;
    switch(req_t){
        case 'A':if(req_r=='+'){
                    for(i=0;i<3;i++){
                        if(b[i].expiry>2024){
                            flag = 300;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else{
                    for(i=3;i<6;i++){
                        if(b[i].expiry>2024){
                            flag = 1000;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
        case 'B':if(req_r=='+'){
                    for(i=6;i<9;i++){
                        if(b[i].expiry>2024){
                            flag = 400;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else{
                    for(i=9;i<12;i++){
                        if(b[i].expiry>2024){
                            flag = 800;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
        case 'O':if(req_r=='+'){
                    for(i=12;i<15;i++){
                        if(b[i].expiry>2024){
                            flag = 300;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else{
                    for(i=15;i<18;i++){
                        if(b[i].expiry>2024){
                            flag = 2000;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
        case 'x':if(req_r=='+'){
                    for(i=18;i<21;i++){
                        if(b[i].expiry>2024){
                            flag = 500;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else{
                    for(i=21;i<24;i++){
                        if(b[i].expiry>2024){
                            flag = 2000;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
        default: break;
    }
    if(flag!=0){
        cout<<"\nCost of the required Blood Packet is:\t"<<flag;
        h[hid].payment_check();
    }
    else{
        cout<<"\nRequired Blood Packet is not available";
    }
}

void donate(){
    int a,i;
    cout<<"\nEnter DNR:\t";
    cin>>a;
    if(a>=l){
        cout<<"Enter valid DNR\n";
        return;
    }
    if(d[a].fitness==0){
        cout<<"Person is unfit to donate\n";
        return;
    }
    char t, r;
    t = d[a].t;
    r = d[a].r;
    switch(t){
        case 'A':if(r=='+'){
                    for(i=0;i<3;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            z++;
                            break;
                        }
                    }
                }
                else{
                    for(i=3;i<6;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            x++;
                            break;
                        }
                    }
                }
                break;
        case 'B':if(r=='+'){
                    for(i=6;i<9;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            c++;
                            break;
                        }
                    }
                }
                else{
                    for(i=9;i<12;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            v++;
                            break;
                        }
                    }
                }
                break;
        case 'O':if(r=='+'){
                    for(i=12;i<15;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            w++;
                            break;
                        }
                    }
                }
                else{
                    for(i=15;i<18;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            n++;
                            break;
                        }
                    }
                }
                break;
        case 'x':if(r=='+'){
                    for(i=18;i<21;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            m++;
                            break;
                        }
                    }
                }
                else{
                    for(i=21;i<24;i++){
                        if(b[i].expiry<2024){
                            b[i].t_1 = d[a].t;
                            b[i].r_1 = d[a].r;
                            cout<<"\nEnter expiry: ";
                            cin>>b[i].expiry;
                            q++;
                            break;
                        }
                    }
                }
                break;
        default: break;
    }
    cout<<b[i].expiry;
    if(b[i].expiry>2024)
    cout<<"\nYou can donate the blood";
    else
    cout<<"\nYou cannot donate the blood";
}
void show()
{
    cout<<"BLOOD BANK DETAILS \n";
    cout<<"Available Blood Packets : \n";
    cout<<"Total blood packets available"<<z+x+c+v+w+n+m+q;
    cout<<"\n A+   :"<<z;
    cout<<"\n A-   :"<<x;
    cout<<"\n B+   :"<<c;
    cout<<"\n B-   :"<<v;
    cout<<"\n O+   :"<<w;
    cout<<"\n O-   :"<<n;
    cout<<"\n AB+  :"<<m;
    cout<<"\n AB-  :"<<q;
}
};
int main()
{
    cout<<"Welcome to BLOOD LINK- BLOOD BANK!";
    int ch, count = 0;
    class bloodbank b(123,123);
    while(count < 3)
    {
    if(b.authenticate()==0){
    cout<<"\nInvalid Access";
    count++;
    }
    else
        break;
    }

    if(count==3){
    cout<<"Invalid access attempted beyond 3 times, exiting";
    return 1;
    }

    {
        while(1)
        {
            cout<<"\nEnter choice";
            cout<<"\n1)Add donor \n2)Update donor \n3)Add hospital \n4)Donate \n5)Request Blood \n6)Display available bloodpackets \n7)Exit\n ";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    b.b_register();
                    break;
                case 2:
                    b.update();
                    break;
                case 3:
                    b.h_registration();
                    break;
                case 4:
                    b.donate();
                    break;
                case 5:
                    b.accept();
                    break;
                case 6:
          b.show();
                    break;
                case 7:
                    return 0;
                default:cout<<"\nInvalid Entry!";
            }
        }
    }
return 0;
}