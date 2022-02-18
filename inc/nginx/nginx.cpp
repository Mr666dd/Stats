#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>


int nginx_system;
bool nginx_bool = true;

int main(){
while (nginx_bool == true) {
                    printf("Stats - Сведения Nginx: \n");
                    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                    system("sudo systemctl status nginx");
                    printf("\nStats - Что вы хотите сделать с Nginx?\n0 - Остановить\n1 - Запустить\n2 - Перезапустить\n3 - Проверить конфигурацию Nginx\n4 - Вернутся в главное меню\n");
                    std::cin >> nginx_system;
                    if (nginx_system == 0) {


                        system("sudo systemctl stop nginx");
                        printf("Stats - Сервис nginx был остановлен\n");
                        





                    }
                    else if (nginx_system == 1) {


                        if (!system("sudo systemctl start nginx")){
                        //system("sudo systemctl start nginx");
                        printf("Stats - Сервис nginx был запущен\n");
                        } 
                        else if(system("sudo systemctl start nginx >> /dev/null"))  {
                        printf("Stats - Сервис nginx вылетел с ошибкой: \n");
                        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                        system("journalctl -xe");
                        }




                        //system("sudo systemctl start nginx");
                        //printf("Stats - Сервис nginx был запущен\n");





                    }
                    else if (nginx_system == 2) {
                        system("sudo systemctl restart nginx");
                        printf("Stats - Сервис nginx был перезапущен\n");
                    }
                        else if(nginx_system == 3) {
                        system("nginx -t");
                    } 
                    else if (nginx_system == 4) {
                        printf("Stats - ");
                        return 0;
                    }
                    else {
                        printf("Неизвестный выбор! Повторите его!\n");
                        std::cin >> nginx_system;
                    }
                }
return 0;
}