#include <stdio.h>

int stack[3], top=-1,i, temp, num;

void numPush();

void numPop();

void numDisplay();

void numPeep();

void numSearch();

int main()
{
    int ch;
    menu:
    printf(" 1: Push \n 2: POP \n 3: Display \n 4: Peep \n 5: Search \n 6: Exit\n");// menu for Instruction
    printf("Insert Any Operation:");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            numPush();
            break;
        case 2:
            numPop();
            break;
        case 3:
            numDisplay();
            break;
        case 4:
            numPeep();
            break;
        case 5:
            numSearch();
            break;
        case 6:
            goto exit;
            break;
    }

    goto menu;

        exit:
    return 0;
}

void numSearch() {

    if(top <= -1) {
        printf("Stack is Empty\n");
    }
    else{
        printf("Enter Element Which You Search:");
        scanf("%d", &temp);
        for(i=0; i<=top; i++){
            if(stack[i] == temp){
                num = i;
                break;
            }
        }
        printf("You Number %d is At Position %d\n", temp, num);
    }

}

void numPeep() {
    int data;

    if(top <= -1){
        printf("Stack is Empty\n");
    } else{
        printf("Enter a Element Position where store:");
        scanf("%d", &num);
        printf("Enter a Element Value:");
        scanf("%d", &data);

        stack[num] = data;
    }

}

void numDisplay() {

    if(top <= -1){
        printf("Stack is Empty\n");
    }
    else{
        for(i = top; i > -1; i--){
            printf("%d\n", stack[i]);
        }
    }

}

void numPop() {

    if(top <= -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Last Element is Deleted which is: %d\n", stack[top]);
        top--;
    }
}

void numPush() {

    if(top >= 2){
        printf("Stack is OverFlow\n");
    }
    else{
        printf("Enter a Number:");
        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}
