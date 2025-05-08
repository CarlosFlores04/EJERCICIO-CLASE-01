#include <iostream>
using namespace std;

int main (void){
    int ser; 
    float sal, ms, ms2, ms3,gf,gft;

    cout << "Digite su salario"<<endl;
    cin>>sal;
    cout<<"Elija el servicio que quiere ocupar: 2 para seguro por muerte, 3 seguro por invalidez, 4 gastos funerarios."<<endl;
    cout<<"1 para seguro de vida."<<endl;
    cout<<"2 para seguro por muerte."<<endl;
    cout<<"3 para seguro por invalidez."<<endl;
    cout<<"4 para gastos funerarios."<<endl;
    cin>>ser;

    switch(ser){
        case 1:
        cout<< "Ha elejido el servicio de seguros de vida destinados para educacion, hipoteca o para cualquier cosa que mejore su calidad de vida."<<endl;
        if (sal>=400 & sal<=910){
            ms=10000;
            cout<<"El monto de su seguro de vida es de $"<<ms<<endl;
        }else if(sal>=910.01 & sal<=1255){
            ms=14000;
            cout<<"El monto de su seguro de vida es de $"<<ms<<endl;
        }else if(sal>=1255.01 & sal<=1255){
            ms=18000;
            cout<<"El monto de su seguro de vida es de $"<<ms<<endl;
        }else if(sal>=1630.01){
            ms=22000;
            cout<<"El monto de su seguro de vida es de $"<<ms<<endl;
        }else{
            cout<<"El salario que ingreso no es valido.";
        } 
        break;
        case 2:
        cout<<"Ha elegido el servicio de seguros de muerte, validos para cualquier tipo de muerte.";
        if (sal>=400 & sal<=910){
            ms=10000;
            cout<<"El monto de su seguro de muerte es de $"<<ms<<endl;
        }else if(sal>=910.01 & sal<=1255){
            ms=14000;
            cout<<"El monto de su seguro de muerte es de $"<<ms<<endl;
        }else if(sal>=1255.01 & sal<=1255){
            ms=18000;
            cout<<"El monto de su seguro de muerte es de $"<<ms<<endl;
        }else if(sal>=1630.01){
            ms=22000;
            cout<<"El monto de su seguro de muerte es de $"<<ms<<endl;
        }else{
            cout<<"El salario que ingreso no es valido.";
        } 

        break;
        case 3:
        cout<<"Ha elegido el servicio de seguro por invalidez, siendo esta una anticipacion de la suma asegurada por invalidez total o permanente";
        ms2=ms/2;
        ms3=ms2/12;
        if (sal>=400 & sal<=910){
            ms=10000;
            cout<<"Los seguros por invalidez te los daremos en 2 partes primero te daremos $ "<<ms2<<" y luego la segunda parte sera cada mes durante 12 meses te daremos $ "<<ms3<<endl;
        }else if(sal>=910.01 & sal<=1255){
            ms=14000;
            cout<<"Los seguros por invalidez te los daremos en 2 partes primero te daremos $ "<<ms2<<" y luego la segunda parte sera cada mes durante 12 meses te daremos $ "<<ms3<<endl;
        }else if(sal>=1255.01 & sal<=1255){
            ms=18000;
            cout<<"Los seguros por invalidez te los daremos en 2 partes primero te daremos $ "<<ms2<<" y luego la segunda parte sera cada mes durante 12 meses te daremos $ "<<ms3<<endl;
        }else if(sal>=1630.01){
            ms=22000;
            cout<<"Los seguros por invalidez te los daremos en 2 partes primero te daremos $ "<<ms2<<" y luego la segunda parte sera cada mes durante 12 meses te daremos $ "<<ms3<<endl;
        }else{
            cout<<"El salario que ingreso no es valido.";
        } 
        break;
        case 4:
        cout<<"Ha elegido el servicio de seguro por invalidez";
        if (sal>=400 & sal<=910){
            ms=10000;
            gf=(ms*0.15);
            gft=ms+gf;
            cout<<"Los gastos funerarios que te daremos seran un 15 porciento de tu total osea $ "<<gf<<"y en total te quedarian $ "<<gft<<endl;
        }else if(sal>=910.01 & sal<=1255){
            ms=14000;
            gf=1750;
            gft=ms+gf;
            cout<<"Los gastos funerarios que te daremos seran un 15 porciento de tu total osea $ "<<gf<<"y en total te quedarian $ "<<gft<<endl;
        }else if(sal>=1255.01 & sal<=1255){
            ms=18000;
            gf=1750;
            gft=ms+gf;
            cout<<"Los gastos funerarios que te daremos seran un 15 porciento de tu total osea $ "<<gf<<"y en total te quedarian $ "<<gft<<endl;
        }else if(sal>=1630.01){
            ms=22000;
            gf=1750;
            gft=ms+gf;
            cout<<"Los gastos funerarios que te daremos seran un 15 porciento de tu total osea $ "<<gf<<"y en total te quedarian $ "<<gft<<endl;
        }else{
            cout<<"El salario que ingreso no es valido.";
        } 
        break;
        default:
        cout<<"El numero que ingreso no es valido, vuelva a intentarlo.";
    }
    return 0;
}