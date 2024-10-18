#include <iostream>
#include <string> // Include the string header for string usage
using namespace std;

struct Hardware {
    string ram;
    string gpu;
    string cpu;
    string psu;
    string caixa; // case
    string mb;    // motherboard
    string hd;    // hard drive
    string dispExt[5]; // external devices
    string fans;
};

class Computer {
    private:
        Hardware computer; // Correct the variable name to match struct name
        bool state; // state could be used to track on/off status

        void Formatar() {
            cout << "O computador será formatado" << endl;
        }

        void AbrirPasta() {
            cout << "A pasta foi aberta" << endl;
        }

        void IniciarSO() {
            cout << "O sistema operativo está a ser iniciado" << endl;
        }

        void IniciarGPU() {
            cout << "A placa gráfica está a ser iniciada" << endl;
        }

        void RemoverFicheiro() {
            cout << "Os ficheiros estão a ser removidos" << endl;
        }

        void ListarHardware() {
            cout << "Hardware do Computador:" << endl;
            cout << "RAM: " << computer.ram << endl;
            cout << "GPU: " << computer.gpu << endl;
            cout << "CPU: " << computer.cpu << endl;
            cout << "PSU: " << computer.psu << endl;
            cout << "Caixa: " << computer.caixa << endl;
            cout << "Motherboard: " << computer.mb << endl;
            cout << "Disco: " << computer.hd << endl; 
            cout << "FANs: " << computer.fans << endl; 
            cout << "Periféricos: ";

            for (int i = 0; i < 5; i++) {
                cout << computer.dispExt[i]; 
                if (i < 4) cout << ", "; 
            }
            cout << endl; 
        }

    public:

        Computador(hardware hardware) {
            this->computer = hardware;
            this->state = false;
            cout << "O computador foi instanciado com sucesso!" endl;
            ListarHardware();
        }

        void Ligar() {
            if(state){
                cout << "o computador ja esta ligado!" << endl;
            } else {
                cout << "O computador vai ligar!" << endl;
            }this->state = true;
        }

        void Desligar() {
            if(state){
                cout << "o computador vai ser desligado" << endl;
                this->state
            } else {
                cout << "o computador ja esta desligado" << endl;
            }
        }

        void Reset() {
            if(state){
                cout << "o computador vai ser reiniciado!" << endl;
            } else {
                cout << "O computador nao esta ligado" << endl;
            }
        }

        void abrirTampa() {
            cout << "a tampa do computador foi aberta!" << endl;
        }

        void executar(int opt){

            switch(opt) {
                case 1:
                    if(state){
                        AbrirPasta();
                    }else{
                        cout << "O computador nao esta ligado"
                    }
            }
        }
}