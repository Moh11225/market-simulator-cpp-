/**
 * @file    market.cpp
 * @author  Mohamed Bah 
 * @date    2026-09-20
 * @brief   Collects market information and simulates sales and profits. 
 *
 */


#include <iostream>
using namespace std;
#include <iomanip> 
#include <cmath>

// Structure for the market

struct Market
{
    string StoreName;
    double LoyaltyCardCost;
    double Budget;
};

struct Item
{
    string name;
    string quantityPrompt;
    double wholesalePrice;
    double regularPrice;
    double memberPrice;
    
};

int main()
{
    const string BREAK_MESSAGE = "=============================" ;
    
    
    Market info;
    
    cout << "Enter market name: "; 
    getline(cin, info.StoreName);
    cout << "Enter the cost of the loyalty card: $";
    cin >> info.LoyaltyCardCost;
    cout << "Enter the store's starting budget: $";
    cin >> info.Budget;

    cout << fixed << setprecision(2);

    cout << "Market Information" << endl;
    cout << BREAK_MESSAGE << endl;
    cout << "Name: " << info.StoreName << endl; 
    cout << "Loyalty Card Cost: $" << info.LoyaltyCardCost << endl;
    cout << "Starting budget: $" << info.Budget << endl;

    cout << BREAK_MESSAGE << endl;


// Market Hours and Departments info    
    const string STORE_HOURS = "7:00 am to 10:00 pm";
    const string DEPT_1 = "Frozen Foods";
    const string DEPT_2 = "Snacks";
    const string DEPT_3 = "Cleaning Supplies" ;
    const string DEPT_4 = "Health & Beauty";
    

    cout << "\n" << info.StoreName << "'s Hours and Departments" << endl;
    cout << BREAK_MESSAGE << endl;
    cout << "Hours: " << STORE_HOURS << endl << endl;
    cout << "Department 1: " << DEPT_1 << endl;
    cout << "Department 2: " << DEPT_2 << endl;
    cout << "Department 3: " << DEPT_3 << endl;
    cout << "Department 4: " << DEPT_4 << endl;
    cout << BREAK_MESSAGE << endl;

    cout << fixed << setprecision(2);
    int quantity;
    double wholesaleCost;
    double regularSubtotal;
    double regularSale;
    double loyaltySubtotal;
    double loyaltySale;
    double regularProfit;
    double loyaltyProfit;
    double profitDifference;
    Item bread =
    {
        "Bread Scenario", 
        "How many loaves of bread would you like: ",
        1.50,
        2.79,
        2.49
    };
    Item apples = 
    {
        "Bag Of Apples Scenario",
        "How many bags of apples would you like: ",
        2.80,
        4.29,
        3.89

        
    };
     Item sodas = 
    {
        "Bottle Of Soda Scenario",
        "How many bottles of sodas would you like: ",
        1.10,
        1.99,
        1.79

        
    };
     Item toiletPaper = 
    {
        "Toilet Paper Scenario",
        "How many packs of toilet paper would you like: ",
        3.20,
        5.49,
        4.99

        
    };


    cout << bread.name << endl;
    cout << BREAK_MESSAGE << endl;
    cout << bread.quantityPrompt;
    cin >> quantity;

    wholesaleCost = (quantity * bread.wholesalePrice);
   
   
    regularSubtotal = quantity * bread.regularPrice;
    regularSale = regularSubtotal * 1.07;
    regularProfit = regularSubtotal - wholesaleCost;
   
    loyaltySubtotal = (quantity * bread.memberPrice) + info.LoyaltyCardCost;

loyaltySale = loyaltySubtotal * 1.07;
loyaltyProfit = loyaltySubtotal - wholesaleCost;

profitDifference = abs(regularProfit - loyaltyProfit);

cout << "\nWholesale Cost: $" <<wholesaleCost << endl;
cout << "\nRegular Sale: $" << regularSale << endl;
cout << "Loyalty Sale: $" << loyaltySale << endl;
cout << "\nRegular Profit: $" << regularProfit << endl;
cout << "Loyalty Profit: $" << loyaltyProfit << endl;
cout << "\nProfit Difference: $" <<profitDifference << endl;
cout << BREAK_MESSAGE << endl;

// Apples
    cout << apples.name << endl;
    cout << BREAK_MESSAGE << endl;
    cout << apples.quantityPrompt;
    cin >> quantity;

    wholesaleCost = (quantity * apples.wholesalePrice);
   
   
    regularSubtotal = quantity * apples.regularPrice;
    regularSale = regularSubtotal * 1.07;
    regularProfit = regularSubtotal - wholesaleCost;
   
    loyaltySubtotal = (quantity * apples.memberPrice) + info.LoyaltyCardCost;

loyaltySale = loyaltySubtotal * 1.07;
loyaltyProfit = loyaltySubtotal - wholesaleCost;

profitDifference = abs(regularProfit - loyaltyProfit);

cout << "\nWholesale Cost: $" <<wholesaleCost << endl;
cout << "\nRegular Sale: $" << regularSale << endl;
cout << "Loyalty Sale: $" << loyaltySale << endl;
cout << "\n Regular Profit: $" << regularProfit << endl;
cout << "Loyalty Profit: $" << loyaltyProfit << endl;
cout << "\nProfit Difference: $" <<profitDifference << endl;
cout << BREAK_MESSAGE << endl;

// Bottle Of Soda
    cout << sodas.name << endl;
    cout << BREAK_MESSAGE << endl;
    cout << sodas.quantityPrompt;
    cin >> quantity;

    wholesaleCost = (quantity * sodas.wholesalePrice);
   
   
    regularSubtotal = quantity * sodas.regularPrice;
    regularSale = regularSubtotal * 1.07;
    regularProfit = regularSubtotal - wholesaleCost;
   
    loyaltySubtotal = (quantity * sodas.memberPrice) + info.LoyaltyCardCost;

loyaltySale = loyaltySubtotal * 1.07;
loyaltyProfit = loyaltySubtotal - wholesaleCost;

profitDifference = abs(regularProfit - loyaltyProfit);

cout << "\nWholesale Cost: $" <<wholesaleCost << endl;
cout << "\nRegular Sale: $" << regularSale << endl;
cout << "Loyalty Sale: $" << loyaltySale << endl;
cout << "\nRegular Profit: $" << regularProfit << endl;
cout << "Loyalty Profit: $" << loyaltyProfit << endl;
cout << "\nProfit Difference: $" <<profitDifference << endl;
cout << BREAK_MESSAGE << endl;

//Pack of Toilet Paper
    cout << toiletPaper.name << endl;
    cout << BREAK_MESSAGE << endl;
    cout << toiletPaper.quantityPrompt;
    cin >> quantity;

    wholesaleCost = (quantity * toiletPaper.wholesalePrice);
   
   
    regularSubtotal = quantity * toiletPaper.regularPrice;
    regularSale = regularSubtotal * 1.07;
    regularProfit = regularSubtotal - wholesaleCost;
   
    loyaltySubtotal = (quantity * toiletPaper.memberPrice) + info.LoyaltyCardCost;

loyaltySale = loyaltySubtotal * 1.07;
loyaltyProfit = loyaltySubtotal - wholesaleCost;

profitDifference = abs(regularProfit - loyaltyProfit);

cout << "\nWholesale Cost: $" <<wholesaleCost << endl;
cout << "\nRegular Sale: $" << regularSale << endl;
cout << "Loyalty Sale: $" << loyaltySale << endl;
cout << "\nRegular Profit: $" << regularProfit << endl;
cout << "Loyalty Profit: $" << loyaltyProfit << endl;
cout << "\nProfit Difference: $" <<profitDifference << endl;
cout << BREAK_MESSAGE << endl;


    

    

    






    return 0;
}

