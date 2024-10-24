
/***introductory page or loading page***/

void loading()
{
    readimagefile("loading2.jpg",525,690,815,715);
    setcolor(DARKGRAY);
    rectangle(0,665,getmaxwidth(),680);

    for(int i=0; i<=getmaxwidth(); i++)
    {
        setcolor(COLOR(140,256,256));
        line(i,665,i,680);
        if(i>250 && i<350) delay(5);
        if(i>480 && i<550) delay(6);
        if(i>670 && i<710) delay(5);
        if(i>860 && i<910) delay(4);
        if(i>1000 && i<1030) delay(5);
        else delay(1.5);

    }

}

void level_end_writing()
{
    readimagefile("level_complete.jpg",850,520,1250,570);
    readimagefile("next_level.jpg",850,590,1350,630);

}

void level15()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"harrypotter_piece_8.JPG");
    strcpy(a[2],"harrypotter_piece_4.JPG");
    strcpy(a[3],"harrypotter_piece_1.JPG");
    strcpy(a[4],"harrypotter_piece_3.JPG");
    strcpy(a[5],"harrypotter_piece_7.JPG");
    strcpy(a[6],"harrypotter_piece_2.JPG");
    strcpy(a[7],"harrypotter_piece_6.JPG");
    strcpy(a[8],"harrypotter_piece_9.JPG");
    strcpy(a[9],"harrypotter_piece_5.JPG");

    strcpy(b[1],"harrypotter_piece_1.JPG");
    strcpy(b[2],"harrypotter_piece_2.JPG");
    strcpy(b[3],"harrypotter_piece_3.JPG");
    strcpy(b[4],"harrypotter_piece_4.JPG");
    strcpy(b[5],"harrypotter_piece_5.JPG");
    strcpy(b[6],"harrypotter_piece_6.JPG");
    strcpy(b[7],"harrypotter_piece_7.JPG");
    strcpy(b[8],"harrypotter_piece_8.JPG");
    strcpy(b[9],"harrypotter_piece_9.JPG");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_15.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>15)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
    readimagefile("congrats_picture.jpg",0,0,getmaxwidth(),getmaxheight());

    getch();
    closegraph();
}

void level14()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"linkinpark_piece_8.jpg");
    strcpy(a[2],"linkinpark_piece_6.jpg");
    strcpy(a[3],"linkinpark_piece_4.jpg");
    strcpy(a[4],"linkinpark_piece_3.jpg");
    strcpy(a[5],"linkinpark_piece_7.jpg");
    strcpy(a[6],"linkinpark_piece_1.jpg");
    strcpy(a[7],"linkinpark_piece_9.jpg");
    strcpy(a[8],"linkinpark_piece_2.jpg");
    strcpy(a[9],"linkinpark_piece_5.jpg");

    strcpy(b[1],"linkinpark_piece_1.jpg");
    strcpy(b[2],"linkinpark_piece_2.jpg");
    strcpy(b[3],"linkinpark_piece_3.jpg");
    strcpy(b[4],"linkinpark_piece_4.jpg");
    strcpy(b[5],"linkinpark_piece_5.jpg");
    strcpy(b[6],"linkinpark_piece_6.jpg");
    strcpy(b[7],"linkinpark_piece_7.jpg");
    strcpy(b[8],"linkinpark_piece_8.jpg");
    strcpy(b[9],"linkinpark_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_14.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));

    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}


