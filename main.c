#include <stdio.h>
#include <stdlib.h>

// ���� ���� 
struct student {
    int ID;          // �й� 
    char name[100];  // �̸� 
    double score;    // ���� 
};

int main(int argc, char *argv[])
{
    // instance ���� 
    struct student s1 = {123, "sohee", 4.3 };
    
    // �ٸ� �� ���� 
    s1.ID = 12345;
    s1.name[0] = 'c';
    s1.score = 0.7;
    
    // ��� 
    printf("ID: %i \nname: %s \nscore: %.2f\n", s1.ID, s1.name, s1.score);
    system("PAUSE");	
    return 0;
}
