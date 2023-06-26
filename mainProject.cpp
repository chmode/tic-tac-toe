#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

class player{
private:
    string name;
    unsigned short score;
    char symbole;
public:

    //-----------Geters
    string getName(){
        return name;
    }
    unsigned short getScore(){
        return score;
    }
    char getSymbole(){
        return symbole;
    }
    //-----------setters
    void setName(string &nm){
        name=nm;
    }
    void setScore(unsigned short scr){
        score=scr;
    }
    void setSymbole(char smbl){
        symbole=smbl;
    }
    //---------------friend

    //---------------Methods

};

class grill{

    private:

    public:
        unsigned short memo[3][3];
        grill(){
            //memo[3][3]={{0,0,0},{0,0,0},{0,0,0}};
            unsigned short i,j;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    memo[i][j]=0;
                }
            }
        }

        //---------------Methods

        void initialize(){
            //memo[3][3]={{0,0,0},{0,0,0},{0,0,0}};
            unsigned short i,j;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    memo[i][j]=0;
                }
            }
        }

        void aff(){
            //memo[3][3]={{0,0,0},{0,0,0},{0,0,0}};
            unsigned short i,j;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<" "<<memo[i][j];
                }cout<<"\n";
            }
        }

        void affich(){
            gotoxy(50,10);cout<<"ÚÄÄÂÄÄÂÄÄ¿";
            gotoxy(50,11);cout<<"³  ³  ³  ³";       //x*2+50
            gotoxy(50,12);cout<<"ÃÄÄÅÄÄÅÄÄ´";       //pour y: y*2+11
            gotoxy(50,13);cout<<"³  ³  ³  ³";
            gotoxy(50,14);cout<<"ÃÄÄÅÄÄÅÄÄ´";
            gotoxy(50,15);cout<<"³  ³  ³  ³";
            gotoxy(50,16);cout<<"ÀÄÄÁÄÄÁÄÄÙ";

            /*cout<<"\n\n\n";
            cout<<"\t\t\t\t\t\t";cout<<"ÚÄÄÂÄÄÂÄÄ¿";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"³  ³  ³  ³";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"ÃÄÄÅÄÄÅÄÄ´";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"³  ³  ³  ³";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"ÃÄÄÅÄÄÅÄÄ´";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"³  ³  ³  ³";cout<<"\n";
            cout<<"\t\t\t\t\t\t";cout<<"ÀÄÄÁÄÄÁÄÄÙ";cout<<"\n";
            cout<<"\n\n\n";*/
        }
};

void remplir(player p1,player p2){
    string nam;
    cout<<"\t\tDonner le nome: ";cin>>nam;p1.setName(nam);
    p1.setScore(0);
    p1.setSymbole('X');
    system("cls");
    cout<<"\t\tDonner le nome: ";cin>>nam;p2.setName(nam);
    p2.setScore(0);
    p2.setSymbole('O');
    system("cls");
}
void affich(player p1,player p2){
    cout<<"\t\t\t\tjouer-1";cout<<"\t\t\t\tjouer-2";cout<<"\n";
    cout<<"\t\t\t\tle nome: "<<p1.getName();cout<<"\t\t\tle nome: "<<p2.getName();cout<<"\n";
    cout<<"\t\t\t\tsymbole: "<<p1.getSymbole();cout<<"\t\t\tsymbole: "<<p2.getSymbole();cout<<"\n";
    cout<<"\t\t\t\tscore: "<<p1.getScore();cout<<"\t\t\tscore: "<<p2.getScore();cout<<"\n";

}

