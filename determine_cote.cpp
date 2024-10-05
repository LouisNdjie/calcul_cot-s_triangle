#include<iostream>
#include<math.h>

float abs_a = 0;
float ord_a = 0;
float abs_b = 0;
float ord_b = 0;
float abs_c = 0;
float ord_c = 0;
float AB = 0;
float AC = 0;
float BC = 0;

int main(int argc, char** argv){
	std::cout<<"entrez les coordonnees du point A"<<std::endl;
	std::cout<<"l'abscisse:";
	std::cin>>abs_a;
	std::cout<<"l'ordonne :";
	std::cin>>ord_a;
	
	std::cout<<std::endl<<"entrez les coordonnees du point B"<<std::endl;
	std::cout<<"l'abscisse:";
	std::cin>>abs_b;
	std::cout<<"l'ordonne :";
	std::cin>>ord_b;
	
	std::cout<<std::endl<<"entrez les coordonnees du point C"<<std::endl;
	std::cout<<"l'abscisse:";
	std::cin>>abs_c;
	std::cout<<"l'ordonne :";
	std::cin>>ord_c;
	if(abs_a == abs_b && ord_a == ord_b){
		std::cout<<std::endl<<" les points A et B sont confondus donc le cote AB a une mesure nulle et les cotes BC et AC sont equidistants"<<std::endl;
	}else if(abs_c == abs_b && ord_c == ord_b){
		std::cout<<std::endl<<" les points C et B sont confondus donc le cote BC a une mesure nulle et les cotes AB et AC sont equidistants"<<std::endl;
	}else if( abs_c == abs_a && ord_c == ord_a){
		std::cout<<std::endl<<" les points C et A sont confondus donc le cote AC a une mesure nulle et les cotes AB et BC sont equidistants"<<std::endl;
	}else if(abs_c == abs_b && ord_c == ord_b && abs_a == abs_b && ord_a == ord_b && abs_c == abs_a && ord_c == ord_a){
		std::cout<<std::endl<<" les points A,B et C sont confondus donc les cotes BC,AC et AB ont une mesure nulle"<<std::endl;
	}else{
		std::cout<<std::endl<<"calculons les longueurs des cotes de ce triangle "<<std::endl;
		AB = sqrt(pow(abs_b - abs_a,2)+pow(ord_b - ord_a,2));
		AC = sqrt(pow(abs_c - abs_a,2)+pow(ord_c - ord_a,2));
		BC = sqrt(pow(abs_c - abs_b,2)+pow(ord_c - ord_b,2));
		std::cout<<"AB ="<< AB<<std::endl<<"AC ="<< AC<<std::endl<<"BC ="<<BC;
	}
	return 0;
}