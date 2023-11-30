#include <stdio.h>
#include <stdlib.h>

// 형식 선언 
struct student {
    int ID;          // 학번 
    char name[100];  // 이름 
    double score;    // 학점 
};

int main(int argc, char *argv[])
{
    // instance 선언 
    struct student s1 = {123, "sohee", 4.3 };
    
    // 다른 값 변경 
    s1.ID = 12345;
    s1.name[0] = 'c';
    s1.score = 0.7;
    
    // 출력 
    printf("ID: %i \nname: %s \nscore: %.2f\n", s1.ID, s1.name, s1.score);
    system("PAUSE");	
    return 0;
}
