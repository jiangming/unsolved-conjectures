#include<iostream>
#include<cmath>
using namespace std;
double loop (double loop_num, double j)
{
    double base =loop_num + 1.0;
    base = base * base;
    base = base *4;
    return pow(base, j);
    
}    
int main ()
{
    int n;
    while (cin>>n)
    {
       double temp = n+ 0.0;
       double total_path = 0.0;
       for (int i=0;i<=n;i++)
        {
            double j = i + 0.0;
            total_path = total_path + loop(temp, j);  
        }     
       cout<<"Total potential paht num :"<< total_path<<endl;  
        
    }    
    return 0;
}    
