#include<iostream>
using namespace std;
int main()
{
   // int hour = 8;
    int random;
    int n;
    int steps=0;
    while(cin>>n)
    {
     for( int i=n; i<n+100000;i++)   
      {  
        steps=0; 
        random=i;       
  while (random != -1 && random != -5 && random != -17 )
	  {
		if (random % 2 != 0)
		{
			random = random * 3 + 1;
           // cout<<random<<", ";
            steps++;
		}
		else 
		{
			random = random / 2;
		//	cout<<random<<", ";
			steps ++;
		}
 
	 }
	   if( steps >=300)
       cout<<endl<<"input "<<i<<" total loop steps:"<<steps<<endl;   
    }//end of for   
    cout<<"end of loop"<<endl;    
  }    
    return 0;
}     

