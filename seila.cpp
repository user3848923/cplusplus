#include <iostream>
#include <Windows.h>
using namespace std;


int main(){
    int y=2, x=4; // posi��o do personagem na tela, o personagem � o caractere "@"
    char a[6][10] =  {"aaaaaaaaa",
                      "a       a",
                      "a       a",
                      "a       a",
                      "aaaaaaaaa"}; // essa � a tela do jogo
    while(true){
        //essa bagun�a aqui eu at� me perdi
        // esses dois ifs s�o para verificar qual tecla eu aperto e saber se meu personagem vai para direita ou esquerda
        if(GetKeyState('A') & 0x8000){
            a[y][x]=' '; // limpa o ultimo local que o personagem estava sen�o da merda
            if(x > 1){ // colis�o, nao vou explicar pq nem eu sei que eu fiz aqui
                x -= 1;
                }
        }
        if(GetKeyState('D') & 0x8000){ // esse if aqui � a mesma coisa do outro s� que para a direita
            a[y][x]=' ';
            if(x < 7){
                x += 1;
            }
        }
        a[y][x]='@'; // desenha o boneco
        for(auto i:a){ // esse for � pra desenhar a tela
            cout << i << endl;
        }
        cout << x << endl; // verificando o valor de x pq tinha feito uma merda l�
        system("cls");// limpa o console pra n�o desenhar 15 telas diferentes
    } // esse � o loop do jogo kkkk cansei de falar coisa obvia


    return 0;
}
