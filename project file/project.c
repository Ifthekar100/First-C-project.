#include<stdio.h>
#include<string.h>
void showseat()
{
    printf("         <<<<<    Book A seat     >>>>>\n\n");
    printf(  "  <| Side  A |>             <| Side  A |>  \n");
    printf(  "  [ 01 ] [ 02 ]            [ 31 ] [ 32 ]\n");
    printf(  "  [ 03 ] [ 04 ]            [ 33 ] [ 34 ]\n");
    printf(  "  [ 05 ] [ 06 ]            [ 35 ] [ 36 ]\n");
    printf(  "  [ 07 ] [ 08 ]            [ 37 ] [ 38 ]\n");
    printf(  "  [ 09 ] [ 10 ]            [ 39 ] [ 40 ]\n");
    printf(  "  [ 11 ] [ 12 ]            [ 41 ] [ 42 ]\n");
    printf(  "  [ 13 ] [ 14 ]            [ 43 ] [ 44 ]\n");
    printf(  "  [ 15 ] [ 16 ]            [ 45 ] [ 46 ]\n");
    printf(  "  [ 17 ] [ 18 ]            [ 47 ] [ 48 ]\n");
    printf(  "  [ 19 ] [ 20 ]            [ 49 ] [ 50 ]\n");
    printf(  "  [ 21 ] [ 22 ]            [ 51 ] [ 52 ]\n");
    printf(  "  [ 23 ] [ 24 ]            [ 53 ] [ 54 ]\n");
    printf(  "  [ 25 ] [ 26 ]            [ 55 ] [ 56 ]\n");
    printf(  "  [ 27 ] [ 28 ]            [ 57 ] [ 58 ]\n");
    printf(  "  [ 29 ] [ 30 ]            [ 59 ] [ 60 ]\n\n");

}
int BusSeat(int a)
{
    int e;
    printf(" Select Bus Number \n\n");
    printf(" 1. Bus No.1\n");
    printf(" 2. Bus No.2\n");
    printf(" 3. Bus No.3\n");
    printf(" 4. Bus No.4\n");
    printf(" 5. Bus No.5\n\n");
    printf(" Enter your choice......");
    scanf("%d",&e);
    system("cls");
    int seat;
    if(e==1)
    {
        showseat();
        printf("Enter your choice......");
        scanf("%d",&seat);
        system("cls");
    }
    else if(e==2)
    {
        showseat();
        printf("Enter your choice......");
        scanf("%d",&seat);
        system("cls");
    }
    else if(e==3)
    {
        showseat();
        printf("Enter your choice......");
        scanf("%d",&seat);
        system("cls");
    }
    else if(e==4)
    {
        showseat();
        printf("Enter your choice......");
        scanf("%d",&seat);
        system("cls");
    }
    else if(e==5)
    {
        showseat();
        printf("Enter your choice......");
        scanf("%d",&seat);
        system("cls");
    }
    return seat;
}
void showdetails(int a, int b)
{
    int s,c,d;
    printf(" Your username = \n");
    printf(" Your ID = \n");
    printf(" Your Bus N0. = %d\n",c);
    printf(" Your Seat number = %d\n\n",d);
    printf(" Press 1 To Return Main Menu.....");
    scanf("%d",&s);
    system("cls");
}
int main()
{
    while(1)
    {
        int a,c,b;
        int seatn=0;

        printf("  Choose A Destination\n\n");
        printf("  1. City To University\n");
        printf("  2. University To City\n");
        printf("  3. Current Status\n");
        printf("  4. Exit\n\n");
        printf("  Enter your choice......");
        scanf("%d",&a);
        system("cls");
        if(a==1)
        {
            printf("1. For Female Student\n");
            printf("2. For Male Student\n\n");
            printf("Enter your choice......");
            scanf("%d",&b);
            system("cls");
            if(b==1)
            {
                printf("        <<<<< Select Your Boarding Point >>>>>\n\n\n");
                printf("  SL  | Starting Time  | Starting point       | Route\n\n");
                printf("   1  | 6:40 a.m.      | BaroyarHat           | BaroyarHat- Mirsharai- Borodargahat –Sitakunda- IIUC\n");
                printf("   2  | 6:45 a.m.      | Hathazari College    | Hathazari College-Borodighirpar- Baizid Link Road-IIUC\n");
                printf("   3  | 6:50 a.m.      | Didar Market         | Didar Market-Kotowali- Kadamtal- Dewan Hat- IIUC\n");
                printf("   4  | 6:50 a.m.      | Miler matha          | Miler matha- Port Market- Toll Road- Fouzder Hat-IIUC\n");
                printf("   5  | 7:00 a.m.      | Navy Hospital Gate   | Navy Hospital Gate-Sea beach-Jele para-Akmol Ali Ghat-IIUC \n");
                printf("   6  | 7:00 a.m.      | BOT                  | BOT - Muradpur-2 no gate - Baizid Link Road - IIUC\n");
                printf("   7  | 7:00 a.m.      | Shah Amanath Bridge  | Shah Amanath Bridge-Bohoddarhat Flyover-Shulokbahor\n");
                printf("   8  | 7:00 a.m.      | BaroDighir Par       | BaroDighir Par- Oxygen- Baizid Link Road-IIUC\n");
                printf("   9  | 7:00 a.m.      | Chatteswari          | Chatteswari Road-GEC- 2 no gate- Baizid Link Road - IIUC\n");
                printf("   10 | 7:00 a.m.      | Kotowali             | Kotowali- Kadamtali- Dewan Hat- Alanker – IIUC\n");
                printf("   11 | 7:00 a.m.      | Lucky Plaza          | Agrabad-Boropool-Noyabazar- AK Khan – IIUC\n");
                printf("   12 | 7:00 a.m.      | Kaptai Rastar        | Kaptai Rastar Matha-BOT-2 no gate - Baizid Link Road - IIUC\n");
                printf("   13 | 7:10 a.m.      | GEC circle           | GEC circle-Wireless-Foy’s lake -AK Khan-IIUC\n");
                printf("   14 | 7:10 a.m.      | Oxygen Moor          | Oxygen- Baizid Link Road-IIUC\n");
                printf("   15 | 7:25 a.m.      | KoibolyoDham         | KoibolyoDham-IIUC\n\n");
                printf("Enter your choice......");
                scanf("%d",&c);
                system("cls");
                if(c==1)
                {
                   seatn = BusSeat(c);
                   showdetails(c,seatn);
                }
                else if(c==2)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==3)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==4)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==5)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==6)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==7)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==8)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==9)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==10)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==11)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==12)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==13)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==14)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==15)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }

            }
            else if(b==2)
            {
                printf("            <<<<< Select Your Boarding Point >>>>>\n\n\n");
                printf("  SL  | Starting Time   | Starting point       | Route\n\n");
                printf("   1  | 8:50 a.m.       | Navy Hospital Gate   | Navy Hospital Gate-Sea beach-Jele para-Akmol Ali Ghat-IIUC\n");
                printf("   2  | 8:50 a.m.       | Hathazari College    | Hathazari College-Borodighirpar- Baizid Link Road-IIUC\n");
                printf("   3  | 8:55 a.m.       | BaroyarHat           | BaroyarHat- Mirsharai- Borodarghahat –Sitakunda-IIUC\n");
                printf("   4  | 8:55 a.m.       | Shah Amanath Bridge  | Shah Amanath Bridge-Shulokbohor-Baizid link Road-IIUC\n");
                printf("   5  | 9:05 a.m.       | Mirsharai            | Mirsharai- Borodarghahat – Sitakunda-IIUC \n");
                printf("   6  | 9:05 a.m.       | BOT                  | BOT - Muradpur-2 no gate - Baizid Link Road - IIUC\n");
                printf("   7  | 9:05 a.m.       | Miler matha          | Miler matha- Port Market- Toll Road- Fouzder Hat-IIUC\n");
                printf("   8  | 9:05 a.m.       | BaroDighir Par       | BaroDighir Par- Oxygen- Baizid Link Road-IIUC\n");
                printf("   9  | 9:05 a.m.       | Chatteswari          | Chatteswari Road-GEC- 2 no gate- Baizid Link Road - IIUC\n");
                printf("   10 | 9:05 a.m.       | Kotowali             | Kotowali- Kadamtali- Dewan Hat- Alanker – IIUC\n");
                printf("   11 | 9:05 a.m.       | Lucky Plaza          | Agrabad-Boropool-Noyabazar- AK Khan – IIUC\n");
                printf("   12 | 9:05 a.m.       | Kaptai Rastar        | Kaptai Rastar Matha-BOT-2 no gate - Baizid Link Road - IIUC\n");
                printf("   13 | 9:15 a.m.       | GEC circle           | GEC circle-Wireless-Foy’s lake -AK Khan-IIUC\n");
                printf("   14 | 9:15 a.m.       | Oxygen Moor          | Oxygen- Baizid Link Road-IIUC\n");
                printf("   15 | 9:35 a.m.       | KoibolyoDham         | KoibolyoDham-IIUC\n");
                printf("   16 | 11:50 a.m.      | Mayor goli           | Mayor goli-Baizid Link Road-Fouzdarhat- IIUC\n");
                printf("   17 | 11:50 a.m.      | Boropul              | Boropul-Noyabazar -IIUC\n");
                printf("   18 | 12:40 p.m.      | SherShah             | SherShah- Baizid Link Road- Fouzdarhat- IIUC\n");
                printf("   19 | 12:40 p.m.      | KoibolyoDham         | KoibolyoDham-IIUC\n\n");
                printf("Enter your choice......");
                scanf("%d",&c);
                system("cls");
                 if(c==1)
                {
                   seatn = BusSeat(c);
                   showdetails(c,seatn);
                }
                else if(c==2)
                {
                    seatn = BusSeat(c);
                   showdetails(c,seatn);
                }
                else if(c==3)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==4)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==5)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==6)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==7)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==8)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==9)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==10)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==11)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==12)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==13)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==14)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==15)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==16)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==17)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }

                else if(c==18)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==19)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }

            }
        }
        else if(a==2)
        {
            printf("1. For Female Student\n");
            printf("2. For Male Student\n\n");
            printf("Enter your choice......");
            scanf("%d",&b);
            system("cls");
            if(b==1)
            {
                printf("        <<<<< Select Your Boarding Point >>>>>\n\n\n");
                printf("  SL  | Starting Time   | End point            | Route\n\n");
                printf("   1  | 11:00 a.m.      | Boropul              | IIUC-KoibolyoDham –Noyabazar-Boropul\n");
                printf("   2  | 11:00 a.m.      | Mayor Goli           | IIUC-Baizid Link Road-SherShah- Mayor Goli\n");
                printf("   3  | 11:45 a.m.      | NoyaBazar            | IIUC-KoibolyoDham –Noyabazar\n");
                printf("   4  | 11:45 a.m.      | Mirsharai            | IIUC-Sitakundo-Borodargahat-Mirsharai\n");
                printf("   5  | 11:45 a.m.      | Mayor Goli           | IIUC-Baizid Link Road-SherShah- Mayor Goli\n");
                printf("   6  | 01:30 p.m.      | All points           | All approved routes\n\n");
                printf("Enter your choice......");
                scanf("%d",&c);
                system("cls");
                if(c==1)
                {
                   seatn = BusSeat(c);
                   showdetails(c,seatn);
                }
                else if(c==2)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==3)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==4)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==5)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==6)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
            }
            else if(b==2)
            {
                printf("        <<<<< Select Your Boarding Point >>>>>\n\n\n");
                printf("  SL  | Starting Time   | End point            | Route\n\n");
                printf("   1  | 12:15 p.m.      | KoibolyoDham         | IIUC-KoibolyoDham (AK Khan)\n");
                printf("   2  | 12:15 p.m.      | SherShah             | IIUC-Baizid Link Road-SherShah\n");
                printf("   3  | 01:40 p.m.      | All points           | All approved routes\n");
                printf("   4  | 02:55 p.m.      | NoyaBazar            | IIUC-KoibolyoDham –Noyabazar\n");
                printf("   5  | 02:55 p.m.      | Mayor Goli           | IIUC-Baizid Link Road-SherShah- Mayor Goli\n");
                printf("   6  | 04:35 p.m.      | All points           | All approved routes\n\n");
                printf("Enter your choice......");
                scanf("%d",&c);
                system("cls");
                 if(c==1)
                {
                   seatn = BusSeat(c);
                   showdetails(c,seatn);
                }
                else if(c==2)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==3)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==4)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==5)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
                else if(c==6)
                {
                    seatn = BusSeat(c);
                    showdetails(c,seatn);
                }
            }
        }
        else if(a==3)
        {
            int c1;
            if(seatn<=0)
            {
                printf("-------------------------------------------------\n\n");
                printf(" You have not booked any seats yet.\n\n");
                printf(" Press 1 To Return Main Menu.....");
                scanf("%d",&c1);
                system("cls");
            }
        }
    }
}



