#include <iostream>
#include <Windows.h>
using namespace std;


int main(){
    int y=2, x=4; // posição do personagem na tela, o personagem é o caractere "@"
    char a[6][10] =  {"aaaaaaaaa",
                      "a       a",
                      "a       a",
                      "a       a",
                      "aaaaaaaaa"}; // essa é a tela do jogo
    while(true){
        //essa bagunça aqui eu até me perdi
        // esses dois ifs são para verificar qual tecla eu aperto e saber se meu personagem vai para direita ou esquerda
        if(GetKeyState('A') & 0x8000){
            a[y][x]=' '; // limpa o ultimo local que o personagem estava senão da merda
            if(x > 1){ // colisão, nao vou explicar pq nem eu sei que eu fiz aqui
                x -= 1;
                }
        }
        if(GetKeyState('D') & 0x8000){ // esse if aqui é a mesma coisa do outro só que para a direita
            a[y][x]=' ';
            if(x < 7){
                x += 1;
            }
        }
        a[y][x]='@'; // desenha o boneco
        for(auto i:a){ // esse for é pra desenhar a tela
            cout << i << endl;
        }
        cout << x << endl; // verificando o valor de x pq tinha feito uma merda lá
        system("cls");// limpa o console pra não desenhar 15 telas diferentes
    } // esse é o loop do jogo kkkk cansei de falar coisa obvia


    return 0;
}
