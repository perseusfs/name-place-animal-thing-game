#ifndef COMP_H
#define COMP_H
#include<iostream>
#include<string>
using namespace std;
void print(string choices[],string answers[]){
	cout<<"-----sonuclar-----"<<endl;
	for(int i=0;i<5;i++)
		cout<<choices[i]<<"   "<<answers[i]<<endl;
}
void compare(string choices[],string answers[],int* ts1,int* ts2){
	int skor1=0,skor2=0;
	cout<<endl;
	for(int i=0;i<5;i++){
		if(choices[i] == answers[i]){
			cout<<"herkes 5 puan kazandi"<<endl;
			skor1+=5;
			skor2+=5;
		}
		else{
			if(choices[i]=="-" && answers[i]!="-"){
				cout<<"bilgisayar 20 puan kazandi"<<endl;
				skor2+=20;
			}
			if(choices[i]!="-" && answers[i]=="-"){
				cout<<"20 puan kazandiniz"<<endl;
				skor1+=20;
			}
			else if(choices[i]!=answers[i]){
				cout<<"herkes 10 puan kazandi"<<endl;
				skor1+=10;
				skor2+=10;
			}
		}
	}
	cout<<"\nbu elin skoru --> "<<skor1<<"-"<<skor2<<endl<<endl;
	*ts1+=skor1;
	*ts2+=skor2;
	cout<<"toplam skor --> "<<*ts1<<"-"<<*ts2<<endl<<endl;
}
#endif
