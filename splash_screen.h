#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <cctype>
#include <time.h>
#include <ctime>

extern int main ();

using namespace std;

void gotoxy (int x, int y)
{
    system("title ");
    system("color f0");
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void load (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++); // to display the character slowly
    printf("%c",177);}
}
void load2 (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Getting data...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++); // to display the character slowly
    printf("%c",177);}
}
void load3 (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Deleting data...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++); // to display the character slowly
    printf("%c",177);}
}
void load4 (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Exiting...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++); // to display the character slowly
    printf("%c",177);}
}
void load5 (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Resetting data...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++); // to display the character slowly
    printf("%c",177);}
}
void load6 (void)
{
    system("title ");
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Saving data...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++); // to display the character slowly
    printf("%c",177);}
}
void display_splash (void)
{
        system("title ");
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
}
void adios (void)
{
        system("title ");
        system("color f0");
	cout << string( 10, '\n' );
  	cout << "\n\n\n\n";
  	cout <<
    	"              +----------------------------------------------------+ \n"
    	"              �                                                    � \n"
    	"              �             THANK YOU FOR CHOOSING US              � \n"
    	"              �                                                    � \n"
    	"              +----------------------------------------------------+ \n";
  	cout << string( 8, '\n' );
  	load4();
}
