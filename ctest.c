#include <stdio.h>
#include <string.h>

/*
typedef struct Car {
    char brand[20];
    char model[20];
} Car;
*/
int main(void){
 /*
{
    struct point {
        int x_pos;
        int y_pos;
    };

    struct point point1 = {0, 0};

    printf("x cordinate is: %d, and y cordinate is %d\n", point1.x_pos, point1.y_pos);

    int move(struct point, int move_x, int move_y){
        point.x_pos = point.x_pos + move_x;
        point.y_pos = point.y_pos + move_y;
    };
}*/

/*
    Car car1;
    strcpy(car1.brand, "BYD");
    strcpy(car1.model, "Shark");
    printf("Car brand is: %s, and model is: %s\n", car1.brand, car1.model);

    char *car_atr_pointer;
    car_atr_pointer = &car1.brand[0];
    printf("Car brand is: %s\n", car_atr_pointer);

    struct Car *car_pointer2;
    car_pointer2 = &car1;
    printf("Car brand is: %s, and model is: %s\n", car_pointer2->brand, car_pointer2->model);
    printf("the size of car pointer is: %d\n", sizeof(car_pointer2));
    printf("the address of car pointer is: %p\n", car_pointer2);
    char *car_atr_pointer3, *car_atr_pointer4;
    car_atr_pointer3 = &car1.brand[0];
    car_atr_pointer4 = &car1.model[0];
    printf("Car brand is: %s, and model is: %s\n", car_atr_pointer3, car_atr_pointer4);

*/
char buffer[100];
printf("Enter a string: ");
buffer = getline();

/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer = NULL;
    size_t bufsize = 0;
    ssize_t characters;

    printf("请输入一行文字: ");
    characters = getline(&buffer, &bufsize, stdin);

    if (characters != -1) {
        printf("你输入了: %s", buffer);
        printf("读取的字符数: %zd\n", characters);
        printf("缓冲区大小: %zu\n", bufsize);
    }

    free(buffer); // 必须手动释放内存
    return 0;
}
*/

}
