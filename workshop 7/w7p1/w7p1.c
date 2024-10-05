/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define MINIMUM_PATHLENGTH 10
#define MAXIMUM_PATHLENGTH 70
#define MINIMUM_LIVES 1
#define MAXIMUM_LIVES 10
#define MULTIPLE 5



struct playerInfo {
    int lives;
    char character;
    int treasureCount;
    int positionHistory[MAXIMUM_PATHLENGTH];
};


struct gameInfo {
    int moves;
    int pathLength;
    int bombLocations[MAXIMUM_PATHLENGTH];
    int treasureLocations[MAXIMUM_PATHLENGTH];
};

int main(void)
{
    
    int a, i, n; 

    struct playerInfo player;
    struct gameInfo game;

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n");
    printf("\n");

    
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.character);

    do {
        printf("Set the number of lives: ");
        scanf(" %d", &player.lives);

        if (player.lives < MINIMUM_LIVES || player.lives > MAXIMUM_LIVES)
        {
            printf("     Must be between 1 and 10!\n");
        }
    } while (player.lives < MINIMUM_LIVES || player.lives > MAXIMUM_LIVES);

    printf("Player configuration set-up is complete\n");
   

    
    printf("\nGAME Configuration\n");
    printf("------------------\n");

    
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf(" %d", &game.pathLength);

        if ((game.pathLength < MINIMUM_PATHLENGTH || game.pathLength > MAXIMUM_PATHLENGTH) || (game.pathLength % MULTIPLE != 0))
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    } while ((game.pathLength < MINIMUM_PATHLENGTH || game.pathLength > MAXIMUM_PATHLENGTH) || (game.pathLength % MULTIPLE != 0));

    
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf(" %d", &game.moves);

        if (game.moves < player.lives || game.moves >(int) (0.75 * game.pathLength))
        {
            printf("    Value must be between %d and %d\n", player.lives, (int)(0.75 * game.pathLength));
        }
    } while (game.moves < player.lives || game.moves >(int) (0.75 * game.pathLength));
    

    
    printf("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);

    
    for (a = 0; a < game.pathLength; a += 5)
    {
        printf("   Positions [%2d-%2d]: ", a + 1, a + 5);
        scanf(" %d %d %d %d %d", &game.bombLocations[a], &game.bombLocations[a + 1], &game.bombLocations[a + 2], &game.bombLocations[a + 3], &game.bombLocations[a + 4]);
    }

    printf("BOMB placement set\n");
    

    
    printf("\nTREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);

    
    for (a = 0; a < game.pathLength; a += 5)
    {
        printf("   Positions [%2d-%2d]: ", a + 1, a + 5);
        scanf(" %d %d %d %d %d", &game.treasureLocations[a], &game.treasureLocations[a + 1], &game.treasureLocations[a + 2], &game.treasureLocations[a + 3], &game.treasureLocations[a + 4]);
    }

    printf("TREASURE placement set\n");
   

    printf("\nGAME configuration set-up is complete...\n");
    
     
    
    printf("\n------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.character);
    printf("   Lives      : %d\n", player.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n");
    

    
    printf("\nGame:\n");
    printf("   Path Length: %d\n", game.pathLength);

    
    printf("   Bombs      : ");
    
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%d", game.bombLocations[i]);
    }
    

    
    printf("\n   Treasure   : ");
    
    for (n = 0; n < game.pathLength; n++)
    {
        printf("%d", game.treasureLocations[n]);
    }
   

    
    printf("\n\n====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n\n");
   

    return 0;
}