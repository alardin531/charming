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
    float c,d;
    ofstream op("/Users/s20181102934/Desktop/uuu.txt");
    ifstream ip("/Users/s20181102934/Desktop/iii.txt");
    if(ip.is_open()){
        ip>>a>>b>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
        
    }
    if(op.is_open()){
        op<<"the final result is : "<<(a+b+c+d)/4;
        cout<<(a+b+c+d)/4<<endl;
    }
    return 0;
}
