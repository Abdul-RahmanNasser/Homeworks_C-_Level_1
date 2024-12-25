// Problem #34: Commission Percentage.
#include <iostream>
using namespace std;
void read_total_sales(float& total_sales)
{
	cout << "Please, enter the total sales: ";
	cin >> total_sales;
}
float print_percentage(float& total_sales)
{
	float percentage;
	if (total_sales >= 1000000)
	{
		percentage = 0.01;
	}
	else if (total_sales >= 500000 && total_sales <= 1000000)
	{
		percentage = 0.02;
	}
	else if (total_sales >= 100000 && total_sales <= 500000)
	{
		percentage = 0.03;
	}
	else if (total_sales >= 50000 && total_sales <= 100000)
	{
		percentage = 0.05;
	}
	else if (total_sales < 50000)
	{
		percentage = 0;
	}
	return percentage;
}
float calculate_commission(float& total_sales, float percentage)
{
	float total_commission;
	total_commission = total_sales * percentage;
	return total_commission;
}
int main()
{
	float total_sales, percentage, total_commission;
	read_total_sales(total_sales);
	percentage = print_percentage(total_sales);
	total_commission = calculate_commission(total_sales, percentage);
	cout << "The total commission is " << total_commission << "." << endl;
	return 0;
}