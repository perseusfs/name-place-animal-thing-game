#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string>
#include "randomizeisimsehir.h"
#include "computeisimsehir.h"
#define LIMIT 2 // change for adjust the game turn limit
using namespace std;
int main(){
	srand (time(0));
	char c;
	int toplamskor1=0,toplamskor2=0;
	int* tsp1= &toplamskor1;
	int* tsp2= &toplamskor2;
	int sayac=0;
	while(sayac<LIMIT){
	cout<<"\nharf seciniz(a ile i arasinda) : ";
	cin>>c;
	cout<<"secilen harf : "<<c<<endl;
	string choices[5];
	string choice;
	cout<<"bos birakacaginiz yerlere - koyunuz \nsirasiyla isim, sehir, hayvan, bitki, esya giriniz.\nbuyuk kucuk harfe duyarsizdir, tum kelimeleri kucuk harfle giriniz\n"<<endl;
	for(int i=0;i<5;i++){
		cout<<"seciminiz : ";
		cin>>choice;
		choices[i]=choice;
	}
	string answers[5];
	randomize(c,answers,choices,tsp1,tsp2);
	sayac+=1;
	}
	return 0;
}
