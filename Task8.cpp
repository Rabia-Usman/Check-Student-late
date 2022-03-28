#include<iostream>
using namespace std;
int main(){
float esh=0 ,esm=0 ,Ah=0 ,Am=0 ,Amin=0 ,emin=0 ,ext=0 ,exh=0 , exm = 0; // esh is exam start hours and esm is exam start min Ah is arrival min and Am is arrival min 
cout<<"Enter exam time in hours :" <<endl;
cin>> esh;
cout<<"Enter exam time in min :" <<endl;
cin>> esm;
cout<<"Enter student time in hours :" <<endl;
cin>> Ah;
cout<<"Enter Student time in min :" <<endl;
cin>> Am;
Amin =((Ah* 60)+Am);
emin=((esh *60)+esm);
emin = emin - Amin;
ext = emin -Amin ;
if ((esh = Ah) && (Am <= esm))
{
    cout<<"On Time"<<endl;
}
 else if ((Ah =esh) && (Am> esm))
{
    cout<<"Late "<<endl;
    cout<<ext << "minutes after start"<<endl;
}
 else if ((Ah >esh) && (Am> esm)){
    cout<<"Late"<<endl;
    exm = Am -esm ;
    exh =Ah -esh ;
    cout<<exh << ":"<<exm <<"hours after the start"<<endl;
}
 else if (Ah <esh){
    cout<<" Early"<<endl;
    cout <<Ah << ":"<<Am << "before start"<<endl;
}


    return 0;
}