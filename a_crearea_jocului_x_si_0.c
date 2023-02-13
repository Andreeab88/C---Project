#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>

#define FIRST_PLAYER 'X'
#define SECOND_PLAYER 'O'

void draw_board();
bool is_cell_free(int cell);
int char_to_int(char choice);
void place_token(int cell);
void change_player();
bool check_game_over();
bool is_row_win();
bool is_col_win();
bool is_diagonal_win();
bool is_full();


//trebuie o variabila globala(char array bidimensionala 3/3), pentru a retine alegerile utilizatorilor
char g_board[3][3] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};

char g_player = FIRST_PLAYER;



int main(void)
{
  bool is_game_over = false;
  char choice; //pentru pastrarea alegerii utilizatorului
int cell;

  do
  {
   draw_board();
   printf("Alege celula: \n", g_player);
    choice = getch();

    cell = char_to_int(choice)-1;

    if(is_cell_free(cell)) //daca celula este libera
{
    place_token(cell);//plasam

    draw_board();

    is_game_over = check_game_over();//verificam sfarsitul jocului

    change_player();//dam controlul
}

  }while(!is_game_over);

printf("Sfarsitul jocului!\r\n");



    return 0;
}

void draw_board()
{
    system("cls");

    printf("\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", g_board[0][0], g_board[0][1], g_board[0][2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", g_board[1][0], g_board[1][1], g_board[1][2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", g_board[2][0], g_board[2][1], g_board[2][2]);
    printf("   |   |   \n");

printf("\n");
}

bool is_cell_free(int cell)
{
    //cell 0 - 0 0
    //cell 1 - 0 1
    //cell 2 - 0 2
    //cell 3 - 1 0
    //cell 4 - 1 1
    //cell 5 - 1 2
    //........
    //cell 8 - 2 2
  int row = cell / 3;
  int col = cell % 3;
  bool is_free;

  is_free = (g_board[row][col] != FIRST_PLAYER && g_board[row][col] != SECOND_PLAYER);

  return is_free;
}

int char_to_int(char choice) //scriem functia pentru convertirea cifrelor din char in int
{

  return choice - 48; //daca utilizatorul a introdus 7==> se va face 55(este codul pentru cifra 7 din tabelul ASCII)-48
}

void place_token(int cell)
{
   int row = cell / 3;
  int col = cell % 3;

  g_board[row][col] = g_player; //plasam tokenúl

}


void change_player()
{
   // if(g_player == FIRST_PLAYER)
        //g_player = SECOND_PLAYER;
   // else
       // g_player = FIRST_PLAYER;

    //if se scrie mai optimizat asa:
    g_player = (g_player == FIRST_PLAYER) ? SECOND_PLAYER : FIRST_PLAYER;
}


bool check_game_over() //verificam daca jocul nu a luat sfarsit
{
  bool is_over;

  is_over = is_row_win() || is_col_win() || is_diagonal_win() || is_full();

}

bool is_row_win() //iteram pe fiecare rand, pentru a vedea daca s-au format 3 de X sau 3 de O
{

    int i;

   for(i = 0; i <3; i++)
   {
       if (g_board[i][0] == g_board[i][1] &&
           g_board[i][1] == g_board[i][2])
       {
           printf("%c a castigat pe randul %d\n", g_player, i+1);
           return true;

       }
   }
  return false;
}


bool is_col_win() //iteram pe fiecare coloana, pentru a vedea daca s-au format 3 de X sau 3 de O
{

    int i;

   for(i = 0; i <3; i++)
   {
       if (g_board[0][i] == g_board[1][i] &&
           g_board[1][i] == g_board[2][i])
       {
           printf("%c a castigat pe coloana %d\n", g_player, i+1);
           return true;

       }
   }
  return false;
}


bool is_diagonal_win()
{
   //verificam diagonala principala
   if (g_board[0][0] == g_board[1][1] &&
           g_board[1][1] == g_board[2][2])
       {
           printf("%c a castigat pe diagonala principala %d\n", g_player);
           return true;

       }

       //verificam diagonala secundara
       if (g_board[0][2] == g_board[1][1] &&
           g_board[1][1] == g_board[2][0])
       {
           printf("%c a castigat pe diagonala secundara %d\n", g_player);
           return true;

       }
   return false;
}


bool is_full()
{

    int i,j;

    for(i = 0; i< 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(g_board[i][j] != FIRST_PLAYER && g_board[i][j] != SECOND_PLAYER)
                return false;
        }
        return true;
    }
}


/*         |   |
        1  | 2 | 3
        ___|___|___
        4  | 5 |  6
        ___|___|___
        7  | 8 | 9
           |   |

           */