void level13()
{
    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"vector_piece_4.jpg");
    strcpy(a[2],"vector_piece_8.jpg");
    strcpy(a[3],"vector_piece_5.jpg");
    strcpy(a[4],"vector_piece_1.jpg");
    strcpy(a[5],"vector_piece_9.jpg");
    strcpy(a[6],"vector_piece_3.jpg");
    strcpy(a[7],"vector_piece_7.jpg");
    strcpy(a[8],"vector_piece_6.jpg");
    strcpy(a[9],"vector_piece_2.jpg");

    strcpy(b[1],"vector_piece_1.jpg");
    strcpy(b[2],"vector_piece_2.jpg");
    strcpy(b[3],"vector_piece_3.jpg");
    strcpy(b[4],"vector_piece_4.jpg");
    strcpy(b[5],"vector_piece_5.jpg");
    strcpy(b[6],"vector_piece_6.jpg");
    strcpy(b[7],"vector_piece_7.jpg");
    strcpy(b[8],"vector_piece_8.jpg");
    strcpy(b[9],"vector_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_13.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();

    getch();
    cleardevice();
}

void level12()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"srilanka_piece_4.jpg");
    strcpy(a[2],"srilanka_piece_9.jpg");
    strcpy(a[3],"srilanka_piece_1.jpg");
    strcpy(a[4],"srilanka_piece_3.jpg");
    strcpy(a[5],"srilanka_piece_8.jpg");
    strcpy(a[6],"srilanka_piece_5.jpg");
    strcpy(a[7],"srilanka_piece_2.jpg");
    strcpy(a[8],"srilanka_piece_6.jpg");
    strcpy(a[9],"srilanka_piece_7.jpg");

    strcpy(b[1],"srilanka_piece_1.jpg");
    strcpy(b[2],"srilanka_piece_2.jpg");
    strcpy(b[3],"srilanka_piece_3.jpg");
    strcpy(b[4],"srilanka_piece_4.jpg");
    strcpy(b[5],"srilanka_piece_5.jpg");
    strcpy(b[6],"srilanka_piece_6.jpg");
    strcpy(b[7],"srilanka_piece_7.jpg");
    strcpy(b[8],"srilanka_piece_8.jpg");
    strcpy(b[9],"srilanka_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_12.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}

void level11()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"radiation_piece_6.jpg");
    strcpy(a[2],"radiation_piece_3.jpg");
    strcpy(a[3],"radiation_piece_5.jpg");
    strcpy(a[4],"radiation_piece_2.jpg");
    strcpy(a[5],"radiation_piece_7.jpg");
    strcpy(a[6],"radiation_piece_4.jpg");
    strcpy(a[7],"radiation_piece_8.jpg");
    strcpy(a[8],"radiation_piece_1.jpg");
    strcpy(a[9],"radiation_piece_9.jpg");

    strcpy(b[1],"radiation_piece_1.jpg");
    strcpy(b[2],"radiation_piece_2.jpg");
    strcpy(b[3],"radiation_piece_3.jpg");
    strcpy(b[4],"radiation_piece_4.jpg");
    strcpy(b[5],"radiation_piece_5.jpg");
    strcpy(b[6],"radiation_piece_6.jpg");
    strcpy(b[7],"radiation_piece_7.jpg");
    strcpy(b[8],"radiation_piece_8.jpg");
    strcpy(b[9],"radiation_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_11.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();

    getch();
    cleardevice();
}

