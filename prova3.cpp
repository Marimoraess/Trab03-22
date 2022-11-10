#include<iostream>
#include<conio.h>
using namespace std;

float fcsal(float salario);
float fccomp(float salario,float anocon,float parcelas);
float fcano(float anocon);
int main()

{
    float salario,anocon,parcelas;
    cout<<"Qual o seu salario: ";
    cin>>salario;
    cout<<"Ano de contratação: ";
    cin>>anocon;
    cout<<"qual parcela: ";
    cin>>parcelas;
    salario=fcsal(salario);
    anocon=fcano(anocon);
    fccomp(salario,anocon,parcelas);
}
float fcsal(float salario)
{
        return salario/5;

}
float fcano(float anocon)
{


        return 2022-anocon;
}
float fccomp(float salario,float anocon, float parcelas)
{
      if(anocon<=5)
      {
          cout<<"Menor que 5 anos";
      }
      else if(parcelas>salario)
      {
          cout<<"Nao pode por conta do salario";
      }
      else
      {
          cout<<"Voce pode :D";
      }

}


