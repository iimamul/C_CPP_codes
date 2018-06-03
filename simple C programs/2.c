#include<stdio.h>

void game(int a)
{
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    if(a==2)
    {
        board[0][1]='X';
        board[1][1]='O';
    }


    printf("\n\n");
    printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);
    return;
}
int main()
{
    int n;
    printf("enter the number where you want to put your  ");
    scanf("%d",&n);
    game(n);
}
