#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
   // int gd = DETECT, gm;
   // initgraph(&gd, &gm, "");

   // Draw head
   circle(300, 200, 50);

   // Draw torso
   line(300, 250, 300, 400);

   // Draw arms
   line(300, 300, 350, 350);
   line(300, 300, 250, 350);

   // Draw legs
   line(300, 400, 350, 450);
   line(300, 400, 250, 450);

   getch();
   closegraph();
   return 0;
}