void level10()
{
    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"mapeurope_piece_3.jpg");
    strcpy(a[2],"mapeurope_piece_9.jpg");
    strcpy(a[3],"mapeurope_piece_5.jpg");
    strcpy(a[4],"mapeurope_piece_8.jpg");
    strcpy(a[5],"mapeurope_piece_1.jpg");
    strcpy(a[6],"mapeurope_piece_6.jpg");
    strcpy(a[7],"mapeurope_piece_4.jpg");
    strcpy(a[8],"mapeurope_piece_7.jpg");
    strcpy(a[9],"mapeurope_piece_2.jpg");

    strcpy(b[1],"mapeurope_piece_1.jpg");
    strcpy(b[2],"mapeurope_piece_2.jpg");
    strcpy(b[3],"mapeurope_piece_3.jpg");
    strcpy(b[4],"mapeurope_piece_4.jpg");
    strcpy(b[5],"mapeurope_piece_5.jpg");
    strcpy(b[6],"mapeurope_piece_6.jpg");
    strcpy(b[7],"mapeurope_piece_7.jpg");
    strcpy(b[8],"mapeurope_piece_8.jpg");
    strcpy(b[9],"mapeurope_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_10.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_15.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>15)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}

void level9()
{
    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"moyur_piece_9.jpg");
    strcpy(a[2],"moyur_piece_5.jpg");
    strcpy(a[3],"moyur_piece_2.jpg");
    strcpy(a[4],"moyur_piece_8.jpg");
    strcpy(a[5],"moyur_piece_1.jpg");
    strcpy(a[6],"moyur_piece_7.jpg");
    strcpy(a[7],"moyur_piece_4.jpg");
    strcpy(a[8],"moyur_piece_3.jpg");
    strcpy(a[9],"moyur_piece_6.jpg");

    strcpy(b[1],"moyur_piece_1.jpg");
    strcpy(b[2],"moyur_piece_2.jpg");
    strcpy(b[3],"moyur_piece_3.jpg");
    strcpy(b[4],"moyur_piece_4.jpg");
    strcpy(b[5],"moyur_piece_5.jpg");
    strcpy(b[6],"moyur_piece_6.jpg");
    strcpy(b[7],"moyur_piece_7.jpg");
    strcpy(b[8],"moyur_piece_8.jpg");
    strcpy(b[9],"moyur_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_9.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_15.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }

        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>15)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }

    level_end_writing();
    getch();
    cleardevice();
}

void level8()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"earth_piece_4.jpg");
    strcpy(a[2],"earth_piece_8.jpg");
    strcpy(a[3],"earth_piece_1.jpg");
    strcpy(a[4],"earth_piece_6.jpg");
    strcpy(a[5],"earth_piece_3.jpg");
    strcpy(a[6],"earth_piece_9.jpg");
    strcpy(a[7],"earth_piece_5.jpg");
    strcpy(a[8],"earth_piece_2.jpg");
    strcpy(a[9],"earth_piece_7.jpg");

    strcpy(b[1],"earth_piece_1.jpg");
    strcpy(b[2],"earth_piece_2.jpg");
    strcpy(b[3],"earth_piece_3.jpg");
    strcpy(b[4],"earth_piece_4.jpg");
    strcpy(b[5],"earth_piece_5.jpg");
    strcpy(b[6],"earth_piece_6.jpg");
    strcpy(b[7],"earth_piece_7.jpg");
    strcpy(b[8],"earth_piece_8.jpg");
    strcpy(b[9],"earth_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_8.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_15.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }

        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            // printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>15)
            {
                graph=0;
                break;
            }
        }
    }

    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}


void level7()
{
    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"z_cross_piece_4.jpg");
    strcpy(a[2],"z_cross_piece_8.jpg");
    strcpy(a[3],"z_cross_piece_7.jpg");
    strcpy(a[4],"z_cross_piece_5.jpg");
    strcpy(a[5],"z_cross_piece_3.jpg");
    strcpy(a[6],"z_cross_piece_1.jpg");
    strcpy(a[7],"z_cross_piece_2.jpg");
    strcpy(a[8],"z_cross_piece_6.jpg");
    strcpy(a[9],"z_cross_piece_9.jpg");

    strcpy(b[1],"z_cross_piece_1.jpg");
    strcpy(b[2],"z_cross_piece_2.jpg");
    strcpy(b[3],"z_cross_piece_3.jpg");
    strcpy(b[4],"z_cross_piece_4.jpg");
    strcpy(b[5],"z_cross_piece_5.jpg");
    strcpy(b[6],"z_cross_piece_6.jpg");
    strcpy(b[7],"z_cross_piece_7.jpg");
    strcpy(b[8],"z_cross_piece_8.jpg");
    strcpy(b[9],"z_cross_piece_9.jpg");


    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_7.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        // printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(graph>11)
            {
                graph=0;
                break;
            }
        }
    }

    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}

