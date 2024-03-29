#include <windows.h>
#include <process.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctype.h>
#include <fstream>
#include <string>
#include <cstdio>
#include <string>
#include <ctime>

extern inline void load (char[]);
extern inline void profile ();
extern inline void gotoxy ();
extern int main ();
extern int randNo;
   
using namespace std;

void viewData (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Getting data...";
   char c,exit;
   
   /*<------- Enable scroll bar ------->*/
   
   COORD newSize = {100,9999};
   SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), newSize);
   
   /*<------- Open applicant.dat file ------->*/
   
   FILE *info;
   info=fopen("data/applicant.dat","a+");
   system("cls");
   load(buffer);
  
   do 
 {
    system("cls");
    info=fopen("data/applicant.dat","r");
    
    /*<------- If applicant.dat file empty ------->*/
    
    if(fscanf(info,"%c",&c)==EOF)
   {
      printmessagedb ();
      cout << endl << " No data was found" << endl << endl;
   }
    
     /*<-------Display applicant.dat file ------->*/
     
    do
   {
      putchar(c=getc(info));
   }
      while(c!=EOF);
      fclose(info);
  
   cout << "Type X to go back > ";
   exit = getch();
   
   if (exit !='x' && exit !='X')
   cout << "\a";
	
   switch (exit) 
   {
     case 'x' : 
     case 'X' : break;
   }
		
 } while (exit != 'x' && exit != 'X');

   return;
}
void deleteData (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Deleting data...";
   system("cls");
   load(buffer);
   system("cls");
   
   /*<------- Clear applicant.dat file ------->*/
    
   std::ofstream ofs;
   ofs.open("data/applicant.dat", std::ofstream::out | std::ofstream::trunc);
   ofs.close();
   system("rm data/applicant.dat");

   return;
}

