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
        FILE *frw;
        frw =fopen("info.txt","w");
        fprintf(frw,"%s %s %s",storedUsername,storedid, storedPassword);
        fclose(frw);
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
void showseat(char arr[],int x)
{
             printf("         <<<<<   Bus Seat List    >>>>>\n\n");
    printf("  <| Side  A |>           <| Side  B |>  \n");

    for (int i = 1; i <= 57; i += 4) {
        if (arr[i] == x) {
            printf("  [  X  ]");
        } else {
            if (arr[i] < 10) {
                printf("  [ 0%d ]", arr[i]);
            } else {
                printf("  [ %d ]", arr[i]);
            }
        }
        if (arr[i + 1] == x) {
            printf(" [  X  ]       ");
        } else {
            if (arr[i + 1] < 10) {
                printf(" [ 0%d ]       ", arr[i + 1]);
            } else {
                printf(" [ %d ]       ", arr[i + 1]);
            }
        }
        if (arr[i + 2] == x) {
            printf("[  X  ]");
        } else {
            if (arr[i + 2] < 10) {
                printf(" [ 0%d ]", arr[i + 2]);
            } else {
                printf(" [ %d ]", arr[i + 2]);
            }
        }
        if (arr[i + 3] == x) {
            printf(" [  X  ]\n");
        } else {
            if (arr[i + 3] < 10) {
                printf(" [ 0%d ]\n", arr[i + 3]);
            } else {
                printf(" [ %d ]\n", arr[i + 3]);
            }
        }
    }
}
int Bus(int a)
{
    int e,s1,s2,s3,s4,s5;
    FILE *se;
    se=fopen("seats.txt","r");
    fscanf(se,"%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    fclose(se);
    printf(" Select Bus Number--------Available seats \n\n");
    printf(" 1. Bus No.1      --------    %d     \n",s1);
    printf(" 2. Bus No.2      --------    %d     \n",s2);
    printf(" 3. Bus No.3      --------    %d     \n",s3);
    printf(" 4. Bus No.4      --------    %d     \n",s4);
    printf(" 5. Bus No.5      --------    %d     \n\n",s5);
    printf(" Enter your choice......");
    scanf("%d",&e);
    system("cls");
    return e;
}
int BusSeat(int b, int x)
{
    int e, seat, s1, s2, s3, s4, s5;
    e = b;
    FILE *se;
    se = fopen("seats.txt", "r");
    fscanf(se, "%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    fclose(se);
    char arr[100];
    for (int i = 1; i <= 60; i++) {
        arr[i] = i;
    }
    showseat(arr, x);
    printf("Enter your choice......");
    scanf("%d", &seat);

    se = fopen("seats.txt", "w");
    if (se == NULL) {
        perror("Failed to open seats.txt");
        return -1;
    }

    if (e == 1) {
        s1 -= 1;
    } else if (e == 2) {
        s2 -= 1;
    } else if (e == 3) {
        s3 -= 1;
    } else if (e == 4) {
        s4 -= 1;
    } else if (e == 5) {
        s5 -= 1;
    } else {
        printf("Invalid bus number.\n");
        fclose(se);
        return -1;
    }

    fprintf(se, "%d %d %d %d %d\n", s1, s2, s3, s4, s5);
    fclose(se);
    system("cls");

    return seat;
}
int check(int a,int b,int c,int d)
{
    char username[100],uid[20],de[100],ti[100],na[100],t[100],sp[100];
    int y=0,z=0,a1=0,e1=0,t1,t2=0;
    FILE *fr;
    fr=fopen("bus.txt","r");
    while (fscanf(fr, "%s %s %s %s %s %s %s %d %d %d %d", username,uid,t,sp,de,ti,na,&y,&z,&a1,&e1) != EOF)
    {
        if (a==y&&b==z&&c==a1&&d==e1)
        {
            fclose(fr);
            t2=1;
            return t2;
        }
    }
    fclose(fr);
    return t2;
}
void showdetails(char x[],char y[], int c, int a, int b,int e)
{
    int s,i,ch,t1;
    char storedid[20];
    char storedUsername[100];
    char storedPassword[100];
    FILE *file = fopen("info.txt", "r");
    fscanf(file, "%s %s %s", storedUsername,storedid, storedPassword);
    fclose(file);
    ch = check(c,a,b,e);
    if(ch==0)
    {
        if(c==1)
    {
        char des[]="City",ti[]="To",na[]="University";
        printf(" Destination = City To University\n");
        printf(" Your username = %s\n",storedUsername);
        printf(" Your ID = %s\n",storedid);
        printf(" Starting time = %s\n",x);
        printf(" Starting point = %s\n",y);
        printf(" Your Bus N0. = %d\n",a);
        printf(" Your Seat number = %d\n\n",b);
        FILE *bus;
        bus=fopen("bus.txt","a");
        fprintf(bus,"%s %s %s %s %s %s %s %d %d %d %d\n",storedUsername,storedid,x,y,des,ti,na,a,b,c,e);
        fclose(bus);
    }
    else
    {
        char des[]="University",ti[]="To",na[]="City";
        printf(" Destination = University To City\n");
        printf(" Your username = %s\n",storedUsername);
        printf(" Your ID = %s\n",storedid);
        printf(" Starting time = %s\n",x);
        printf(" End point = %s\n",y);
        printf(" Your Bus N0. = %d\n",a);
        printf(" Your Seat number = %d\n\n",b);
        FILE *bus;
        bus=fopen("bus.txt","a");
        fprintf(bus,"%s %s %s %s %s %s %s %d %d %d %d\n",storedUsername,storedid,x,y,des,ti,na,a,b,c,e);
        fclose(bus);
    }
    printf(" Press 1 To Return Main Menu.....");
    scanf("%d",&s);
    system("cls");
    }
    else
    {
            printf("This is already Booked\n\n");
            printf("Enter 1 To Continue......");
            scanf("%d",&t1);
            system("cls");
    }


}

int main() {
    int choice,g,a1=0,e1=0,y=0,z=0,seat;//y=nus no. z= bus num; a1=1or2,e1 = starting number;
    char arr[100];
    for(int i=1;i<=60;i++)
    {
        arr[i]=i;
    }
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
                                char time[]="6:40a.m.",sp[]="BaroyarHat.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==2)
                            {
                                char time[]="6:45a.m.",sp[]="HathazariCollege.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==3)
                            {
                                char time[]="6:50a.m.",sp[]="DidarMarket.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==4)
                            {
                                char time[]="6:50a.m.",sp[]="Milermatha .";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==5)
                            {
                                char time[]="7:00a.m.",sp[]="NavyHospitalGate.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==6)
                            {
                                char time[]="7:00a.m.",sp[]="BOT.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==7)
                            {
                               char time[]="7:00a.m.",sp[]="ShahAmanathBridge.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==8)
                            {
                                char time[]="7:00a.m.",sp[]="BaroDighirPar.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==9)
                            {
                                char time[]="7:00a.m.",sp[]="Chatteswari.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==10)
                            {
                               char time[]="7:00a.m.",sp[]="Kotowali.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==11)
                            {
                                char time[]="7:00a.m.",sp[]="LuckyPlaza.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==12)
                            {
                                char time[]="7:00a.m.",sp[]="KaptaiRastarMatha.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==13)
                            {
                                char time[]="7:10a.m.",sp[]="GECcircle.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==14)
                            {
                               char time[]="7:10a.m.",sp[]="OxygenMoor.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==15)
                            {
                                char time[]="7:25a.m.",sp[]="KoibolyoDham.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
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
                                char time[]="8:50a.m.",sp[]="NavyHospitalGate.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==2)
                            {
                                char time[]="8:50a.m.",sp[]="HathazariCollege.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==3)
                            {
                                char time[]="8:55a.m.",sp[]="BaroyarHat.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==4)
                            {
                                char time[]="8:55a.m.",sp[]="ShahAmanathBridge.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==5)
                            {
                                char time[]="9:05a.m.",sp[]="Mirsharai.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==6)
                            {
                                char time[]="9:05a.m.",sp[]="BOT.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==7)
                            {
                                 char time[]="9:05a.m.",sp[]="Milermatha .";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==8)
                            {
                                 char time[]="9:05a.m.",sp[]="BaroDighirPar.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==9)
                            {
                                char time[]="9:05a.m.",sp[]=" Chatteswari.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==10)
                            {
                                char time[]="9:05a.m.",sp[]=" Kotowali.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==11)
                            {
                                char time[]="9:05a.m.",sp[]="LuckyPlaza.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==12)
                            {
                                char time[]="9:05a.m.",sp[]="KaptaiRastarMatha.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==13)
                            {
                                char time[]="9:15a.m.",sp[]="GECcircle.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==14)
                            {
                               char time[]="9:15a.m.",sp[]="OxygenMoor.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                               showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==15)
                            {
                                char time[]="9:35a.m.",sp[]="KoibolyoDham.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==16)
                            {
                               char time[]="11:50a.m.",sp[]="Mayorgoli.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==17)
                            {
                                char time[]="11:50a.m.",sp[]="Boropul.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }

                            else if(c==18)
                            {
                                char time[]="12:40p.m.",sp[]="SherShah.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==19)
                            {
                                char time[]="12:40p.m.",sp[]="KoibolyoDham.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
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
                               char time[]="11:00a.m.",sp[]=" Boropul .";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==2)
                            {
                                char time[]="11:00a.m.",sp[]="MayorGoli.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==3)
                            {
                                char time[]="11:45a.m.",sp[]="NoyaBazar.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==4)
                            {
                                char time[]="11:45a.m.",sp[]="Mirsharai.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==5)
                            {
                                char time[]="11:45a.m.",sp[]="MayorGoli.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==6)
                            {
                                char time[]="1:30p.m.",sp[]="Allpoints.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
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
                                 char time[]="12:15p.m.",sp[]="KoibolyoDham.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                               showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==2)
                            {
                                char time[]="12:15p.m.",sp[]="SherShah.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==3)
                            {
                                char time[]="01:40p.m.",sp[]="Allpoints.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==4)
                            {
                               char time[]="02:55p.m.",sp[]="NoyaBazar.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==5)
                            {
                                char time[]="02:55p.m.",sp[]="MayorGoli.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                            else if(c==6)
                            {
                                char time[]="04:35p.m.",sp[]="Allpoints.";
                                busno=Bus(c);
                                seatn = BusSeat(busno,z);
                                showdetails(time,sp,a,busno,seatn,c);
                            }
                        }
                    }
                    else if(a==3)
                    {
                        int c1;
                        char username[100],uid[20],de[100],ti[100],na[100],t[100],sp[100];
                        char uname[100],suid[100];
                        FILE *fr;
                        FILE *free;
                        free=fopen("info.txt","r");
                        fscanf(free,"%s %s",uname,suid);
                        fr=fopen("bus.txt","r");
                        while (fscanf(fr, "%s %s %s %s %s %s %s %d %d %d %d", username,uid,t,sp,de,ti,na,&y,&z,&a1,&e1) != EOF)
                        {
                            if (strcmp(username, uname) == 0 && strcmp(uid,suid) == 0)
                            {
                                    fclose(fr);
                                    fclose(free);
                            }
                        }
                        fclose(fr);
                        fclose(free);
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
                            showseat(arr,z);
                            if(a1==1)
                            {
                                printf("\n\n");
                                printf(" Destination = %s %s %s\n",de,ti,na);
                                printf(" Your username = %s\n",username);
                                printf(" Your ID = %s\n",uid);
                                printf(" Starting time = %s\n",t);
                                printf(" Starting point = %s\n",sp);
                                printf(" Your Bus N0. = %d\n",y);
                                printf(" Your Seat number = %d\n\n",z);
                                printf(" 1.Return to main menu\n\n");
                                printf(" Enter your choise......");
                                scanf("%d",&ch);
                                system("cls");
                            }
                            else
                            {
                                printf("\n\n");
                                printf(" Destination = %s %s %s\n",de,ti,na);
                                printf(" Your username = %s\n",username);
                                printf(" Your ID = %s\n",uid);
                                printf(" Starting time = %s\n",t);
                                printf(" Ending point = %s\n",sp);
                                printf(" Your Bus N0. = %d\n",y);
                                printf(" Your Seat number = %d\n\n",z);
                                printf(" 1.Return to main menu\n\n");
                                printf(" Enter your choise......");
                                scanf("%d",&ch);
                                system("cls");
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



