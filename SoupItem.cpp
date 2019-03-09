//
//  SoupItem.cpp
//  Lab16
//
//  Created by Charlie Menke on 3/7/19.
//  Copyright © 2019 Charlie Menke. All rights reserved.
//

#include <stdio.h>
#include "GroceryItem.cpp"

class SoupItem : public GroceryItem {
public:
    SoupItem() : GroceryItem(8,"Tj",4) {};
    virtual int getPrince() {
        std::cout << price << "/n";
    };
    const char* getDesription() {return this->description;};
protected:
    int price;
    char description[];
    int weight;
};
