#include<iostream>
using namespace std;
int main()
{
   // int hour = 8;
    int random;
    int steps=0;
    while(cin>>random) //random is a negative number
    {
        steps=0;        
        while (random != -1 && random != -5 && random != -17 )
	  {
		if (random % 2 != 0)
		{
			random = random * 3 + 1;
            cout<<random<<", ";
            steps++;
		}
		else 
		{
			random = random / 2;
			cout<<random<<", ";
			steps ++;
		}
	/*	if (hour - random > 4)
		{
			if (hour + random < 11)
			{
				printf("Malicious Behavior!\n");
			}
		}*/
	}
     cout<<endl<<"Total loop steps:"<<steps<<endl;   
        
    }    
    return 0;
}     

