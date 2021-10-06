#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("\nUsage: nili [OPTIONS] [GROUP] [PROFILE]\n\n[OPTIONS]:\nlist: list [PROFILE] in [SET] with corresponding gamma values.\ncreate or cr: create new [PROFILE] in [GROUP], if does not exist.\nupdate or up: update [PROFILE] in [GROUP], if it exist.\ndelete or dl: delete [PROFILE] in [GROUP], if it exist.\n\n[GROUP]:\nEnter [GROUP] name to group multiple profile(s).\n\n[PROFILE]:\nEnter profile name which contain gamma values, which xorg-xrandr will use.\n\n");
        return 2;
    }

    switch (arg[1])
    {
        case "create":
            create();
            break;
        case "cr":
            create();
            break;
        case "update":
            update();
            break;
        case "up":
            update();
            break;
        case "delete":
            update();
            break;

}