void level6()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"oroborous_piece_7.jpg");
    strcpy(a[2],"oroborous_piece_2.jpg");
    strcpy(a[3],"oroborous_piece_8.jpg");
    strcpy(a[4],"oroborous_piece_5.jpg");
    strcpy(a[5],"oroborous_piece_9.jpg");
    strcpy(a[6],"oroborous_piece_4.jpg");
    strcpy(a[7],"oroborous_piece_1.jpg");
    strcpy(a[8],"oroborous_piece_6.jpg");
    strcpy(a[9],"oroborous_piece_3.jpg");

    strcpy(b[1],"oroborous_piece_1.jpg");
    strcpy(b[2],"oroborous_piece_2.jpg");
    strcpy(b[3],"oroborous_piece_3.jpg");
    strcpy(b[4],"oroborous_piece_4.jpg");
    strcpy(b[5],"oroborous_piece_5.jpg");
    strcpy(b[6],"oroborous_piece_6.jpg");
    strcpy(b[7],"oroborous_piece_7.jpg");
    strcpy(b[8],"oroborous_piece_8.jpg");
    strcpy(b[9],"oroborous_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_6.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }
        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}


void level5()
{
    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[10][30],b[10][30],temp[80];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"templers_creed_piece_7.jpg");
    strcpy(a[2],"templers_creed_piece_2.jpg");
    strcpy(a[3],"templers_creed_piece_8.jpg");
    strcpy(a[4],"templers_creed_piece_3.jpg");
    strcpy(a[5],"templers_creed_piece_4.jpg");
    strcpy(a[6],"templers_creed_piece_6.jpg");
    strcpy(a[7],"templers_creed_piece_1.jpg");
    strcpy(a[8],"templers_creed_piece_9.jpg");
    strcpy(a[9],"templers_creed_piece_5.jpg");

    strcpy(b[1],"templers_creed_piece_1.jpg");
    strcpy(b[2],"templers_creed_piece_2.jpg");
    strcpy(b[3],"templers_creed_piece_3.jpg");
    strcpy(b[4],"templers_creed_piece_4.jpg");
    strcpy(b[5],"templers_creed_piece_5.jpg");
    strcpy(b[6],"templers_creed_piece_6.jpg");
    strcpy(b[7],"templers_creed_piece_7.jpg");
    strcpy(b[8],"templers_creed_piece_8.jpg");
    strcpy(b[9],"templers_creed_piece_9.jpg");

    registermousehandler(WM_LBUTTONDOWN,click_handler_2);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_5.JPG",900,25,1100,75);
            readimagefile("solve_it.JPG",850,90,1250,140);
            readimagefile("move_11.jpg",850,160,1250,210);
            readimagefile(a[1],200,50,400,250);
            readimagefile(a[2],400,50,600,250);
            readimagefile(a[3],600,50,800,250);
            readimagefile(a[4],200,250,400,450);
            readimagefile(a[5],400,250,600,450);
            readimagefile(a[6],600,250,800,450);
            readimagefile(a[7],200,450,400,650);
            readimagefile(a[8],400,450,600,650);
            readimagefile(a[9],600,450,800,650);

            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,50,400,650);
            line(600,50,600,650);
            line(200,250,800,250);
            line(200,450,800,450);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=8; i++,j++)
                rectangle(189+i,41+j,801+i,652+j);
        }
        int flag=1;
        for(int i=1; i<=9; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
//printf("%s %s\n",a[i],b[i]);
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator_2(mousex(),mousey());
            column=(x1-1)/3;
            row=(x1-1)%3;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,50+200*column,200+200*(row+1),50+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator_2(mousex(),mousey());
            // printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>11)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}


void level4()
{

    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[5][30],b[5][30],temp[50];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"hexagram_piece_3.jpg");
    strcpy(a[2],"hexagram_piece_1.jpg");
    strcpy(a[3],"hexagram_piece_2.jpg");
    strcpy(a[4],"hexagram_piece_4.jpg");
    strcpy(b[1],"hexagram_piece_1.jpg");
    strcpy(b[2],"hexagram_piece_2.jpg");
    strcpy(b[3],"hexagram_piece_3.jpg");
    strcpy(b[4],"hexagram_piece_4.jpg");
    registermousehandler(WM_LBUTTONDOWN,click_handler);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_4.jpg",70,50,300,120);
            readimagefile("solve_it.jpg",450,50,950,125);
            readimagefile("move_4.jpg",650,140,1050,200);
            readimagefile(a[1],200,200,400,400);
            readimagefile(a[2],400,200,600,400);
            readimagefile(a[3],200,400,400,600);
            readimagefile(a[4],400,400,600,600);
            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,200,400,600);
            line(200,400,600,400);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=10; i++,j++)
                rectangle(189+i,189+j,601+i,601+j);
        }
        int flag=1;
        for(int i=1; i<=4; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator(mousex(),mousey());
            column=(x1-1)/2;
            row=(x1-1)%2;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,200+200*column,200+200*(row+1),200+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>4)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}




