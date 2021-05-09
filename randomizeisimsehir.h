#include<iostream>
#include<string>
#include "computeisimsehir.h"

using namespace std;

void randomize(char c, string answers[], string choices[], int* toplams1, int* toplams2){
	string randomisim,randomsehir,randomhayvan,randombitki,randomesya;
	if (c=='a'){
		srand(time(0));
		string choices4name[]={"ahmet","ali","ayse","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"ankara","adana","afyon","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];	
			answers[1]=randomsehir;
		}
		string choices4animal[]={"aslan","at","akbaba","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
		string choices4plant[]={"ananas","ahududu","armut","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
		string choices4good[]={"ayna","atlet","abajur","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='b'){
		srand(time(0));
		string choices4name[]={"burak","baran","bahri","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"bolu","bursa","balikesir","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"balina","baykus","boga","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"bezelye","brokoli","biber","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"bandana","balta","bardak","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='c'){
		srand(time(0));
		string choices4name[]={"can","canan","cemal","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"cezayir","cibuti","cebelitarik","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"ceylan","civciv","circir bocegi","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"ceviz","ciger otu","cennet hurmasi","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"ceket","cetvel","cezve","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='d'){
		srand(time(0));
		string choices4name[]={"davut","didem","damla","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"diyarbakir","denizli","danimarka","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"dodo kusu","deve","deniz yildizi","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"domates","defne","dut","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"dizlik","daktilo","davul","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='e'){
		srand(time(0));
		string choices4name[]={"elif","esra","eymen","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"erzurum","erzincan","eskisehir","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"esek","esek arisi","engerek","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"elma","erik","enginar","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"elbise","emzik","eldiven","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='f'){
		srand(time(0));
		string choices4name[]={"faruk","fatih","funda","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"fransa","fas","finlandiya","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"fil","fare","fok","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"fasulye","feslegen","findik","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"fincan","fener","fanila","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='g'){
		srand(time(0));
		string choices4name[]={"gizem","gamze","gulben","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"gumushane","giresun","galler","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"geyik","gergedan","gelincik","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"gul","greyfurt","gelincik","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"gitar","gomlek","gozluk","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='h'){
		srand(time(0));
		string choices4name[]={"hande","hakan","harun","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"hatay","hakkari","hollanda","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"hindi","hamsi","horoz","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"havuc","hiyar","hurma","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"hirka","halat","havlu","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
	if (c=='i'){
		srand(time(0));
		string choices4name[]={"ismail","idil","irem","-"};
		for(int i=0;i<3;i++){
			randomisim=choices4name[rand()%4];
			answers[0]=randomisim;
		}
		string choices4city[]={"istanbul","izmir","irlanda","-"};
		for(int i=0;i<3;i++){
			randomsehir=choices4city[rand()%4];
			answers[1]=randomsehir;
	
		}
		string choices4animal[]={"iguana","istavrit","inek","-"};
		for(int i=0;i<3;i++){
			randomhayvan=choices4animal[rand()%4];
			answers[2]=randomhayvan;
		}
			
		string choices4plant[]={"incir","igde","ignelik otu","-"};
		for(int i=0;i<3;i++){
			randombitki=choices4plant[rand()%4];
			answers[3]=randombitki;
		}
			
		string choices4good[]={"igne","ip","ibrik","-"};
		for(int i=0;i<3;i++){
			randomesya=choices4good[rand()%4];
			answers[4]=randomesya;
		}
	}
		compare(choices,answers,toplams1,toplams2);
		print(choices,answers);	
}
