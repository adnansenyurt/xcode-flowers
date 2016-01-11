//
//  main.cpp
//  deneme
//
//  Created by Adnan Şenyurt on 11.01.2016.
//  Copyright © 2016 Adnan Şenyurt. All rights reserved.
//

#include <iostream>
#include "Flower.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\nThis is C++\n";
    Flower *myflower;
    myflower = new Flower;
    myflower->addLeaf(3);
    myflower->addLeaf(5);
    myflower->addLeaf(5);
    std::cout << myflower->getLeaves() << "\n";
    return 0;
}