void level3()
{


    int x1,x2,ct=0,i,j,row,column,cnt=0,graph=1;
    char a[5][30],b[5][30],temp[50];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"pentagram_piece_4.jpg");
    strcpy(a[2],"pentagram_piece_2.jpg");
    strcpy(a[3],"pentagram_piece_1.jpg");
    strcpy(a[4],"pentagram_piece_3.jpg");
    strcpy(b[1],"pentagram_piece_1.jpg");
    strcpy(b[2],"pentagram_piece_2.jpg");
    strcpy(b[3],"pentagram_piece_3.jpg");
    strcpy(b[4],"pentagram_piece_4.jpg");
    registermousehandler(WM_LBUTTONDOWN,click_handler);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_3.jpg",70,50,300,120);
            readimagefile("solve_it.jpg",450,50,950,125);
            readimagefile("move_4.jpg",650,140,1050,200);
            readimagefile(a[1],200,200,400,400);
            readimagefile(a[2],400,200,600,400);
            readimagefile(a[3],200,400,400,600);
            readimagefile(a[4],400,400,600,600);
            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,200,400,600);
            line(200,400,600,400);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=10; i++,j++)
                rectangle(189+i,189+j,601+i,601+j);
        }
        int flag=1;
        for(int i=1; i<=4; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator(mousex(),mousey());
            column=(x1-1)/2;
            row=(x1-1)%2;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,200+200*column,200+200*(row+1),200+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>4)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }

    level_end_writing();
    getch();
    cleardevice();

}


void level2()
{
    int x1,x2,ct=0, cnt=0,i,j,row,column,graph=1;
    char a[5][30],b[5][30],temp[50];
    initwindow(getmaxwidth(),getmaxheight());
    strcpy(a[1],"swastika_piece_2.jpg");
    strcpy(a[2],"swastika_piece_3.jpg");
    strcpy(a[3],"swastika_piece_4.jpg");
    strcpy(a[4],"swastika_piece_1.jpg");
    strcpy(b[1],"swastika_piece_1.jpg");
    strcpy(b[2],"swastika_piece_2.jpg");
    strcpy(b[3],"swastika_piece_3.jpg");
    strcpy(b[4],"swastika_piece_4.jpg");
    registermousehandler(WM_LBUTTONDOWN,click_handler);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_2.jpg",70,50,300,120);
            readimagefile("solve_it.jpg",450,50,950,125);
            readimagefile("move_4.jpg",650,140,1050,200);
            readimagefile(a[1],200,200,400,400);
            readimagefile(a[2],400,200,600,400);
            readimagefile(a[3],200,400,400,600);
            readimagefile(a[4],400,400,600,600);
            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,200,400,600);
            line(200,400,600,400);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=10; i++,j++)
                rectangle(189+i,189+j,601+i,601+j);
        }
        int flag=1;
        for(int i=1; i<=4; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator(mousex(),mousey());
            column=(x1-1)/2;
            row=(x1-1)%2;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,200+200*column,200+200*(row+1),200+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>4)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }
    level_end_writing();
    getch();
    cleardevice();
}

