class Menu
{
    public:

    void hello();

    private:


};


void Menu::hello()
{
     int x, y;
     txSetColor(TX_BLACK);
     txSetTextAlign(TA_CENTER);
     txSelectFont("Arial", 60);
     for(int i = 0; i < 100000; i++)
     {
        x = random (0, 600);
        y = random (0, 600);
        txSetPixel(x, y, RGB(255, 255, 255));
        if(i%1000==0)
        txTextOut(300, 300, "By DendyC Developers");
     };
        txSetFillColor(RGB(255, 255, 255));
        for(int i = 0; i < 100000; i++)
     {
        txSetColor(TX_WHITE);
        x = random (0, 600);
        y = random (0, 600);
        txRectangle(x, y, x+3, y+3);
        if(i%1000==0)
        {
        txSetColor(TX_BLACK);
        txTextOut(300, 300, "By DendyC Developers");
        };
     };

     for(int i = 0; i < 36789; i++)
     {
        txSetColor(TX_WHITE);
        x = random (0, 1000);
        y = random (0, 1000);

        txRectangle(x, y, x+9, y+9);
        if(i%1000==0 || i == 36788)
        {
        txSetColor(TX_BLACK);
        txTextOut(300, 300, "By DendyC Developers");
        }
     };
     txSleep(100);
     txRectangle(0, 0, 600, 600);
     txSetColor(TX_BLACK);
     txSetTextAlign(TA_CENTER);
     txSelectFont("Comic Sans MS", 40);
     txTextOut(300, 300, "H");
     txSleep(500);
     txRectangle(0, 0, 600, 600);
     txTextOut(300, 300, "HÅ");
     txSleep(500);
     txRectangle(0, 0, 600, 600);
     txTextOut(300, 300, "HEL");
     txSleep(500);
     txRectangle(0, 0, 600, 600);
     txTextOut(300, 300, "HELL");
     txSleep(500);
     txRectangle(0, 0, 600, 600);
     txTextOut(300, 300, "HELLO");
}

