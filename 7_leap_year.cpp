// check if a given year is leap year or not

/*
Leap year is a year where we have 29 days instead of 28 in the month of february
Read more here : https://docs.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year
*/
#include<iostream>

int main(void)
{
    int year;
    std::cin >> year;

    // detailed implemantation for beginners

    /*
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "leap";
            }
            else
            {
                std::cout << "not leap";
            }
        }
        else{
            std::cout << "leap";
        }
    }
    else
    {
        std::cout << "not leap";
    }
    */

   // advanced implementation

   if((year%4==0) && (year%100!=0) || (year%400==0)){
       std::cout<<"leap"<<std::endl;
   }
   else
   {
       std::cout<<"not leap"<<std::endl;
   }
}
