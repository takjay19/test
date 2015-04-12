//
//  main.cpp
//  L01OOP
//
//  Created by chanWenJay on 15/4/12.
//  Copyright (c) 2015年 JC. All rights reserved.
//

#include <iostream>
#include "People.h"

//class People {
//    
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[]) {
    
    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}