main(){
    player p1,p2;
    grill tab;
    int  x,y,nbrDEdeplacement,winer,position,somm,player,toursnbr,choix;
    unsigned short scoreinc;
    int i,j,tours;
    x=y=0;
    nbrDEdeplacement=0;
    winer=0;
    string nam;





for(;;){


    do{
       clrscr();
       cout<<"\n\n\t\t\t1) 1 VS 1\n\t\t\t2) 1 VS computer\n\t\t\t3) exit\n\n";
       cout<<"\t\tDonner votre choix: ";cin>>choix;
    }while(choix<1 || choix>3);
    clrscr();




if(choix==1){
    cout<<"\t\tjoueur-1 Donner votre nom: ";cin>>nam;p1.setName(nam);
    p1.setScore(0);
    p1.setSymbole('X');
    clrscr();
    cout<<"\t\tjoueur-2 Donner votre nom: ";cin>>nam;p2.setName(nam);
    p2.setScore(0);
    p2.setSymbole('O');
    clrscr();

    do{
        cout<<"\t\tDonner le nombre des tours: ";cin>>toursnbr;
    }while(toursnbr<1);
    clrscr();
    //remplir(p1,p2;
    affich(p1,p2);
    tab.affich();
    player=1;

    for(tours=0;tours<toursnbr;){

        gotoxy(52,7);cout<<"Round: "<<tours+1<<"/"<<toursnbr;

            if(player==1){
                    do{
                        gotoxy(x*3+51,y*2+11);
                        position=getch();
                        switch (position){
                            case 72:if(y>0)y--;break;
                            case 80:if(y<2)y++;break;
                            case 77:if(x<2)x++;break;
                            case 75:if(x>0)x--;break;
                            }
                    }while(position!=13);
                        //if(position==13){
                            if(tab.memo[y][x]==0){
                                            nbrDEdeplacement++;
                                        cout<<"X";tab.memo[y][x]=1;

                                        for(i=0;i<3;i++){
                                            somm=0;
                                            for(j=0;j<3;j++){
                                                somm=somm+tab.memo[i][j];
                                            }if(somm==3){
                                            winer=1;
                                            }
                                        }gotoxy(70,20);

                                        for(i=0;i<3;i++){
                                                somm=0;
                                            for(j=0;j<3;j++){
                                                somm=somm+tab.memo[j][i];
                                            }if(somm==3){
                                            winer=1;
                                            }
                                        }
                                          somm=0;
                                         for(i=0;i<3;i++){
                                            somm=somm+tab.memo[i][i];
                                         }if(somm==3){
                                             winer=1;
                                            }

                                          somm=0;
                                         for(i=0;i<3;i++){
                                            somm=somm+tab.memo[i][2-i];
                                         }if(somm==3){
                                             winer=1;
                                            }
                            }
                        //}
                        if(winer==1){
                            gotoxy(50,20);cout<<"joueur-1 gagne.\n\n\n";tours++;
                            scoreinc=p1.getScore();
                            scoreinc++;
                            p1.setScore(scoreinc);
                        }
                        player=2;
            }else{
                    do{
                        gotoxy(x*3+51,y*2+11);
                        position=getch();
                        switch (position){
                            case 72:if(y>0)y--;break;
                            case 80:if(y<2)y++;break;
                            case 77:if(x<2)x++;break;
                            case 75:if(x>0)x--;break;
                            }
                    }while(position!=13);
                    //if(position==13){
                        if(tab.memo[y][x]==0){
                                    nbrDEdeplacement++;
                                    cout<<"O";tab.memo[y][x]=5;

                                    for(i=0;i<3;i++){
                                        somm=0;
                                        for(j=0;j<3;j++){
                                            somm=somm+tab.memo[i][j];
                                        }if(somm==15){
                                        winer=1;
                                        }
                                    }


                                    for(i=0;i<3;i++){
                                            somm=0;
                                        for(j=0;j<3;j++){
                                            somm=somm+tab.memo[j][i];
                                        }if(somm==15){
                                        winer=1;
                                        }
                                    }

                                      somm=0;
                                     for(i=0;i<3;i++){
                                        somm=somm+tab.memo[i][i];
                                     }if(somm==15){
                                         winer=1;
                                        }

                                      somm=0;
                                     for(i=0;i<3;i++){
                                        somm=somm+tab.memo[i][2-i];
                                     }if(somm==15){
                                         winer=1;
                                        }
                        }
                    //}
                    if(winer==1){
                            gotoxy(50,20);cout<<"joueur-2 gagne.\n\n\n";tours++;
                            scoreinc=p2.getScore();
                            scoreinc++;
                            p2.setScore(scoreinc);
                        }
                    player=1;
            }


                if(nbrDEdeplacement==9 && winer!=1){
                    gotoxy(50,20);cout<<"aucun joueur gagne.\n\n\n";tours++;
                }

            if(nbrDEdeplacement==9 || winer==1){
                gotoxy(50,22);cout<<"appy sur une bouton pour continu...\n\n\n";
                getch();
                nbrDEdeplacement=0;
                winer=0;
                tab.initialize();
                somm=0;
                player=1;
                x=y=0;
                clrscr();
                affich(p1,p2);
                tab.affich();
            }

    }

            if(p1.getScore()>p2.getScore()){
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"le joueur 1 gagne le jeux.\n\n\n";
            }else if(p1.getScore()<p2.getScore()){
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"le joueur 2 gagne le jeux.\n\n\n";
            }else{
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"aucun gagner le jeux.\n\n\n";
            }
            getch();


}else if(choix==2){

    cout<<"\t\tjoueur-1 Donner votre nom: ";cin>>nam;p1.setName(nam);
    p1.setScore(0);
    p1.setSymbole('X');
    p2.setName("Machine");
    p2.setScore(0);
    p2.setSymbole('O');
    clrscr();

    do{
        cout<<"\t\tDonner le nombre des tours: ";cin>>toursnbr;
    }while(toursnbr<1);
    clrscr();
    //remplir(p1,p2;
    affich(p1,p2);
    tab.affich();
    player=1;



    for(tours=0;tours<toursnbr;){

        srand(time(NULL));
        gotoxy(52,7);cout<<"Round: "<<tours+1<<"/"<<toursnbr;

            if(player==1){
                    do{
                    gotoxy(x*3+51,y*2+11);
                    position=getch();
                    switch (position){
                        case 72:if(y>0)y--;break;
                        case 80:if(y<2)y++;break;
                        case 77:if(x<2)x++;break;
                        case 75:if(x>0)x--;break;
                        }
                    }while(position!=13);

                            if(tab.memo[y][x]==0){
                                            nbrDEdeplacement++;
                                        cout<<"X";tab.memo[y][x]=1;

                                        for(i=0;i<3;i++){
                                            somm=0;
                                            for(j=0;j<3;j++){
                                                somm=somm+tab.memo[i][j];
                                            }if(somm==3){
                                            winer=1;
                                            }
                                        }gotoxy(70,20);

                                        for(i=0;i<3;i++){
                                                somm=0;
                                            for(j=0;j<3;j++){
                                                somm=somm+tab.memo[j][i];
                                            }if(somm==3){
                                            winer=1;
                                            }
                                        }
                                          somm=0;
                                         for(i=0;i<3;i++){
                                            somm=somm+tab.memo[i][i];
                                         }if(somm==3){
                                             winer=1;
                                            }

                                          somm=0;
                                         for(i=0;i<3;i++){
                                            somm=somm+tab.memo[i][2-i];
                                         }if(somm==3){
                                             winer=1;
                                            }
                            }
                        if(winer==1){
                            gotoxy(50,20);cout<<"joueur-1 gagne.\n\n\n";tours++;
                            scoreinc=p1.getScore();
                            scoreinc++;
                            p1.setScore(scoreinc);
                        }
                        player=2;
            }else{


                do{
                    x=rand()%3;
                    y=rand()%3;
                }while(tab.memo[y][x]!=0);
                gotoxy(x*3+51,y*2+11);


                                    nbrDEdeplacement++;
                                    cout<<"O";tab.memo[y][x]=5;

                                    for(i=0;i<3;i++){
                                        somm=0;
                                        for(j=0;j<3;j++){
                                            somm=somm+tab.memo[i][j];
                                        }if(somm==15){
                                        winer=1;
                                        }
                                    }


                                    for(i=0;i<3;i++){
                                            somm=0;
                                        for(j=0;j<3;j++){
                                            somm=somm+tab.memo[j][i];
                                        }if(somm==15){
                                        winer=1;
                                        }
                                    }

                                      somm=0;
                                     for(i=0;i<3;i++){
                                        somm=somm+tab.memo[i][i];
                                     }if(somm==15){
                                         winer=1;
                                        }

                                      somm=0;
                                     for(i=0;i<3;i++){
                                        somm=somm+tab.memo[i][2-i];
                                     }if(somm==15){
                                         winer=1;
                                        }
                    if(winer==1){
                            gotoxy(50,20);cout<<"joueur-2 gagne.\n\n\n";tours++;
                            scoreinc=p2.getScore();
                            scoreinc++;
                            p2.setScore(scoreinc);
                        }
                    player=1;
            }


                if(nbrDEdeplacement==9 && winer!=1){
                    gotoxy(50,20);cout<<"aucun joueur gagne.\n\n\n";tours++;
                }

            if(nbrDEdeplacement==9 || winer==1){
                gotoxy(50,22);cout<<"appy sur une bouton pour continu...\n\n\n";
                getch();
                nbrDEdeplacement=0;
                winer=0;
                tab.initialize();
                somm=0;
                player=1;
                x=y=0;
                clrscr();
                affich(p1,p2);
                tab.affich();
            }

    }

            if(p1.getScore()>p2.getScore()){
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"le joueur 1 gagne le jeux.\n\n\n";
            }else if(p1.getScore()<p2.getScore()){
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"le joueur 2 gagne le jeux.\n\n\n";
            }else{
                gotoxy(50,20);cout<<"le score de joueur 1 est: "<<p1.getScore()<<"."<<" ---- "<<"le score de joueur 2 est: "<<p2.getScore()<<".\n\n\n";
                gotoxy(50,22);cout<<"aucun gagner le jeux.\n\n\n";
            }
            getch();









}else{
    cout<<"Good By...";getch();
    exit(1);
  }



}





}
