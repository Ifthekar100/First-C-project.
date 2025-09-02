#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void registerUser()
 {
    int a;
    char username[100];
    char id[20];
    char password[100];
    FILE *file = fopen("users.txt", "a");

    if (file == NULL)
    {
        printf("Sorry error opening file.\n");
        return;
    }
    printf("Please enter your username: ");
    scanf("%s", username);
    printf("Please enter your University ID: ");
    scanf("%s",id);
    printf("Please enter your password: ");
    scanf("%s", password);
    printf("\n");

    fprintf(file, "%s %s %s %s\n",username, id , password);
    fclose(file);

    printf("Registration successful.\n\n");
    printf("Press 1 To Main Menu.....");
    scanf("%d",&a);
    system("cls");
}

int loginUser()
 {
    int f=0,d1,g=0;
    char username[100];
    char password[100];
    char storedid[20];
    char storedUsername[100];
    char storedPassword[100];
    FILE *file = fopen("users.txt", "r");

    if (file == NULL)
    {
        printf("Sorry error opening file.\n");
        return 0;
    }

    printf("Please enter your ID: ");
    scanf("%s", username);
    printf("Please enter your password: ");
    scanf("%s", password);
    printf("\n");
    while (fscanf(file, "%s %s %s", storedUsername,storedid, storedPassword) != EOF)
        {
        if (strcmp(username, storedid) == 0 && strcmp(password, storedPassword) == 0) {
            fclose(file);
            f=1;
        }
    }

    fclose(file);
    if(f==1)
    {
        printf("Login successful.\n\n");
        printf("Press 1 To Continue.....");
        scanf("%d",&d1);
        g=1;
        system("cls");
    }
    else
    {
        printf("Invalid ID or password.\n");
        printf("Press 1 To Main Menu.....");
        scanf("%d",&d1);
        system("cls");
    }
    return g;
}
void showseat()
{
    printf("         <<<<<   Bus Seat List    >>>>>\n\n");
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
int Bus(int a)
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
    return e;
}
int BusSeat(int b)
 {

    int e,seat;
    e=b;
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
    int s;
    char storedid[20];
    char storedUsername[100];
    char storedPassword[100];
    FILE *file = fopen("users.txt", "r");
    fscanf(file, "%s %s %s", storedUsername,storedid, storedPassword);
    fclose(file);
    printf(" Your username = %s\n",storedUsername);
    printf(" Your ID = %s\n",storedid);
    printf(" Your Bus N0. = %d\n",a);
    printf(" Your Seat number = %d\n\n",b);
    printf(" Press 1 To Return Main Menu.....");
    scanf("%d",&s);
    FILE *bus;
    bus=fopen("bus.txt","w");
    fprintf(bus,"%s %s %d %d",storedUsername,storedid,a,b);
    fclose(bus);
    printf(" Press 1 To Return Main Menu.....");
    system("cls");

}

int main() {
    int choice,g;

    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        system("cls");
        if(choice==1)
        {
            registerUser();
        }
        else if(choice==2)
        {
            g=loginUser();
            if(g>0)
            {
                while(1)
                {
                    int a,c,b,busno;
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
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==2)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==3)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==4)
                            {
                                seatn = BusSeat(c);
                                showdetails(c,seatn);
                            }
                            else if(c==5)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==6)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==7)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==8)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==9)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==10)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==11)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==12)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==13)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==14)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==15)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
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
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==2)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==3)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==4)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==5)
                            {
                               busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==6)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==7)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==8)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==9)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==10)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==11)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==12)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==13)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==14)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==15)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==16)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==17)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }

                            else if(c==18)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==19)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
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
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==2)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==3)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==4)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==5)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==6)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
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
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==2)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==3)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==4)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==5)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                            else if(c==6)
                            {
                                busno=Bus(c);
                                seatn = BusSeat(busno);
                                showdetails(busno,seatn);
                            }
                        }
                    }
                    else if(a==3)
                    {
                        int c1,y=0,z=0;
                        char name[100],x[20];
                        FILE *fr;
                        fr=fopen("bus.txt","r");
                        fscanf(fr,"%s %s %d %d",name,x,&y,&z);

                        if(z<=0)
                        {
                            printf("-------------------------------------------------\n\n");
                            printf(" You have not booked any seats yet.\n\n");
                            printf(" Press 1 To Return Main Menu.....");
                            scanf("%d",&c1);
                            system("cls");
                        }
                        else
                        {
                            int ch,sure;
                            showseat();
                            printf("\n\n");
                            printf(" Your username = %s\n",name);
                            printf(" Your ID = %s\n",x);
                            printf(" Your Bus N0. = %d\n",y);
                            printf(" Your Seat number = %d\n\n",z);
                            printf(" 1.Cancel Booking\n");
                            printf(" 2.Return to main menu\n\n");
                            printf(" Enter your choise......");
                            scanf("%d",&ch);
                            system("cls");
                            if(ch==1)
                            {
                                printf(" Are You Sure?\n");
                                printf(" 1.Yes\n");
                                printf(" 2.No\n\n");
                                printf(" Enter your choise......");
                                scanf("%d",&sure);
                                system("cls");
                                if(sure==1)
                                {
                                    FILE *fre;
                                    fre=fopen("bus.txt","w");
                                    fclose(fre);
                                }
                                else
                                {

                                }

                            }
                        }
                    }
                    else if(a==4)
                    {
                        return 0;
                    }
                }
            }
        }
        else if(choice==3)
        {
            break;
        }
    }

    return 0;
}


