//
//  main.cpp
//  filesystem
//
//  Created by 谈修泽 on 2020/6/9.
//  Copyright © 2020 谈修泽. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//char s[20];

char* getname()
{
    char* s = (char*)malloc(20);
    strcpy(s, "user1");
    return s;
}

int main()
{
    char name[20];
    strcpy(name, getname());
    printf("%s\n",name);
}
