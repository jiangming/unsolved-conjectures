#include<iostream>
using namespace std;
int main()
{
   // int hour = 8;
    int random;
    int steps=0;
    while(cin>>random)
    {
        steps=0;        
        //while (random > 1)
	 do {
		if (random % 2 == 0)
		{
			//random = random * 3 + 1;
            random = random/2;
            cout<<random<<", ";
            steps++;
		}
		else if (random %3 == 0)
		{
			//random = random / 2;
			random = random/3;
            cout<<random<<", ";
			steps ++;
		}
		else if (random %5 == 0)
		{
			//random = random / 2;
			random = random/5;
            cout<<random<<", ";
			steps ++;
		}
		else
		 {
		    random = 7*random + 1;
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
	}while(random > 1);
     cout<<endl<<"Total loop steps:"<<steps<<endl;   
        
    }    
    return 0;
}     

