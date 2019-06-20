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
    int a,b;
    ofstream huk("/Users/s20181102934/Desktop/timi.doc ");
    ifstream rand("/Users/s20181102934/Desktop/qieshengxuan.txt");
    rand>>a>>b;
    cout<<"c ="<<a+b<<endl;
    /*if(rand.is_open()){
        //cout<<"aha you win"<<endl;
        rand>>a>>b;
        cout<<a<<"   "<<b<<endl;
        rand.close();
    }*/
    if(huk.is_open()){
        huk<<a+b+90<<endl;
        huk.close();
    }
    return 0;
}
