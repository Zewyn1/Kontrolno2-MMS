#include<stdio.h>
#include <stdint.h>
struct stu_a {
    int i;
    char c;
};
struct stu_b {
    char* p;
    char c;
};
struct stu_c {
    int i[2];
    long l;
    char c;
};
struct stu_d {
    char c1;
    int i[3];
    char c2;
};
struct stu_cd {
    char c;
    struct stu_d;
};
struct stu_f {
    int a : 2;
    int b : 4;
};
union un_g {
    uint8_t a;
    uint16_t b;
    uint8_t* p;
};
union un_h {
    uint32_t a;
    struct {
        uint16_t b;
        uint16_t c;
    };
};
union un_i {
    uint32_t a;
    uint8_t b[4];
};

int main(){
    printf("Size of int: %zu bytes\n", sizeof(struct stu_a));
    printf("Size of int: %zu bytes\n", sizeof(struct stu_b));
    printf("Size of int: %zu bytes\n", sizeof(struct stu_c));
    printf("Size of int: %zu bytes\n", sizeof(struct stu_d));
    printf("Size of int: %zu bytes\n", sizeof(struct stu_cd));
    printf("Size of int: %zu bytes\n", sizeof(struct stu_f));
    printf("Size of int: %zu bytes\n", sizeof(union un_g));
    printf("Size of int: %zu bytes\n", sizeof(union un_h));
    printf("Size of int: %zu bytes\n", sizeof(union un_i));
}
