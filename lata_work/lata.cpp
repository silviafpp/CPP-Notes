#include <iostream>
using namespace std;

struct lata {
    string material;
    string capacidade;
    string dimensao;
    string peso;
    string sabor;
    string reciclavel;
    string dataDeValidade;
    string lote;
    string cor;
    string infoNutricional [5];
    string lote;
    string codBarras;
    string fornecedor;

    bool status;
};

class Refrigerante {
    private:
        lata refrigerante;

    public:

        //Constructor
        Refrigerante(lata lata){
            refrigerante = lata;
        }
};

int main() {
    lata refri1 = {"Aluminio","350ml","100","10kg","Ananas","Sim","02-03-2025","1234567","Amarelo",{"Calorias: 100","Sódio: 10","Proteina: 100","Açucares: 10g","Lipidos: 10g"}, "21312","54345","6567578"};

    while (true){
        int opcao;
        cout << "1 - Abrir lata" << endl;
        cout << "2 - Beber Refrigerante" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if(opcao == 1){
            refri.abrirLata();
        }else if(opcao == 2){
            double qnt;
            cout << "Digite a quantidade de refrigerante que deseja beber: " << endl;
            cin >> qnt;
            refri1.beberRefrigerante(qnt);
        }else if(opcao == 3){
            break;
        }else{
            cout << "Opcao invalida" << endl;
        }
    }
}


