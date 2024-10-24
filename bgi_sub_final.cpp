#include<bits/stdc++.h>
#include<graphics.h>
#include"maincoding.h"
#include"interface.h"
#include"all_functions.h"

int midx,midy,maxx,maxy;

int main()
{
    initwindow(getmaxwidth( ), getmaxheight( ));

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    maxx=getmaxx();
    maxy=getmaxy();

    game();


    getch();
    closegraph();

    return 0;
}
