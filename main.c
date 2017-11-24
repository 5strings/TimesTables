//
//  main.c
//  TimesTables using ForLoop
//
//  Created by Eun Jae Lee on 24/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main() {

    int a,b,c;
    
    for (a=1; a<=12; a++) {
        for (b=1; b<=12; b++) {
            c = a*b;
            printf("%d x %d = %d \n",a,b,c);
        }
    }
    getchar();
}
