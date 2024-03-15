#include <iostream>

using namespace std;

int main()
{
    double total_Cost_Merchandise,Salary,rent,electricity_cost;

    cout<<"Welcome to linda's cosmetic"<<endl;
    cout<<"Enter the total cost of the merchandise: R";
    cin>>total_Cost_Merchandise;
    cout<<"Enter the empoyees salary including linda: R";
    cin>>Salary;
    cout<<"Enter the yearly rent: R";
    cin>>rent;
    cout<<"Enter the estimated electricity cost: R";
    cin>>electricity_cost;

    double total_Expenses=total_Cost_Merchandise+Salary+rent+electricity_cost;

    double netProfit= total_Expenses*0.1;

    double newProfit = netProfit/0.85;

    double markup = (newProfit+ total_Expenses)/total_Cost_Merchandise;

     cout<< "The merchandise should be R"<< markup << " so that linda can get the desired profit"<<endl;

    return 0;
}
