bool click=false;
int validator(int x, int y)
{
    if(x>=200&&y>=200&&x<=400&&y<=400) return 1;
    else if(x>400&&y>=200&&x<=600&&y<=400) return 2;
    else if(x>=200&&y>400&&x<=400&&y<=600) return 3;
    else if(x>400&&y>=400&&x<=600&&y<=600) return 4;
    else return 0;
}
void click_handler(int x, int y)
{
    if(validator(x,y))
        click=true;
}

int validator_2(int x, int y)
{
    if(x>=200&&y>=50&&x<=400&&y<=250) return 1;
    else if(x>400&&y>=50&&x<=600&&y<=250) return 2;
    else if(x>600&&y>=50&&x<=800&&y<=250) return 3;
    else if(x>200&&y>=250&&x<=400&&y<=450) return 4;
    else if(x>400&&y>=250&&x<=600&&y<=450) return 5;
    else if(x>600&&y>=250&&x<=800&&y<=450) return 6;
    else if(x>200&&y>=450&&x<=400&&y<=650) return 7;
    else if(x>400&&y>=450&&x<=600&&y<=650) return 8;
    else if(x>600&&y>=450&&x<=800&&y<=650) return 9;
    else return 0;
}
void click_handler_2(int x, int y)
{
    if(validator_2(x,y))
        click=true;
}

