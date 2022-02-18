// Stats.cpp: определяет точку входа для приложения.
//
#include "Stats.h"
int a;
bool b = true, nginx_bool = true;
int c;
int nginx_system, wings_system;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Stats - программа для проверки и управление сервисами.\n");
    printf("\nStats - ");
    while (b == true) {
        printf("Введите название сервиса: \n1 - Nginx\n2 - Wings(Pterodactyl Daemon)\n3 - MySQL\n4 - Redis\nПожалуйста, не пишите сюда буквы! Программа начинает ломатся!\nStats - ");
        std::cin >> a;
        while (b == true) {
            if (a == 1) {
                nginx_bool = true;
                while (nginx_bool == true) {
                    printf("Stats - Сведенья Nginx: \n");
                    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                    system("systemctl status nginx");
                    printf("Stats - Что вы хотите сделать с Nginx?\n0 - Остановить\n1 - Запустить\n2 - Перезапустить\n3 - Вернутся к выбору\n");
                    std::cin >> nginx_system;
                    if (nginx_system == 0) {
                        system("systemctl stop nginx");
                        printf("Stats - Сервис nginx был остановлен\n");
                    }
                    else if (nginx_system == 1) {
                        system("systemctl start nginx");
                        printf("Stats - Сервис nginx был запущен\n");
                    }
                    else if (nginx_system == 2) {
                        system("systemctl restart nginx");
                        printf("Stats - Сервис nginx был перезапущен\n");
                    }
                    else if (nginx_system == 3) {
                        printf("Stats - Выход\n");
                        break;
                    }
                    else {
                        printf("Неизвестный выбор! Повторите его!\n");
                        std::cin >> a;
                    }
                }
            }
            nginx_bool = false;
            printf("Введите название сервиса: \n1 - Nginx\n2 - Wings(Pterodactyl Daemon)\n3 - MySQL\n4 - Redis\nПожалуйста, не пишите сюда буквы! Программа начинает ломатся!\nStats - ");
            std::cin >> a;
            if (a == 2) {
                printf("Stats - Сведенья Wings: \n");
                std::this_thread::sleep_for(std::chrono::milliseconds(1200));
                system("systemctl status wings");
                printf("Stats - Что вы хотите сделать с Wings?\n0 - Остановить\n1 - Запустить\n2 - Перезапустить\n");
                std::cin >> wings_system;
                if (wings_system == 0) {
                    system("systemctl stop wings");
                    printf("Stats - Сервис wings был остановлен\n");
                }
                else if (wings_system == 1) {
                    system("systemctl start wings");
                    printf("Stats - Сервис wings был запущен\n");
                }
                else if (wings_system == 2) {
                    system("systemctl restart wings");
                    printf("Stats - Сервис wings был перезапущен\n");
                }
                else if (wings_system == 3) {
                    printf("Stats - Выход\n");
                    break;
                }
                else {
                    printf("Stats - Неизвестная команда. Повторите ввод:\n");
                    std::cin >> wings_system;
                }
            }
            else if (a == 3) {
                system("systemctl status mysql");
                b = false;
            }
            else if (a == 4) {
                system("systemctl status redis");
                b = false;
            }
            //else {
            //printf("Неизвестный выбор! Повторите его!\n");
            //std::cin >> a;
        }
    }
    printf("Stats - Хотите продолжить использовать программу?\n0 - Выход\n1 - Продолжить использование\n");
    std::cin >> c;
    if (c == 1) {
        printf("\nStats - ");
        b = true;
        a = 0;
    }
    else if (c == 0) {
        printf("Спасибо за использование данной программы! Удачи!\nВерсия - {VERSION}\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        b = false;
    }
}
//return 0;
//}
