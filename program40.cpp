#include<iostream>
using namespace std;
#define PERSONS_LIMIT 50
int n=0;
int d1=0;
int p1=0;
int p2=0;
int g=0;
int o=0;
int d2=0;
class hospital
{
	public:
		char name[20];
		char gender[10];
		int age;
		char grp[5];
		char date[20];
		char day[20];
};
hospital obj[PERSONS_LIMIT];
void input()
	{
    if(n<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[n].name;
			cout<<"\n enter your gender:";
			cin>>obj[n].gender;
			cout<<"\n enter your age:";
			cin>>obj[n].age;
			cout<<"\n enter blood group:";
			cin>>obj[n].grp;
			cout<<"\n enter the date:";
			cin>>obj[n].date;
			cout<<"\n enter the day:";
			cin>>obj[n].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			n++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input1()
	{
    if(d1<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[d1].name;
			cout<<"\n enter your gender:";
			cin>>obj[d1].gender;
			cout<<"\n enter your age:";
			cin>>obj[d1].age;
			cout<<"\n enter blood group:";
			cin>>obj[d1].grp;
			cout<<"\n enter the date:";
			cin>>obj[d1].date;
			cout<<"\n enter the day:";
			cin>>obj[d1].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			d1++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input2()
	{
    if(p1<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[p1].name;
			cout<<"\n enter your gender:";
			cin>>obj[p1].gender;
			cout<<"\n enter your age:";
			cin>>obj[p1].age;
			cout<<"\n enter blood group:";
			cin>>obj[p1].grp;
			cout<<"\n enter the date:";
			cin>>obj[p1].date;
			cout<<"\n enter the day:";
			cin>>obj[p1].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			p1++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input3()
	{
    if(p2<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[p2].name;
			cout<<"\n enter your gender:";
			cin>>obj[p2].gender;
			cout<<"\n enter your age:";
			cin>>obj[p2].age;
			cout<<"\n enter blood group:";
			cin>>obj[p2].grp;
			cout<<"\n enter the date:";
			cin>>obj[p2].date;
			cout<<"\n enter the day:";
			cin>>obj[p2].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			p2++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input4()
	{
    if(g<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[g].name;
			cout<<"\n enter your gender:";
			cin>>obj[g].gender;
			cout<<"\n enter your age:";
			cin>>obj[g].age;
			cout<<"\n enter blood group:";
			cin>>obj[g].grp;
			cout<<"\n enter the date:";
			cin>>obj[g].date;
			cout<<"\n enter the day:";
			cin>>obj[g].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			g++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input5()
	{
    if(o<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[o].name;
			cout<<"\n enter your gender:";
			cin>>obj[o].gender;
			cout<<"\n enter your age:";
			cin>>obj[o].age;
			cout<<"\n enter blood group:";
			cin>>obj[o].grp;
			cout<<"\n enter the date:";
			cin>>obj[o].date;
			cout<<"\n enter the day:";
			cin>>obj[o].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			o++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void input6()
	{
    if(d2<PERSONS_LIMIT)
       	{
            cout<<"\n enter your information:";
			cout<<"\n enter your name:";
			cin>>obj[d2].name;
			cout<<"\n enter your gender:";
			cin>>obj[d2].gender;
			cout<<"\n enter your age:";
			cin>>obj[d2].age;
			cout<<"\n enter blood group:";
			cin>>obj[d2].grp;
			cout<<"\n enter the date:";
			cin>>obj[d2].date;
			cout<<"\n enter the day:";
			cin>>obj[d2].day;
			cout<<"\n your appointment booked successfully.";
			cout<<"\n";
			d2++;
		}
		else
		{
			cout<<"\n sorry! limit is only upto "<<PERSONS_LIMIT;
		}
	}
void neurology()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in neurology section:"<<n;
		for(int i=0;i<n;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void dermatology()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in dermatology section:"<<d1;
		for(int i=0;i<d1;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void physiotherapy()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in physiotherapy section:"<<p1;
		for(int i=0;i<p1;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void phyciatrist()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in phyciatrist section:"<<p2;
		for(int i=0;i<p2;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void general()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in general medicine section:"<<g;
		for(int i=0;i<g;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void ortho()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in orthopedics section:"<<o;
		for(int i=0;i<o;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}
void dentist()
	{
		cout<<"\n ***//VIEW HOSPITAL DATA//***";
		cout<<"\n total number of persons in dentist section:"<<d2;
		for(int i=0;i<d2;i++)
		{
			cout<<"\n name:"<<obj[i].name;
			cout<<"\n gender:"<<obj[i].gender;
			cout<<"\n age:"<<obj[i].age;
			cout<<"\n blood group:"<<obj[i].grp;
			cout<<"\n date:"<<obj[i].date;
			cout<<"\n day:"<<obj[i].day;
			cout<<"\n";
		}
	}	
int main()
{
	cout<<"\n ***//HOSPITAL APPOINTMENT SYSTEM//***";
    int choice;
    int ch;
    int c;
	do
	{
	cout<<"\n 1.book your appointment.";
	cout<<"\n 2.view all booked appointments.";
	cout<<"\n 3.for exiting.";
	cout<<"\n enter your choice here from above list:";
	cin>>choice;
	switch(choice)
	{
		case 1: do
			 	{ 
		        cout<<"\n *here is the list of available sections in our hospital*";
				cout<<"\n 1.neurology section.";
				cout<<"\n 2.dermatology section.";
				cout<<"\n 3.physiotherapy section.";
				cout<<"\n 4.phychiatrist section.";
				cout<<"\n 5.general medicine section.";
				cout<<"\n 6.orthopedics section.";
				cout<<"\n 7.dentist section.";
				cout<<"\n 8.exiting.";
				cout<<"\n enter your choice here from above list:";
				cin>>ch;
				switch(ch)
				{
					case 1: cout<<"\n neurology section";
					        input();
					break;
					case 2: cout<<"\n dermatology section";
					        input1();
					break;
					case 3: cout<<"\n physiotherapy section";
					        input2();
					break;
					case 4: cout<<"\n phychiatrist section";
					        input3();
					break;
					case 5: cout<<"\n general medicine section";
					        input4();
					break;
					case 6: cout<<"\n orthopedics section";
					    	input5();
					break;
					case 7: cout<<"\n dentist section";
							input6();
					break;
					case 8: cout<<"\n exiting...";
					break;
					default: cout<<"\n sorry! this branch is not available.";
					break;
				}
				}while(ch!=8);
		break;
		case 2: do
		        {
				    cout<<"\n 1.neurology"<<"\n 2.dermatology"<<"\n 3.physiotherapy"<<"\n 4.phyciatrist";
					cout<<"\n 5.general"<<"\n 6.ortho"<<"\n 7.dentist"<<"\n 8.exit";	
		        	cout<<"\n enter your choice:";
		        	cin>>c;
		        	switch(c)
		        	{
		        		case 1: neurology();
		        		break;
		        		case 2: dermatology();
		        		break;
		        		case 3: physiotherapy();
		        		break;
		        		case 4: phyciatrist();
		        		break;
		        		case 5: general();
		        		break;
		        		case 6: ortho();
		        		break;
		        		case 7: dentist();
		        		break;
		        		case 8: cout<<"\n exiting....";
		        		break;
		        		default: cout<<"\n enter valid choice.";
		        		break;
					}
				}while(c!=8);
		break;
		case 3: cout<<"\n exiting...";
		break;
		default: cout<<"\n plz! enter valid choice.";
		break;
	}
}while(choice!=3);
}