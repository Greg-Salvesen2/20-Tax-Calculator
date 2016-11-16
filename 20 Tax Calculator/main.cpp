//
//  main.cpp
//  20 Tax Calculator
//
//  Created by Greg Salvesen on 11/15/16.
//  Copyright © 2016 DVS. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    std::cout << "This program calculates your total, including sales tax." << std::endl;
    float itemCost = 0.0;
    float taxPercent = 0.0;
    
    // Ask the user for the value of the items and the tax percentage
    std::cout << "Enter the value of your item(s): ";
    std::cin >> itemCost;
    std::cout << "Enter the tax percentage: ";
    std::cin >> taxPercent;
    
    // Calculate the tax and add the tax to the item cost in order to get the total
    float tax = floor((itemCost * (taxPercent / 100)) * 100 + 0.5) / 100;
    float total = itemCost + tax;
    
    std::cout << total << std::endl;
    
    return 0;
}
