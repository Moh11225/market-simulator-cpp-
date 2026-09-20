# Market Simulator

A console-based C++ program that simulates pricing and profit scenarios for a grocery market.

The program collects store information, displays store departments and hours,
and calculates wholesale costs, regular sales, loyalty sales, profits, and
profit differences for several grocery items.

## Features

- Uses C++ structs to organize market and item data
- Accepts user input for market name, loyalty card cost, and starting budget
- Simulates purchases for multiple grocery items
- Calculates:
  - Wholesale cost
  - Regular sale total
  - Loyalty sale total
  - Regular profit
  - Loyalty profit
  - Profit difference
- Applies 7% sales tax
- Formats monetary values to two decimal places

## Items Included

- Bread
- Apples
- Soda
- Toilet paper

## Concepts Practiced

- C++ structs
- Variables and data types
- User input
- Constants
- Arithmetic calculations
- `iomanip`
- `cmath`
- Formatted console output
- Debugging

## How to Run

Compile the program with a C++ compiler:

```bash
g++ market.cpp -o market
./market
