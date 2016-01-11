//
//  Flower.cpp
//  deneme
//
//  Created by Adnan Şenyurt on 11.01.2016.
//  Copyright © 2016 Adnan Şenyurt. All rights reserved.
//

#include "Flower.hpp"
int Flower::addLeaf(int count) {
    leafs += count;
    return leafs;
};

int Flower::getLeaves() {
    return leafs;
}

