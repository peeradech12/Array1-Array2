#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void calprice(float price[5][3]);
void display(string name[5],float price[5][3]);

int main()
{
	string name[5];
	float price[5][3] = {};
	for (int i = 0;i < 5;i++)
	{
	cout << "Enter Product Name : ";
	cin >> name[i];
	cout << "\tprice : ";
	cin >> price[i][0];
	}
	calprice(price);
	display(name,price);
	return 0;
}

void calprice(float price[5][3])
{
	for (int i = 0 ;i < 5;i++)
	{
		price [i][1] = price[i][0] * 0.07;	
		price [i][2] = price[i][1] + price[i][0];
	}

}
void display(string name[5],float price[5][3])
{
	cout << "No.\tproduct\t\tprice\t\tvat7%\t\tNet\n";
	for (int i = 0 ;i < 5 ; i++)
	{
	cout << fixed << setprecision(2)<< i+1 << "\t" << name[i];
	cout << "\t\t" << price[i][0] << "\t\t" <<  price[i][1] << "\t\t" << price[i][2];  
	cout << endl;
	}





}