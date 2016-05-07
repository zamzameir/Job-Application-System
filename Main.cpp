#include <windows.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <cmath>

#include "header/applicant_section.h"
#include "header/display_message.h"
#include "header/applicant_data.h"
#include "header/splash_screen.h"
#include "header/news_section.h"
#include "header/job_section.h"
#include "header/job_data.h"
#include "header/license.h"
#include "header/about.h"
#include "MMSystem.h"

inline int  displayCredit (int,char**);
inline void initialize (int,char**);
inline void databaseProfile (void);
inline void display_splash (void); // splash function
inline void printmessagedb (void);
inline void printmessage (void);
inline void userDatabase (void);
inline void deleteData (void);
inline void gotoxy (int,int); // loading position
inline void resetData (void);
inline void viewData (void);
inline void peekData (void);
inline void profile (void);
inline void license (void);
inline void load (char[]); // loading function
inline void credit (void);
inline void about (void);
inline void exit (void);
inline void info (void);

char** argv;
int argc;
int randNo;

using namespace std;

class StartUp // run at startup
{
public:
   StartUp (void)
   { 
      char buffer [] = "Welcome...";
      system("mode con: cols=87 lines=20");
      system("color f0");
      system("title Final Project");
      displayCredit(argc,argv); 
      display_splash();
      load(buffer);
      PlaySound(TEXT("sound/welcome.wav"), NULL, SND_SYNC);
   }
};
StartUp startup;

int main (void)
{	
   system("mode con: cols=87 lines=20"); // set windows size
   system("color f0");
   system("title Final Project");
   int index;
   char choice;
   char view [6][256] = { "News & announcement","Employment application","Applicant data","Restart system","License","About" };
						 
   srand (time (NULL));
   randNo = 100 + rand () % (200-101); // random number
   int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);	// get current date
   
   do
 {
    system ("cls");
    printmessage ();
    cout << "  Your ID. " << randNo << "\t\t\t\t\t\t" << "\tDATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
    cout << " Select an action\n";
    cout << " ----------------\n\n";
	
    for (index = 0; index < 6; ++index)
    cout << " " << index+1 << " - " << view[index] << "\n"; // display view
    cout << " X - Exit\n";
		
    cout << "\n Make a choice > ";
    fflush(stdin);
    choice = getch();
	
    if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='x' && choice !='X')
    cout << "\a";
	
    char buffer [] = "Restarting program...";
			
    switch (choice) 
    {
       case '1' : info();break;
       case '2' : profile();break;
       case '3' : databaseProfile();break;
       case '4' : system("cls");load(buffer);StartUp();main();break;
       case '5' : system("cls");license();break;
       case '6' : about();break;
       case 'x' : 
       case 'X' : exit();break;
    }

 } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice !='6' && choice != 'x' && choice != 'X');
   
   return 0;
}

// END

