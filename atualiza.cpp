/*      Desenvolvido por
                        Erasmo Cardoso
                                       Atualiza sistema no arch linux */
#include <iostream>
#include <cstdlib>
//variaveis
int opcao;
std::string comand, mensag;

void limpatela(){
    system("clear");
}

void menu(){
    do{
        limpatela();
        opcao = 0;
std::cout<<"               ╭─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╮          "<<std::endl;
std::cout<<"               ┋                                                     ┋          "<<std::endl;
std::cout<<"               ┋             ATUALIZADOR  Debian LINUX               ┋          "<<std::endl;
std::cout<<"               ┋                                                     ┋          "<<std::endl;
std::cout<<"               ┋         1) Sistema | Flatpak | Apt                  ┋          "<<std::endl;
std::cout<<"               ┋         2) Sistema | flatpak | APT | Reset          ┋          "<<std::endl;
std::cout<<"               ┋         3) Sistema | Flatpak | Apt |Desliga         ┋          "<<std::endl;
std::cout<<"               ┋         4) Saindo                                   ┋          "<<std::endl;
std::cout<<"               ┋                                                     ┋          "<<std::endl;
std::cout<<"               ┋               Faça sua escolha !!!                  ┋          "<<std::endl;
std::cout<<"               ┋                                                     ┋          "<<std::endl;
std::cout<<"               ╰─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╯          "<<std::endl;
std::cin>> opcao;
//verifica se foi digitado uma letra ou um numero de 1-3.. senão loop
    if (!opcao){
            std::cout<<"||||||||                      Digite um numero valido!!             ||||||||"<<std::endl;
            system("sleep 2");
            system("./atualiza");
            }else{
    switch (opcao){
    case 1 :
        comand = "sudo apt update -y && sudo apt upgrade -y && flatpak update ";
        mensag = "Atualiza tudo !!";
        break;

    case 2 :
        comand = "sudo apt update -y && sudo apt upgrade -y && flatpak update && sudo reboot";
        mensag = "Atualiza tudo e reset sistema";
        break;

    case 3 :
        comand = "sudo apt update -y && sudo apt upgrade -y && flatpak update && sudo shutdown now";
        mensag = "Atualia tudo e desliga sistema";
        break;

    case 4 :
        mensag = "|||||||||                 SAINDO               ||||||||||";
        break;

    default :
        std::cout<<"|||||||                         Digite um numero de 1 - 3                        ||||||||"<<std::endl;
        system("sleep 2");
    }
            }
    }while (opcao < 0 || opcao > 4 );
}

//execulta atualização comsring (c_str)
void atualiza(){
     system(comand.c_str());
}

void fim(){
    std::cout<<"               ╭─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╮          "<<std::endl;
    std::cout<<"                                    Finalizado !!!                              "<<std::endl;
    std::cout<<"               ╰─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╯          "<<std::endl;
}
//inicio programa
int main(){
    limpatela();
    menu();
    limpatela();
    std::cout<<mensag<<std::endl;
    std::cout<<"    "<<std::endl;
    atualiza();
    limpatela();
    fim();

    return 0;
}
