#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <cctype>
#include <ctime>

extern int main ();

using namespace std;

void gotoxy (int x, int y)
{
   /*<------- Center animation ------->*/
   
   system("title Final Project");
   system("color f0");
   COORD coord;
   coord.X = x;
   coord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

   return;
}
void load (char buffer[])
{
   system("title Final Project");
   system("color f0");
   int row,col,r,c,q;
   
   /*<------- Animation ------->*/
   
   gotoxy(36,14);
   printf("%s",(buffer));
   gotoxy(30,15);
   
   /*<------- To display character slowly ------->*/
   
   for(r=1;r<=20;r++)
   {
      for(q=0;q<=5000000;q++);
      printf("%c",177);
   }

   return;
}
void display_splash (void)
{
   system("title Final Project");
   system("color f0");
   cout << string( 10, '\n' );
   cout << "\n\n";
   cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              �                                                    � \n"
    	  "              �           EXPRESS ENGINEERING SDN. BHD.            � \n"
    	  "              �    LEVEL 16, TOWER 1, PETRONAS TWIN TOWERS, KLCC   � \n"
    	  "              �            50088 KUALA LUMPUR MALAYSIA             � \n"
    	  "              �                                                    � \n"
    	  "              +----------------------------------------------------+ \n";
   cout << string( 8, '\n' );

   return;
}
void exit (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Exiting...";
   cout << string( 10, '\n' );
   cout << "\n\n\n\n";
   cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              �                                                    � \n"
    	  "              �             THANK YOU FOR CHOOSING US              � \n"
    	  "              �                                                    � \n"
    	  "              +----------------------------------------------------+ \n";
   cout << string( 8, '\n' );
   load(buffer);
   PlaySound(TEXT("sound/goodbye.wav"), NULL, SND_SYNC);

   return;
}
