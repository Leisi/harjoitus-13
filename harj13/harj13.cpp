/*
Harjoitus 13 (Palautus vko 44)
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka 
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std; 
	struct nimitila
	{
		char etunimi[20], sukunimi[20], kokonimi[40];
	};
	int main()
	{
		nimitila henkilo;


	cout<<"Anna etunimesi:" <<endl;
		cin>>henkilo.etunimi;
	cout<<"Anna sukunimesi:"<<endl;
		cin>>henkilo.sukunimi;

	strcpy_s(henkilo.kokonimi,henkilo.etunimi);
	strcat_s(henkilo.kokonimi," ");
	strcat_s(henkilo.kokonimi,henkilo.sukunimi);

	cout<<"Nimesi oli: "<<henkilo.kokonimi<<endl;
	}