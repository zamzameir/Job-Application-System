#include <iostream>
#include <ctime>

extern int main ();

using namespace std;

void info (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
   char choice;
   char msg [7][256] = { "Calling for fresh graduates! our company needs you!",
   "Job application is open until 31 DEC 2016","Position offered : Lead Engineer & System Engineer",
   "Offered salary : MYR 15K","Your resume must be submitted directly through our system", 
   "Interview and acceptance within 2 weeks of submission","Submit now while chance last!" };
   do
 {
    system ("cls");
    cout << "\n";
    cout << " CURRENT NEWS AS OF " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n";
    cout << " ____________________________\n\n";
    cout << " Hello. Thank you for visiting our site" << endl;
    cout << " Express Engineering is one of the largest and best performing" << endl; 
    cout << " contract manufacturing solution suppliers to the Oil & Gas market." << endl;
    cout << " We have a few announcement for you : " << endl << endl;
	
    /*<------- Display msg array ------->*/
	 
    for (int i = 0; i < 7; i++)
     {
       cout << " " << i+1 << " - " << msg[i] << "\n";
     }
		
    cout << "\n\n Type X to go back > ";
    fflush(stdin);
    choice = getch();
	
    if (choice !='x' && choice !='X')
    cout << "\a";
	
    switch (choice) 
    {
      case 'x' : 
      case 'X' : main();break;
    }

 }  while (choice != 'x' && choice != 'X');

    return;
}

