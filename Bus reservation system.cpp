#include<iostream>
using namespace std;
 
int r=0,p=0,k=20;
float TotalSale=0;
 
class bus{
char PessengerName[99];
char deprt[9];
char from[9];
char to[9];
char arriva[9];
int  Captian_Total_Seats, Captian_Total_Fare;
int BusNo, Captian_Departure_Timing, s;
public:
	void Captian_Bus_Registration();
	void show();
	void book();
	void CaptianExit();
 
 
}b[8];
 
void bus::Captian_Bus_Registration(void)
{
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"\nEnter Bus No:";
cin>>BusNo;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"\nFrom: ";
cin>>from;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"\nTo: ";
cin>>to;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"\nDeparture: ";
cin>>Captian_Departure_Timing;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"\nTotal seats: ";
cin>>Captian_Total_Seats;
 
p++;
cout<<"\n";
cout<<"Bus Information Added!!\n";
system("PAUSE");
system("CLS");
 
}
 
void bus::show(void)
{
	cout<<"\nTotal bus available:"<<endl;
	for(int i=0;i<p;i++)
		{	cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Bus No: ";
			cout<<b[i].BusNo<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"From: ";
			cout<<b[i].from<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"To: ";
			cout<<b[i].to<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Departure: ";
			cout<<b[i].Captian_Departure_Timing<<" O'clock"<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Seats: ";
			cout<<b[i].Captian_Total_Seats<<endl<<endl<<endl;
 
		}
		system("PAUSE");
		system("CLS");
}
 
 
void bus::book(void)
{
int number;
float Captian_Total_Fare;
	cout<<"\nEnter Bus No: ";
	cin>>number;
	int n;
 for(n=0;n<p;n++)
 {
	 if(b[n].BusNo==number)
	 {
		if(b[n].Captian_Total_Seats<=0)
		{
		cout<<"\tSORRY!"<<endl<<"\tNo  Seat Available\t";
		}
		else
		{
		 cout<<endl<<"Total seat available: "<<b[n].Captian_Total_Seats;
		 cout<<endl<<"Enter Passenger's Name: ";
		 cin>>PessengerName;
		 cout<<endl<<"Number of seats: ";
		 cin>>s;
		 while((b[n].Captian_Total_Seats=b[n].Captian_Total_Seats-s)<0)
			 {cout<<endl<<"Limit Exceed...Please re-enter ";
			 b[n].Captian_Total_Seats=b[n].Captian_Total_Seats+s;
				cin>>s;
 
 
		 }
 
 
cout<<endl<<"Your purchase is completed"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Bus No: ";
cout<<b[n].BusNo<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"From: ";
cout<<b[n].from<<" to "<<b[n].to<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Departure: ";
cout<<b[n].Captian_Departure_Timing<<" O'clock"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total seat: ";
cout<<s<<endl;
Captian_Total_Fare=30*s;
Captian_Total_Fare=Captian_Total_Fare+(Captian_Total_Fare*.12);
TotalSale=TotalSale+Captian_Total_Fare;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total Captian_Total_Fare(with 12%vat): ";
 
cout.setf(ios::showpoint);
cout.precision(3);
cout.setf(ios::fixed,ios::floatfield);
cout.width(8);
cout<<Captian_Total_Fare<<endl;
 
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Thank You!!!"<<endl<<endl;
 
			}
	 }
 }
system("PAUSE");
system("CLS");
 
}
 
int main()
 {
	int w,g=1;
 while(g){
 cout<<"\t\t\t\tBus Ticketing System\n";
 
 cout<<" Captian_Bus_Registration\n\t\t\t 2 :: List Available Bus\n\t\t\t 3 => Book Tickets\n\t\t\t 4 => CaptianExit";
 cout<<"\n\n\t\t Enter your choice: ";
 cin>>w;
 switch(w){
 case 1:
	b[p].Captian_Bus_Registration();
 
 break;
 case 2:
	 b[0].show();
 break;
 case 3:
	b[p].book();
 
 break;
 case 4:
	 {
g=0;
 
cout<<endl<<"Total Sales:"<<TotalSale<<endl;
break;
	 }
 }
}
return 0;
}
