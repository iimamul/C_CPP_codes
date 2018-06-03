#include<stdio.h>

int main()
{
    int winner=0,choice=0,row=0,column=0,line,i;
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

    for(i=0;i<=9 && winner==0;i++)
    {


        printf("\n\n");
        printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);

        do
        {
            printf("Please enter the number of the square where you want to place your X: ");
            scanf("%d",&choice);
            row=--choice/3;
            column=choice%3;

        }
        while(choice<0 || choice>9 || board[row][column]>'9');

        board[row][column]='X';

        if(board[0][1]=='X')
            board[0][0]='O';
        else if(board[1][1]=='X')
            board[2][0]='O';
        else if(board[2][2]=='X')
            board[1][2]='O';
        else if(board[1][2]=='X')
            board[1][0]='O';
        else if(board[0][2]=='X')
            board[1][1]='O';
        else if(board[0][0]=='X')
            board[2][0]='O';
        else if(board[1][0]=='X')
            board[1][2]='O';
        else if(board[2][0]=='X')
            board[0][2]='O';
        else if(board[2][1]=='X')
            board[0][0]=='O';
        else
            printf("invalid choice");



        for(line=0; line<=2;line++)
        {
            if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) ||
                board[0][2]==board[1][1] && board[0][2]==board[2][2])
                    winner = 1;

            else if((board[line][0]==board[line][1]&&board[line][0]==board[line][2]) ||
                    (board[0][line]==board[1][line]&&board[0][line]==board[2][line]))
                        winner= 1;

        }

    }

    printf("\n\n");
    printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);

    if(winner==0)
        printf("Draw match");

    else
        printf("You won");


    return 0;
}
