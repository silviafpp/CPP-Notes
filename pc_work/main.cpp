#include <iostream>
using namespace std;

struct hardware
{
    string RAM;
    string gpu;
    string cpu;
    string psu;
    string caixa;
    string motherBoard;
    string disco;
    string dispExt;
    string fans;
};

class pc{
    public:
        hardware hardware1;
        void ligar() {};
        void desligar() {};
        void reset() {};
        void abrirTampa() {};
        void executar() {};
        void input() {};

        pc() {
            initSO();
            initGPU();
            hardware();
        }


    private:
        void formatar() {};
        void abrirPasta() {};
        void initSO() {};
        void initGPU() {};
        void removerFicheiro() {};
        void hardware() {};
};

int main() {
    hardware hardware1 = {"16GB", "RTX 4090", "Ryzen 7 5800X3D", "750W", "Preta", "Asus B550", "250GB", "Rato", "Phanteks"}

    pc pc1(hardware);
}