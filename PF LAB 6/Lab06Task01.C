#include <stdio.h>

int main() {
      
    int num = 0;
    int count = 0;
    
    for (int i = 0; i < 30; i++)
    {
        printf("enter 1 = present or 0 = absent ");
        scanf("%d", &num);
        
        if (num == 1){
            count++;
        }
    }    
    
    printf("count = %d", count);

    return 0;
}

