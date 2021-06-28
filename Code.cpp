#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
#define MAX 10
#define INF 99999

void graph();
void aboutproject();
void help();
void trademark();
void opening();
void graphic();
void menu()
{

system("cls");
system("COLOR DF");
int c;
//char ch='y';
do
{
cout<<"\n\t LAN INFRASTRUCTURE DESIGN";
cout<<"\n\t 1. ABOUT PROJECT";
cout<<"\n\t 2. GO To SOFTWARE ";
cout<<"\n\t 3. HELP";
cout<<"\n\t 4. EXIT";
cout<<"\n\t Enter your choice =>";
cin>>c;
switch(c)
{
case 1:aboutproject();
break;
case 2:graph();
break;
case 3:help();
break;
case 4:trademark();
cout<<"\n";
cout<<"\n";
exit(system("pause"));
break;
default: cout<<"\n\t Wrong choice";
cout<<"\n\t Please Enter again";
}
}while(1);

}

void aboutproject(){
	system("cls");
	system("COLOR 4F");
	cout<<"\n\n\t\t\t\t\t===== WELCOME TO LAN INFRASTRUCTURE DESIGN =====";
	Sleep(100);
	cout<<"\n\n\t\t\t\t\t*****SOFTWARE DETAILS*****";
	Sleep(100);
	cout<<"\n\n\t\t\t\t Devloper               : Ayush Karn";
	Sleep(100);
	cout<<"\n\n\t\t\t\t Programming Language   : C++";
	Sleep(10);
	cout<<"\n\n\t\t\t\t Compiler Version / IDE       : MINGW / ATOM";
	Sleep(100);
	cout<<"\n\n\t\t\t\t Thank You for trying this program";
	Sleep(100);
	cout<<"\n\n";
	system("pause");
	menu();
}
void help(){
	system("cls");
	system("COLOR 8F");
	cout<<"\n\t\t\t ===== HELP =====";



cout<<"\n\t\t WELCOME TO LAN INFRASTRUCTURE DESIGN ";
Sleep(10);

cout<<"\n\t\tIn this Project you can find shortest distance b/w two building" ;
Sleep(10);

cout<<"\n\t\t-In first option you can see the information about us" ;
Sleep(10);

cout<<"\n\t\t-In second option you can operate the software." ;
Sleep(10);

cout<<"\n\t\t-In third option you can view Help for the project";
Sleep(10);

cout<<"\n\t\t- In Fourth option you can EXIT." ;
Sleep(10);

cout<<" Press  any  key to continue ";

for (int i=25; i>=1; i--)
{
Sleep(20) ;
}
	cout<<"\n";
	cout<<"\n";
	system("pause");
	menu();
}
void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void trademark()
{
	system("cls");
	system("COLOR 8F");
	int j;

cout<<"\n\n\n\n\n\t LAN INFRASTRUCTURE DESIGN " ;
	 cout<<"\n----- ---------------------------------------------------" ;
cout<<"\n\t\t        AN ART'S  PRODUCTION" ;
cout<<"\n\t\t ---------------------------" ;
cout<<"\n\n\t\t\t  COPYRIGHT @ 2020" ;
cout<<"\n\t\t\t ---------------------" ;
cout<<"\n\n\n\t\t   T H A N K S  F O R  U S I N G" ;
cout<<"\n\n\n\t\t             MY   PROGRAM" ;
cout<<"\n\t\t         ====================" ;
cout<<"\n\t\t          BY  AYUSH KARN";

for(j=6;j<=65;j++)
{
  gotoxy(j,7) ;
putchar(205) ;
gotoxy(j,23) ;
putchar(205) ;
}
gotoxy(6,7);      putchar(201);	    //LOOPS  FOR  BORDERS//
gotoxy(65,7) ;
putchar(187) ;
gotoxy(6,23) ;
putchar(200) ;
gotoxy(65,23);
putchar(188);
for(j=8;j<=22;j++)
{
gotoxy(6,j);
putchar(186);
gotoxy(65,j);
putchar(186);
}
Sleep(200);	                                //GIVING  DELAY//
}
void dijk(int G[MAX][MAX],int n,int start){
	system("cls");
	system("COLOR 9F");
	int cost[MAX][MAX];
	int dist[MAX];
	int visited[MAX];
	int pred[MAX];
	int i,j;
	int count;
	int mindist;
	int nextnode;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(G[i][j]==0){
				cost[i][j]=INF;
			}
			else
			{
				cost[i][j]=G[i][j];
			}
		}
	}
	for(i=0;i<n;i++){
		dist[i]=cost[start][i];
		pred[i]=start;
		visited[i]=0;
	}
	dist[start]=0;
	visited[start]=1;
	count=1;
	while(count<(n-1))
	{ mindist=INF;
		for(i=0;i<n;i++){
			if((dist[i]<mindist)&&(!visited[i])){
				mindist=dist[i];
				nextnode=i;

			}
		}
		visited[nextnode]=1;
		for(i=0;i<n;i++){
			if(!visited[i]){
				if((mindist+cost[nextnode][i])<dist[i]){
					dist[i]=mindist+cost[nextnode][i];//formula
					pred[i]=nextnode;

				}
			}
		}
		count++;
	}
	for(i=0;i<n;i++){
		if(i!=start){
			cout<<"\n\t The distance of Building from "<<start<<" to "<<i<< " is: "<<dist[i];
			cout<<"\n\t The path is :"<<i;
			j=i;
			do{
				j=pred[j];
				cout<<"\n\t <-"<<j;
			}while(j!=start);
			if(dist[i]<10){
				long int price;
				long int price2;
				price=1000*dist[i];
				price2=price+2000;
			cout<<"\n\t Twisted Pair Cable are required";
			cout<<"\n\t Price of Twisted Pair Cable Rs"<<price;
			cout<<"\n\t Local Area Network are required";
			cout<<"\n\t Price of Local Area Network Rs2000";
			cout<<"\n\t Total Price :"<<price2;
		}
		else if(dist[i]>=10 && dist[i]<=50){
			long int price1;
			long int price3;
			price1=2000*dist[i];
			price3=price1+3000+1000;
			cout<<"\n\t Coaxial Cable are required";
			cout<<"\n\t Price of Coaxial Cable Rs"<<price1;
			cout<<"\n\t Metropolitan Area Network are required";
			cout<<"\n\t Price of Metropolitan Area Network Rs3000";
			cout<<"\n\t Repeater are required";
			cout<<"\n\t Price of Repeater Rs1000";
			cout<<"\n\t Total Price :"<<price3;
		}
		else if(dist[i]>50){
			long int price4;
			long int price5;
			price4=3000*dist[i];
			price5=price4+4000+1000;
			cout<<"\n\t Optical fiber are required ";
			cout<<"\n\t Price of optical fiber Rs"<<price4;
			cout<<"\n\t Wide Area Network are required";
			cout<<"\n\t Price of Wide Area Network Rs4000";
			cout<<"\n\t Reapeater are required";
			cout<<"\n\t Price of Reapeater Rs1000";
			cout<<"\n\t Total Price :"<<price5;
		}

		}
		cout<<"\n";
	}
}
void graph(){
	system("cls");
	system("COLOR 9F");
	int G[MAX][MAX];
	int n;
	int i,j;
	int start;
	cout<<"\n\t Enter Number of Building :";
	cin>>n;
	cout<<"\n\t Enter Building Connection:";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>G[i][j];
		}
	}
	cout<<"\n\t Enter Whose Building Which Contain Router  :";
	cin>>start;
	dijk(G,n,start); //function call
	cout<<"\n\n";
	system("pause"); //just like getch()
	menu();
	//
}
void opening()
{
system("cls");
system("COLOR 1F");

int i=1,j=1;
while((i<32)&&(j<12))
{
system("cls");
gotoxy(i,j);
cout<<" \n\t\t\t\t=====PROJECT  REPORT===== ";
Sleep(20);
gotoxy((56+i),(j+2));
cout<<"\n\n\n\t\t\t\t *****LAN INFRASTRUCTURE DESIGN*****";
Sleep(50);
cout<<"\n\nCOLLEGE : DELHI TECHNOLOGICAL UNIVERSITY";
cout<<"\nSUBMITTED BY: AYUSH KARN";
cout<<"\nROLL NO : 2K19/CO/454";
cout<<"\nUnder the guidance of:- Mr. Ajay Kumar Sir \n";
i=i+3;
j=j+1;
}

cout<<"\n";
cout<<"\n";
system("pause");
}
void graphic()
{
system("cls");
system("COLOR 3F");
gotoxy(20,14);
cout<<"\n\t\t  ^^^^^LAN INFRASTRUCTURE DESIGN^^^^^  ";
gotoxy(40,20);
cout<<" ";
Sleep(1000);

gotoxy(22,20);
cout<<"\n\t\t\t  Welcome to program developed by ";
gotoxy(28,25);
cout<<"\n\t\t\t Ayush Karn ";
gotoxy(28,27);
cout<<"\t\t\t LOADING.... ";
for(int p=0;p<=9;p++)
{
Sleep(200);
gotoxy(36+p,27);
cout<<".";
}
Sleep(1000);
system("cls");

}

int main(){

	system("cls");
	opening();
	system("cls");
	graphic();
	system("cls");
	menu();
	return 0;
}
