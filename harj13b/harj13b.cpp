/*
Harjoitus 13 (Palautus vko 44)
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

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
		string etunimi;
		string sukunimi;
	};
	int main()
	{
		string kokonimi;
		nimitila henkilo;


	cout<<"Anna etunimesi:" <<endl;
		cin>>henkilo.etunimi;
	cout<<"Anna sukunimesi:"<<endl;
		cin>>henkilo.sukunimi;

	kokonimi=henkilo.etunimi+" "+henkilo.sukunimi;

	cout<<"Nimesi oli: "<<kokonimi<<endl;
	}