#include <iostream>
    using namespace std;
        int main(){
            // TYPE NAME;
            // TYPE NAME = VALOR;
            int vidas  = 1; // tipos inteiros 5, 10, 100, 1000 | Valores podem ser alterados posteriormente 
            char letra = 'B'; // 'a', 'b', 'c', 'd'
            double decimal = 2.5; //  2,5 | 5,7| 8,9
            float decimal2 = 2.5; // menos preciso, float: 2,999999 | float: 2,5 - iria arredondar o valor, em certos calculos isso estaria errado
            bool liv = true ; // thrue: verdadeiro | |  false: falso
            string nome = "Barao" ; // recebe uma quantidade de caracteres maior | "ander", "barao"...

                /*cout << vidas << "\n";
                cout << letra << "\n";
                cout << decimal << "\n";
                cout << decimal2 << "\n";
                cout << vivo << "\n";
                cout << nome << "\n";
                // outro exemplo
                // cout << vidas << "\n" << letra << "\n" << decimal << \n << decimal << "\n" << vivo << "\n" << nome << "\n";
                */
            cout << "Digite uma letra: " << "\n"; 
            cin >> letra;   
            cout << "Digite um nome: "<< "\n";
            cin >> nome;   
            cout << "Digite a quantidadae de vidas: " "\n";
            cin >> vidas;
           /* cout << "Esta vivo: " "\n";
            cin >> vivo;*/
            cout << "Quantidade em real: " "\n";
            cin >> decimal;
            cout << "valor quebrado: " "\n";
            cin >> decimal2;
            
            // int vidas = 100; aqui seria o valor alterado da variavel, variavel vidas neste codigo começou com 1
            // apoos a mesma variavel for posta posteriormente recebendo um valor diferente a mesma atualiza o valor para o novo 

            cout << "\nLetra: " << letra << "\nNome: " << nome << "\nVidas: " << vidas << "\nVivo: " << liv << "\n Dinheiro: " << decimal << "\nValor QB: " << decimal2 << "\n"; 



            return 0;
        }