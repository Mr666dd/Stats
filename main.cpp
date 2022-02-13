#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <fstream>
#include <cstdio>

using namespace std;

const char* text = "Введите название сервиса: \n1 - Nginx\n2 - Wings(Pterodactyl Daemon)\n3 - MySQL(MariaDB)\n4 - Redis\n5 - Выход из программы\n";
int a;
bool b = true, nginx_bool = true, wings_bool = true, mysql_bool = true, redis_bool = true;
int c;
int nginx_system, wings_system;
int main(int argc, char** argv) {


    if (argv[0]){
    printf("Stats - Запуск только с правами sudo! Хотя...\n");
    }

    printf("         _1.0.0___     ________        \n");
    printf("   _____/________/_   /_______/_____   \n");
    printf("  /   __/ /   /  / \\    /  / /   __/  \n");
    printf(" /__   / /   /  /—-—\\  /  / /__   /   \n");
    printf("/_____/ /___/  /_____\\/  / /_____/    \n");
    printf("Stats - программа для проверки и управление сервисами.\n");
    printf("\nStats - ");
    while (b == true) {
        cout << text; printf("Пожалуйста, не пишите сюда буквы! Программа начинает ломатся!\nStats - ");
        std::cin >> a;
        while (b == true) {

            if (a == 1) {
                nginx_bool = true;
                system("/usr/share/stats/inc/nginx/a.out");
                nginx_bool = false;
                cout << text; printf("Stats - ");
                std::cin >> a;
            }
            if (a == 2) {
                wings_bool = true;
                system("/usr/share/stats/inc/wings/a.out");
                wings_bool = false;
                cout << text; printf("Stats - ");
                std::cin >> a;
            }

            if (a == 3) {
                wings_bool = true;
                system("/usr/share/stats/inc/mysql/a.out");
                wings_bool = false;
                cout << text; printf("Stats - ");
                std::cin >> a;
            }

            if (a == 4) {
                redis_bool = true;
                system("/usr/share/stats/inc/redis/a.out");
                redis_bool = false;
                cout << text; printf("Stats - ");
                std::cin >> a;
            }
            if (a == 5) {
                printf("Спасибо за использование данной программы!\nВерсия - 1.0.0\nПо обращениям с ошибками - откройте вопрос на https://github.com/Mr666dd/Stats\n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1500));
                return 0;
            }
            else {
                printf("Stats - Неизвестный выбор! Повторите его!\n");
                std::cin >> a;
            }
        }

















        printf("Хотите продолжить использовать программу?\n0 - Выход\n1 - Продолжить использование\n");
        std::cin >> c;
        if (c == 1) {
            printf("\nStats - ");
            b = true;
            a = 0;
        }
        else if (c == 0) {
            printf("Спасибо за использование данной программы! Удачи!\nВерсия - 1.0.0\n");
            //system("cd /usr/share/stats/client/ && ./a.out");
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
            return 0;
        }
    }
}

