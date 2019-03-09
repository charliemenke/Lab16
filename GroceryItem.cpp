//
//  GroceryItem.cpp
//  Lab16
//
//  Created by Charlie Menke on 3/7/19.
//  Copyright © 2019 Charlie Menke. All rights reserved.
//

#include <stdio.h>
#include "GroceryCart.hpp"

class GroceryItem : public GroceryCart {
public:
    GroceryItem(int price, char* description, int weight) {
        this->price = price;
        this->description = description;
        this->weight = weight;
    };
    virtual int getPrince() {return -1;};
    virtual const char* getDesription() {return " ";};
private:
    int price;
    char description[];
    int weight;
};


