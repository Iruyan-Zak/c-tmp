#include<stdio.h>
#include<time.h>

typedef struct Clock Clock;
struct Clock{
    int time;
    char delimiter;
    void (*to_string)(Clock*, char[10]);
};

void clock_to_string(Clock* c, char buf[10]){
    int hour = c->time/3600;
    int minute = c->time%3600/60;
    int second = c->time%60;
    snprintf(buf, 10, "%02d%c%02d%c%02d", hour, c->delimiter, minute, c->delimiter, second);
}

Clock create_clock(){
    Clock c;
    c.time = (time(NULL) + 9 * 3600) % 86400;
    c.delimiter = ':';
    c.to_string = clock_to_string;
    return c;
}

int main(void){
    Clock c = create_clock();
    char str[10];
    c.to_string(&c, str);
    printf("%s\n", str);
}

