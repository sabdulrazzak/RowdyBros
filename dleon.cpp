#include "fonts.h"

void show_my_creds(int n, int m) {
        
        Rect r;
        r.bot = n;
        r.left = m;
        r.center = 1;
        ggprint8b(&r, 16, 0x00ff0000, "Ed did some work on the github");

}
