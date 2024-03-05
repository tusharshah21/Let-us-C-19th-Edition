// An animal could be a canine (dog, wolf, fox, etc.), a feline (cat, lynx,
// jaguar, etc.), a cetacean (whale, narwhal, etc.) or a marsupial (koala,
// wombat, etc.). The information whether a particular animal is
// canine, feline, cetacean, or marsupial is stored in bit number 0, 1, 2
// and 3 respectively of an integer variable type. Bit number 4 of the
// variable type stores the information about whether the animal is Carnivore or Herbivore.
// For the following animal, complete the program to determine
// whether the animal is an herbivore or a carnivore. Also determine
// whether the animal is a canine, feline, cetacean or a marsupial.

#include <stdio.h>
int main()
{
    struct animal{
        char name[30];
        int type;
    };
    static struct animal a={"OCELET",18};
    int ani;
    printf("Enter the animal number: ");
    ani=a.type;
    if((ani&1)==1)
        printf("Canine\n");
    else if((ani&2)==2)
        printf("Feline\n");
    else if((ani&4)==4)
        printf("Cetacean\n");
    else if((ani&8)==8)
        printf("Marsupial\n");
    printf("Animal is also a ");
    if((ani&16)==16)
        printf("Carnivore\n");
    else
        printf("Herbivore\n");
    return 0;
}