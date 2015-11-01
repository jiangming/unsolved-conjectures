#include<iostream>
using namespace std;
int main()
{
   // int hour = 8;
    unsigned int random;
    int steps;
    while(cin>>random)
    {
        steps = 1;        
        while (random !=1)
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

