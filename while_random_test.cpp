#include<iostream>
using namespace std;
int main()
{
    int hour = 8;
    int random;
    while(cin>>random)
    {
        
        while (random > 1)
	  {
		while (random % 2 != 0)
		{
			random = random * 3 + 1;
            cout<<random<<", ";
		}
		while (random % 2 == 0)
		{
			random = random / 2;
			cout<<random<<", ";
		}
		if (hour - random > 4)
		{
			if (hour + random < 11)
			{
				printf("Malicious Behavior!\n");
			}
		}
	}
    cout<<random<<endl;    
        
    }    
    return 0;
}     
