#include <stdio.h>
int main()
{
    int a, b, c;
    int right = 0;
    int obtuse = 0;
    int acute = 0;
    int wrong = 0;
    printf("Enter the angles of the triangle : \n");
    for(int i=0; i<5; i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a+b+c != 180){
            wrong +=1;
            printf("Invalid Entry");
        }
        else{
            if(a == 90 && b < 90 && c < 90 || a < 90 && b == 90 && c < 90 || a < 90 && b < 90 && c == 90){
                right +=1;
            }
            else if(a < 90 && b < 90 && c < 90){
                acute +=1;
            }
            else if(a > 90 && b < 90 && c < 90 || a < 90 && b > 90 && c < 90 || a < 90 && b < 90 && c > 90){
                obtuse +=1;
            }
        }
    }
    printf("Wrong Enteries : %d",wrong);
    printf("\nRight Angled Triangle : %d",right);
    printf("\nAcute Angled Triangle : %d",acute);
    printf("\nObtuse Angled Triangle : %d",obtuse);
    return 0;
}