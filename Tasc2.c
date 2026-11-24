#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    struct tm* mytime; 
    time_t t;
    
   
    t = time(NULL);

    
    mytime = localtime(&t);

    
    printf("Московское время %02d:%02d:%02d \n", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
    //1
    printf("День недели %d \n", mytime->tm_wday);
    //2
    printf("Дата: %02d:%02d:%02d \n", mytime->tm_mday, mytime->tm_mon + 1, mytime->tm_year);
    //3
    printf("День %d и месяц ноябрь \n", mytime->tm_mday);
    //5
    printf("До воскресенья %d дней и %d часов \n", 7 -(mytime->tm_wday), 24 - mytime->tm_hour);
    //4
    printf("Cегодня %d-й день %d года \n", mytime->tm_mday, mytime->tm_year);
    //6
    printf("C первой пары прошло %d часов %d минут \n", (mytime->tm_hour)-8, (mytime->tm_min) - 30);
    //7
    printf("До Нового года осталось %d месяцев и %d дней \n", 12-(mytime->tm_mon+1), mytime->tm_mday);
    //8
    printf("До конца пары %d минут и %d секунд \n", 40 - mytime->tm_min, 60-mytime->tm_sec);
    //9
    printf("До конца месяца %d дней, до конца года %d месяцев \n",  30 - mytime->tm_mday, 12 - (mytime->tm_mon + 1));
}