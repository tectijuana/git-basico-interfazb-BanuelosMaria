#include <iostream>

using namespace std;
/**
 * Problema 17
 * 
 * En Miami, Florida, Lulú Rocket se presenta en varios actos sociales como "Señorita Metrica". 
 * Su " estadistica vital" es 89-58-89 cm. Mide 170 cm y pesa 53 Kg. Imprima sus medidas en pulgadas, 
 * su estatura en pies y pulgadasm y peso en libras.
 **/
 //@Author BanuelosMaria
 //@Date 17 Marzo 2022
 
 //Variables globales
    string name = "Lulú Rocket";
    int busto= 89;
    int cintura = 58;
    int cadera = 89;
    double altura= 170;
    int peso = 53;
    double pulgadas = 2.54;
    double pies = 30.48;
    double libra = 2.205;
    
    
int main()
{

    //Conversion cm a pulgadas
    double bustopulgadas = busto/pulgadas;
    double cinturapulgadas = cintura/pulgadas;
    double caderapulgadas = cadera/pulgadas;
    //Conversion cm a pies
    double alturapies = altura/pies;
    //Conversion kg a libras
    double pesolibra = peso*libra;
    cout<<"\tSeñorita Metrica";
    cout<<"\n\nEstadistica Vital\n";
    cout<<"\nInfo Lulú Rocket\nMedidas: 89-58-89 cm\nAlturaL 170cm\nPeso: 53 kg";
    cout<<"\n\n\n\tConversion de medidas\n";
    cout<<"\nNombre: "<<name <<"\nMedidas: "<<bustopulgadas<<"-"<<cinturapulgadas<<"-"<<caderapulgadas<<" in";
    cout<<"\nAltura: "<<alturapies <<"ft.\nPeso: "<<pesolibra <<"lb.";
    return 0;
}

