//ENTREGABLE FINAL 
//Realizar un cajero automatico que me pida:
//-Ingresar el usuario, la tarjeta y la clave
//-Depositar dinero
//-Retirar dinero
//-Consultar de saldo
// Y Salir de la aplicacion.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <cstdlib>

#define user "Alex Alcalde"
#define pass "1234"
#define card "4444555566667777"

using namespace std;

int main(){

    string usuario,password,tarjeta;
    int contador=1;
    bool acceso = false;
    float Saldo_inicial=1500;
    float Saldo_dola=800;
    float Sa=0,Ret_sol=0,Dep_sol=0,Opc;
    float Sa_dol=0,Ret_dol=0,Dep_dol=0;
    float N_sal_sol_dep=0,N_sal_dol_dep=0,N_sal_sol_ret=0,N_sal_dol_ret=0;

    do
    {
        system("cls");
        system("color 0a");
        cout<<"**ACCESO AL SISTEMA PARA EL CAJERO AUTOMATICO**"<<endl;
        cout<<"\n***********************************************"<<endl;
        cout<<"++ Por favor ingrese su usuario, su tarjeta y su clave ++"<<endl;
        cout<<"\n***********************************************"<<endl;

        cout<<"Ingrese el usuario: "<<endl;
        getline(cin, usuario);
        cout<<"\n**********************************"<<endl;

        cout<<"\nIngrese el numero de su tarjeta: "<<endl;
        getline(cin, tarjeta);
        cout<<"\n**********************************"<<endl;

        cout<<"Ingrese su clave: "<<endl;
        
        char caracter;
        caracter = getch();
        password ="";

        while (caracter !=13)
        {
            password.push_back(caracter);
            cout<<"*";
            caracter = getch();          
        }
        cout<<"\n**********************************"<<endl;


        if (usuario == user && password == pass && tarjeta == card)
        {
            acceso = true;
        }
        else{
            cout<<"\nEl usuario y/o la clave son incorrectos. Intente nuevamente( "<<contador<< " de 3 intentos)"<<endl;
            contador++;           
        }
        


    } while (acceso == false && contador < 4);
        
        if (acceso == false)
        {
            cout<<"\nSE HA SUPERADO EL LIMITE DE INTENTOS (3)!!"<<endl;
        }else{
        while (1)
        {
        system("cls");
        system("color 0a");
        cout<<"\n****************************************"<<endl;
        cout<<"\tBIENVENIDO(A) AL SISTEMA DE MUTTER!!"<<endl;
        cout<<"\n****************************************"<<endl;
        cout<<"**BIENVENIDO A SU CAJERO AUT0MATICO MUTTER**";
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"\nEscoja una opcion: ";
        cout<<"\n1. DEPOSITO SOLES";
        cout<<"\n2. DEPOSITO DOLARES";
        cout<<"\n3. RETIRO SOLES";
        cout<<"\n4. RETIRO DOLARES";
        cout<<"\n5. CONSULTAR SALDO EN SOLES";
        cout<<"\n6. CONSULTAR SALDO EN DOLARES";
        cout<<"\n0. SALIR DEL CAJERO";
        cout<<"\n++++++++++++++++++++++++++"<<endl;
        cout<<"\nIngrese la opcion: "<<endl;
        cin>>Opc;
    
    if (Opc == 1)
    {
        system("cls");
        cout<<"***********************************";
        cout<<"\nIngrese la cantidad a depositar en soles: "<<endl;
        cin>>Dep_sol;
        Sa = Saldo_inicial + Dep_sol;
        cout<<"***********************************";
        cout<<"\nCantidad Ingresada: S/ "<<Dep_sol<<endl;
        cout<<"***********************************";
        cout<<"\n¡OPERACION EXITOSA!"<<endl;

    }else if (Opc == 2)
    {
        system("cls");
        cout<<"***********************************";
        cout<<"\nIngrese la cantidad a depositar en dolares: "<<endl;
        cin>>Dep_dol;
        Sa_dol = Saldo_dola + Dep_dol; 
        cout<<"***********************************";
        cout<<"\nCantidad Ingresada: $ "<<Dep_dol<<endl;
        cout<<"***********************************";
        cout<<"\n¡OPERACION EXITOSA!"<<endl;
    }
     
    else if (Opc == 3)
    {
        system("cls");
        cout<<"***************************";
        cout<<"\nCantidad a retirar en soles: "<<endl;
        cin>>Ret_sol;
        if (Ret_sol > 1500)
        {
            cout<<"**********************************************";
            cout<<"\nLa cantidad ingresada supera su saldo actual";
            cout<<"\n*************************************************";
            cout<<"\nPor Favor. Ingrese nuevamente la cantidad a retirar en S/: ";
            cin>>Ret_sol;
        }
        Sa = Saldo_inicial - Ret_sol;
        cout<<"***********************************";
        cout<<"\nCantidad retirada: S/ "<<Ret_sol<<endl;
        cout<<"***********************************";
        cout<<"\n¡OPERACION EXITOSA!"<<endl;
    }
    else if (Opc == 4)
    {   
        system("cls");
        cout<<"***************************";
        cout<<"\nCantidad a retirar en dolares: "<<endl;
        cin>>Ret_dol;
        if (Ret_dol > 800)
        {
            cout<<"************************************************";
            cout<<"\nLa cantidad ingresada supera su saldo actual";
            cout<<"\n*************************************************";
            cout<<"\nPor Favor. Ingrese nuevamente la cantidad a retirar en $: "<<endl;
            cin>>Ret_dol;
        }
        Sa_dol = Saldo_dola - Ret_dol;
        cout<<"***********************************";
        cout<<"\nCantidad retirada: $ "<<Ret_dol<<endl;
        cout<<"***********************************";
        cout<<"\n¡OPERACION EXITOSA!"<<endl;        
    }else if (Opc == 5)
    {
        system("cls");
        cout<<"\n*****************************************************";
        cout<<"\nUsuario: "<<usuario<<endl;
        cout<<"*****************************************************";
        if (Dep_sol > 0)
        {
            cout<<"\n****************************************************"<<endl;
            cout<<"\nSu saldo que a depositado en soles es: S/ "<<Dep_sol;
            N_sal_sol_dep = Saldo_inicial + Dep_sol;
            cout<<"\nSu saldo en cuenta disponible en soles era: S/ "<<N_sal_sol_dep;
            cout<<"\n****************************************************"<<endl;
        }
        
        if (Ret_sol > 0)
        {
            cout<<"\n****************************************************"<<endl;
            cout<<"\nSu saldo que ha retirado en soles es: S/ "<<Ret_sol;
            N_sal_sol_ret=N_sal_sol_dep-Ret_sol;
            if (N_sal_sol_dep > 0)
            {
                cout<<"\nSu saldo en cuenta disponible actualmente en soles es: S/ "<<N_sal_sol_ret;
                cout<<"\n***********************************************************"<<endl;
            }else
            Sa=Saldo_inicial-Ret_sol;
            cout<<"\nSu saldo en cuenta disponible actualmente en soles es: S/ "<<Sa;
            cout<<"\n****************************************************"<<endl;
        }else if (Saldo_inicial == 1500)
        {
            cout<<"\nSu saldo en cuenta disponible en soles es: S/ "<<Saldo_inicial;
            cout<<"\n****************************************************"<<endl;
            cout<<"No ha retirado o depositado nada";
            cout<<"\n****************************************************"<<endl;
        }
          
    }else if (Opc == 6)
    {
        system("cls");
        cout<<"*****************************************************";
        cout<<"\nUsuario: "<<usuario<<endl;
        cout<<"*****************************************************";
        
        if (Dep_dol > 0)
        {
            cout<<"\n****************************************************"<<endl;
            cout<<"\nSu saldo que a depositado en dolares es: $ "<<Dep_dol;
            N_sal_dol_dep=Saldo_dola + Dep_dol;
            cout<<"\nSu saldo en cuenta disponible en soles era: $ "<<N_sal_dol_dep;
            cout<<"\n****************************************************"<<endl;
        }
        
        if (Ret_dol >0)
        {
            cout<<"\n****************************************************"<<endl;
            cout<<"\nSu saldo que ha retirado en dolares es: $ "<<Ret_dol;
            N_sal_dol_ret=N_sal_dol_dep-Ret_dol;
            if (N_sal_dol_dep >0)
            {
                cout<<"\nSu saldo en cuenta disponible actualmente soles es: $ "<<N_sal_dol_ret;
                cout<<"\n****************************************************"<<endl;
            }
            Sa_dol=Saldo_dola-Ret_dol;
            cout<<"\nSu saldo en cuenta disponible actualmente soles es: $ "<<Sa_dol;
            cout<<"\n****************************************************"<<endl;
        }else if (Saldo_dola == 800)
        {
            cout<<"\nSu saldo en cuenta disponible en dolares es: $ "<<Saldo_dola;
            cout<<"\n****************************************************"<<endl;
            cout<<"No ha retirado o depositado nada";
            cout<<"\n****************************************************"<<endl;
        }
        
        
    }
    else if (Opc == 0)
    {
        system("cls");
        cout<<"+++++++ GRACIAS POR UTILIZAR NUESTRO CAJERO AUTOMATICO QUE TENGA UN BUEN DIA! +++++++"<<endl;
        cout<<"+++++++++++++++++++++++++++++++++++++ MUTTER ++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"*************************** GRACIAS POR CONFIARNOS SU DINERO! ***************************"<<endl;
        system("pause");
        return 0;
    }else{
        system("cls");
        cout<<"La opcion ingresada no se encuentra entre las anteriores"<<endl;
    }
        cout<<"...Presione cualquier tecla para volver al menu...";
        getch();
        
    }
    return 0;
        

}
    
}
        
        


