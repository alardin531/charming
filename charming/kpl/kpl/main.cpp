//
//  main.cpp
//  kpl
//
//  Created by s20181102934 on 2019/6/19.
//  Copyright © 2019 tod new. All rights reserved.
//

#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream huk("/Users/s20181102934/Desktop/timi.doc ");
    if(huk.is_open()){
        huk<<"aha you win"<<endl;
        huk.close();
    }
    return 0;
}
