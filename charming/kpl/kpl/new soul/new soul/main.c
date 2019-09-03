//
//  main.c
//  new soul
//
//  Created by s20181102934 on 2019/8/27.
//  Copyright © 2019 new soul. All rights reserved.
//

#include <stdio.h>

int main(){
    int a=0;
    int n;
    scanf("%d %d",&m,&n);
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(i%2==0) printf("$");
            else printf(" ");
        }
        printf("\n");
    }
}
