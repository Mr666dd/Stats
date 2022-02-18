#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>


int wings_system;
bool wings_bool = true;

int main(){
while (wings_bool == true) {
                    printf("Stats - Сведения Wings: \n");
                    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                    system("sudo systemctl status wings");
                    printf("Stats - Что вы хотите сделать с Wings?\n0 - Остановить\n1 - Запустить\n2 - Перезапустить\n3 - Вернутся в главное меню\n");
                    std::cin >> wings_system;
                    if (wings_system == 0) {


                        system("sudo systemctl stop wings");
                        printf("Stats - Сервис Wings был остановлен\n");
                        





                    }
                    else if (wings_system == 1) {


                        if (!system("sudo systemctl start wings")){
                        printf("Stats - Сервис wings был запущен\n");
                        } 
                        else if(system("sudo systemctl start wings >> /dev/null"))  {
                        printf("Stats - Сервис wings вылетел с ошибкой: \n");
                        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                        system("journalctl -xe");
                        }




                        //system("sudo systemctl start nginx");
                        //printf("Stats - Сервис nginx был запущен\n");





                    }
                    else if (wings_system == 2) {
                        system("sudo systemctl restart wings");
                        printf("Stats - Сервис wings был перезапущен\n");
                    }
                    else if (wings_system == 3) {
                        printf("Stats - ");
                        return 0;
                    }
                    else {
                        printf("Неизвестный выбор! Повторите его!\n");
                        std::cin >> wings_system;
                    }
                }
return 0;
}