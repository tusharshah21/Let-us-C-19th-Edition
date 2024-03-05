// In an inter-college competition, various sports like cricket,
// basketball, football, hockey, lawn tennis, table tennis, carom and
// chess are played between different colleges. The information
// regarding the games won by a particular college is stored in bit
// numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8 of an integer variable game. The
// college that wins in 5 or more than 5 games is awarded the
// Champion of Champions trophy. If a number representing the bit
// pattern mentioned above is entered through the keyboard, then
// write a program to find out whether the college won the Champion
// of the Champions trophy or not, along with the names of the games
// won by the college.

#include <stdio.h>
int main(){
    int game;
    int cnt,count=0;
    printf("Enter the game number: ");
    scanf("%d",&game);
    for(cnt=1;cnt<=256;cnt*=2){
        if(game&cnt){
            count++;
        }
    }
    if(count>=5){
        printf("Champion of Champions\n");
        if(game&1){
            printf("Cricket\n");
        }
        if(game&2){
            printf("Basketball\n");
        }
        if(game&4){
            printf("Football\n");
        }
        if(game&8){
            printf("Hockey\n");
        }
        if(game&16){
            printf("Lawn Tennis\n");
        }
        if(game&32){
            printf("Table Tennis\n");
        }
        if(game&64){
            printf("Carom\n");
        }
        if(game&128){
            printf("Chess\n");
        }
    }
    else{
        printf("Not Champion of Champions\n");
    }
    return 0;
}