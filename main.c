#include <libdragon.h>
#include <stdio.h>

/*
 * Star Fox: World Grand Prix
 * Milestone 0: verify that the N64 project boots and displays a title screen.
 *
 * This is intentionally a small first step. Next we will add controller
 * input, then the ship and track renderer.
 */

int main(void)
{
    console_init();

    printf("\n\n");
    printf("  STAR FOX: WORLD GRAND PRIX\n");
    printf("  ==========================\n\n");
    printf("  N64 HOMEbrew STARTER BUILD\n\n");
    printf("  MILESTONE 0: BOOT SCREEN\n\n");
    printf("  Ship:       PLAYER-01\n");
    printf("  Circuit:    TEST LOOP\n");
    printf("  Status:     SYSTEM ONLINE\n\n");
    printf("  NEXT: CONTROLLER + SHIP\n\n");
    printf("  Original homebrew project.\n");
    printf("  Not an official Nintendo game.\n");

    while (1) {
        /* Keep the program running. Gameplay is added in the next milestone. */
    }

    return 0;
}
