#include<iostream>
#include <iomanip>
#include<conio.h>
using namespace std;

int main()
{
	double box, side, premium, gen, total;
	double boxtotal,sidetotal,premiumtotal,gentotal;
	cout<<"Ticket Price" << endl;
	cout<<"Type:\t\t\t\tPrice" << endl;
	cout<<"Box\t\t\t\t250$" << endl;
	cout<<"Sideline\t\t\t100$"<< endl;
	cout<<"Premium\t\t\t\t50$"<< endl;
	cout<<"GenAd\t\t\t\t25$"<< endl;
	
	cout<<"\nTICKET SALES \n\n";
	cout<<"Ticket Type: Please input number of tickets" << endl;
	cout<<"Box (250$): ";
	cin >> box;
	cout<<"Sideline (100$): ";
	cin>> side;
	cout<<"Premium (50$): ";
	cin>> premium;
	cout<<"Gen Ad (25$): ";
	cin>> gen;
	cout<< "\nTotal Sold\n";
	cout<<"Box: " << 250*box << "$" << endl;
	cout<<"Sideline: " << 100*side << "$" << endl;
	cout<<"Premium: " << 50*premium << "$" << endl;
	cout<<"GenAd: " << 25*gen << "$" << endl;

	
	total= (box*250)+(side*100)+(premium*50)+(gen*25);
	cout<<"\nGrand total: "<<total << "$" <<endl;
	
	getch();
	return 0;	
}
