#include <iostream>
using namespace std ;
int main()
{
	int ayah, ibu, anak1, anak2, b, b1, b2, b3 ;
	cout<<"Umur ayah :" ;
	cin>>ayah ;
	cout<<"Umur Ibu : " ;
	cin>>ibu ;
	cout<<"Umur Anak 1 : " ;
	cin>>anak1 ;
	cout<<"Umur Anak 2 : " ;
	cin>>anak2 ;
	if(ayah >0 && ayah<=12){
	b : 15000 ;
	}
	else if(ayah >=12 && ayah <=20){
	b = 20000 ;
	}
	else if(ayah >20){
	b = 30000 ;
	}
	if(ibu >0 && ibu <=12){
	b1= 15000 ;
	}
	else if (ibu >=12 && ibu <=20){
	b1= 20000 ;
	}
	else if (ibu >20){
		b1= 30000 ;
	}
	if (anak1 >0 && anak1 <=12){
		b2 = 15000 ;
	}
	else if (anak1 >=12 && anak1 <=20){
		b2 = 20000 ;
	}
	else if (anak1 >20){
		b2 = 30000 ;
	}
	if (anak2 >0 && anak2 <=12){
		b3 = 15000 ;
	}
	else if (anak2 >=12 && anak2 <=20){
		b3 = 20000 ;
	}
	else if (anak2 >20){
		b3 = 30000 ;
	}
	cout<<"bantuan satu bulan = Rp."<<(b*30)+(b1*30)+(b2*30)+(b3*30)<<endl ;
	return 0 ;
	
}