void level1()
{
    int x1,x2,ct=0,row,column,i,j,cnt=0,graph=1;
    char a[5][30],b[5][30],temp[50];
    initwindow(getmaxwidth(),getmaxheight());

    strcpy(a[1],"l1piece_3.jpg");
    strcpy(a[2],"l1piece_1.jpg");
    strcpy(a[3],"l1piece_2.jpg");
    strcpy(a[4],"l1piece_4.jpg");
    strcpy(b[1],"l1piece_1.jpg");
    strcpy(b[2],"l1piece_2.jpg");
    strcpy(b[3],"l1piece_3.jpg");
    strcpy(b[4],"l1piece_4.jpg");
    registermousehandler(WM_LBUTTONDOWN,click_handler);
    while(1)
    {
        if(ct==0)
        {
            readimagefile("startbg3.jpg",0,0,getmaxwidth(),getmaxheight());
            readimagefile("level_1.jpg",70,50,300,120);
            readimagefile("solve_it.jpg",450,50,950,125);
            readimagefile("move_4.jpg",650,140,1050,200);
            readimagefile(a[1],200,200,400,400);
            readimagefile(a[2],400,200,600,400);
            readimagefile(a[3],200,400,400,600);
            readimagefile(a[4],400,400,600,600);
            setcolor(COLOR(170,0,0));
            setlinestyle(3,0,1);
            line(400,200,400,600);
            line(200,400,600,400);
            setlinestyle(0,0,3);
            for(i=0,j=0; i<=10,j<=10; i++,j++)
                rectangle(189+i,189+j,601+i,601+j);
        }
        int flag=1;
        for(int i=1; i<=4; i++)
        {
            if(strcmp(a[i],b[i])!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag) break;

        click=false;
        while(!click) {}
        //printf("%d\n",ct);
        ct++;
        if(ct==1)
        {
            x1=validator(mousex(),mousey());
            column=(x1-1)/2;
            row=(x1-1)%2;
            setcolor(BLUE);
            setlinestyle(2,0,5);
            rectangle(200+200*row,200+200*column,200+200*(row+1),200+200*(column+1));
        }
        else if(ct==2)
        {
            ct=0;
            x2=validator(mousex(),mousey());
            //printf("%d %d\n",x1,x2);
            if(abs(x1-x2)>=1)
            {
                strcpy(temp,a[x1]);
                strcpy(a[x1],a[x2]);
                strcpy(a[x2],temp);
                cnt++;
            }
            if(cnt>4)
            {
                graph=0;
                break;
            }
        }
    }
    // printf("swap : %d\n",cnt);
    if(cnt<=10)
        int score=100;
    else
        int score=100-(5*(cnt-10));
    if(graph==0)
    {
        readimagefile("pre_gameover.jpg",300,200,1000,400);
        delay(1800);
        cleardevice();
        readimagefile("game_over.jpg",0,0,getmaxwidth(),getmaxheight());
        getch();
        closegraph();
    }

    level_end_writing();
    getch();
    cleardevice();
}


void bgi3rdpage();///new game page er interface er fucntion prototype

///instruction of the game
void instruction()
{
    readimagefile("instructionbg7_1.jpg",0,0,getmaxwidth(),getmaxheight());
    delay(1000);
    readimagefile("instructionbg7_2.jpg",0,0,getmaxwidth(),getmaxheight());
    delay(2000);
    readimagefile("instructionbg7_3.jpg",0,0,getmaxwidth(),getmaxheight());
    delay(2000);
    readimagefile("instructionbg7_5.jpg",0,0,getmaxwidth(),getmaxheight());
    getch();
    bgi3rdpage();
}

void high_scores()
{
    cleardevice();
    settextstyle(3,HORIZ_DIR,6);
    setcolor(WHITE);
    outtextxy(250,80,"PLAYER");
    setcolor(CYAN);
    outtextxy(250,180,"PRANJAL");
    outtextxy(250,250,"SIHAN");
    outtextxy(250,320,"JASON");
    outtextxy(250,390,"PLAYER");
    outtextxy(250,460,"CSEDU");
    setcolor(RED);
    outtextxy(850,80,"SCORES");
    setcolor(BLUE);
    outtextxy(850,180,"1500");
    outtextxy(850,250,"1490");
    outtextxy(850,320,"1485");
    outtextxy(850,390,"1480");
    outtextxy(850,460,"1480");
    getch();
    bgi3rdpage();
}

/***a xtra window for attractive look****/

void starting_page()
{

    readimagefile("gamebg1.jpg",0,0,getmaxwidth(),getmaxheight());
    readimagefile("starting_final.jpg",450,300,900,400);
    delay(1000);

}

///first looking of the game
void welcome_starting()
{
    readimagefile("bgi1stpage.jpg",0,0,getmaxwidth(),getmaxheight());
    loading();
    cleardevice();

    /**here a additional page will be drawn****/
    starting_page();
    delay(1000);
    cleardevice();

}

///new game page er puro code
void bgi3rdpage()
{
    readimagefile("newgamepage.jpg",0,0,getmaxwidth(),getmaxheight());
    while (1)
    {
        int x=mousex();
        int y=mousey();

        if (x>=310 &&x<=1070&&y>=105&&y<=240)
        {
            readimagefile("newgamepage1.jpg", 0, 0, getmaxwidth(), getmaxheight());
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                level1();
                level2();
                level3();
                level4();
                level5();
                level6();
                level7();
                level8();
                level9();
                level10();
                level11();
                level12();
                level13();
                level14();
                level15();
            }
        }
        else if(x>=290&&x<=1070&&y>=285&&y<=390)
        {
            readimagefile("newgamepage2.jpg", 0, 0, getmaxwidth(), getmaxheight());
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                high_scores();
            }
        }


            else if(x>=345&&x<=985&&y>=460&&y<=560)
            {

                readimagefile("newgamepage3.jpg", 0, 0, getmaxwidth(), getmaxheight());
                if (ismouseclick(WM_LBUTTONDOWN))
                {
                    clearmouseclick(WM_LBUTTONDOWN);
                    instruction();
                }

            }
            else
            {

                readimagefile("newgamepage.jpg", 0, 0, getmaxwidth(), getmaxheight());

            }
        }
    }


///main menu and quit korar option er code

void mainmenu_quit()
{
    /****main menu and quit will be in this function*****/

    readimagefile("bgi2ndpage_sub2.jpg",0,0,getmaxwidth(),getmaxheight());
    while(1)
    {
        int x=mousex();
        int y=mousey();
        //if(getch()) break;

        if(x>=310 && x<=900 && y>=55 && y<=165)
        {
            readimagefile("bgi2ndpage_sub2_1.jpg",0,0,getmaxwidth(),getmaxheight());
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                goto work;
            }
        }
        else if(x>=470 && x<=745 && y>=465 && y<=570)
        {
            readimagefile("bgi2ndpage_sub2_2.jpg",0,0,getmaxwidth(),getmaxheight());
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                readimagefile("thankyoupage.jpg",0,0,getmaxwidth(),getmaxheight());
                delay(2000);
                closegraph();
            }
        }
        else
            readimagefile("bgi2ndpage_sub2.jpg",0,0,getmaxwidth(),getmaxheight());
    }

work:
    {
        cleardevice();
        bgi3rdpage();

    }

}





