#include<iostream>
#include<cmath>
using namespace std;

 int main(){
    float kg, altura, IMC;
    int escolha;
    do{
    cout<<"Olá, sou um programa que calcula IMC (Índice de Massa Corporal).\nPreciso saber alguns dados para te ajudar: \nQuanto você pesa (Kg)?\n";
    cin >> kg;
    cout<<"Qual é sua altura (m)?\n";
    cin >> altura;
    IMC = kg / (pow(altura, 2));
    if (IMC < 18.5){
        cout<<"Seu IMC é de "<< IMC <<". Você está abaixo do peso ideal. \nVá a um nutricionista ou médico.\n";
    }
    else if(IMC > 18.5 && IMC <= 24.9){
        cout<<"Seu IMC é de "<< IMC <<". Você está no peso ideal.\n";
    }
    else if(IMC >= 25 && IMC <= 29.9){
        cout<<"Seu IMC é de "<< IMC <<". Você está com sobrepeso. É ideal que você se cuide para não aumentar para obesidade.\n";
    }
    else if(IMC >= 30 && IMC <= 34.9){
        cout<<"Seu IMC é de "<< IMC <<". Você está na obesidade grau I. \nVá a um nutricionista ou médico.\n";
    }
    else if(IMC >= 35 && IMC <= 39.9){
        cout<<"Seu IMC é de "<< IMC <<". Você está na obesidade II. \nVá a um nutricionista ou médico com rapidez.\n";
    }
    else if(IMC >= 40){
        cout<<"Seu IMC é de "<< IMC <<". Você está na obesidade grau III, ou obesidade mórbita. \nVá a um nutricionista ou médico urgentemente! Neste nível, a chance de infarto aumenta de forma avassaladora. ";
    }
    cout<<"É necessário ressaltar que o IMC não é uma ferramenta precisa para diagnosticar a obesidade e, por isso, o médico e o nutricionista devem fazer uma avaliação completa, com outras medições corporais, como a circunferência da cintura e outros exames de diagnóstico.\n";
    cout<<"Gostaria dde tentar de novo? \n1.Sim. \n2.Não.\n";
    cin >> escolha;
    }
    while(escolha == 1);
    cout<<"Quando tiver alguma dúvida no seu IMC, me use novamente que eu adorarei.\nAté a próxima!" ;
    return 0;
 }
