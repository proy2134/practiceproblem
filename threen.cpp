/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: proy
 *
 * Created on April 9, 2016, 1:58 AM
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned int i, j;
   // bool swap =false;
    unsigned int t;
    while(scanf("%d %d",&i,&j) == 2)
    {
        unsigned int ti = i;
        unsigned int tj = j;
       
        if(i>j)
        {
            //swap =true;
            t = i;
            i = j;
            j = t;
            
        }
        unsigned int cnt = 0;
        unsigned int max = 0;
        for (unsigned int x = i;x<=j;x++)
        {
            unsigned int n = x;
            cnt = 1;
            while(n != 1)
            {
                if(n & 1)
                {
                    int p = n;
                    n <<= 1;
                    n += p+1;
                }
                else
                {
                    n >>= 1;
                }
                
                cnt++;
                //cout<<"N:"<<i<<"cnt:"<<cnt<<endl;
            }
            if(max<cnt)
            {
                max = cnt;
            }
        }
        
        
        
        cout<<ti<<" "<<tj<<" "<<max<<endl;
    }

    return 0;
}

