#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>

int main(){
	int gd = DETECT, gm;
	int i, X=0, Y=200,n=1;
	initgraph(&gd, &gm, "/fApplications/TurboC++/TC/BGI");

	//back-seat
	for(i = 0 ; i < 590; i++, X++, n+=5){
	if(n>=359){
		n = 0;
	}
	//pieslice(30+X,76+Y,360-n,380-n,17);
	//pieslice(30+X,76+Y,180+n,190+n,17);

	//pieslice(143+X,76+Y,0+n,90+n,17);
	//pieslice(143+X,76+Y,180+n,270+n,17);

	line(10+X,20+Y,40+X,20+Y);//l to r
	line(40+X,20+Y,42+X,22+Y);
	line(42+X,22+Y,43+X,24+Y);//r to d
	line(43+X,24+Y,44+X,34+Y);
	line(44+X,34+Y,42+X,42+Y);//d to u
	line(42+X,42+Y,35+X,40+Y);

	line(35+X,40+Y,27+X,38+Y);
	line(27+X,38+Y,16+X,30+Y);
	line(16+X,30+Y,10+X,23+Y);
	line(10+X,23+Y,10+X,20+Y);

	//front-seat
	line(44+X,28+Y,54+X,31+Y);//l to r
	line(54+X,31+Y,64+X,34+Y);
	line(64+X,34+Y,71+X,36+Y);//l to down
	line(71+X,36+Y,77+X,46+Y);//d to d
	line(77+X,46+Y,69+X,58+Y);
	line(69+X,58+Y,54+X,50+Y);//d to u
	line(54+X,50+Y,41+X,43+Y);

	//tyre to engine section
	line(68+X,58+Y,35+X,68+Y);//r to l
	line(68+X,58+Y,68+X,80+Y);//r to d
	line(68+X,80+Y,33+X,80+Y);
	line(33+X,80+Y,30+X,78+Y);//arc
	line(30+X,78+Y,29+X,76+Y);
	line(29+X,76+Y,30+X,72+Y);
	line(30+X,72+Y,35+X,68+Y);

	//engine-part
	line(68+X,80+Y,70+X,82+Y);
	line(70+X,82+Y,85+X,82+Y);
	line(85+X,82+Y,87+X,78+Y);
	line(87+X,78+Y,97+X,73+Y);

	line(87+X,70+Y,102+X,73+Y);//rectangle-thing
	line(102+X,73+Y,105+X,62+Y);
	line(105+X,62+Y,90+X,59+Y);
	line(90+X,59+Y,87+X,70+Y);

	line(105+X,65+Y,110+X,64+Y);
	line(110+X,64+Y,115+X,62+Y);

	line(117+X,63+Y,77+X,46+Y);
	line(117+X,63+Y,124+X,56+Y);
	line(124+X,56+Y,130+X,52+Y);
	line(130+X,52+Y,138+X,48+Y);
	line(138+X,48+Y,114+X,38+Y);//<-
	line(114+X,38+Y,135+X,34+Y);
	line(135+X,34+Y,123+X,8+Y);
	line(123+X,8+Y,145+X,30+Y);
	line(145+X,30+Y,150+X,40+Y);
	line(150+X,40+Y,148+X,42+Y);
	line(148+X,42+Y,145+X,44+Y);
	line(145+X,44+Y,138+X,48+Y);

	line(114+X,38+Y,112+X,36+Y);
	line(112+X,36+Y,111+X,34+Y);
	line(111+X,34+Y,112+X,32+Y);
	line(112+X,32+Y,109+X,26+Y);
	line(109+X,26+Y,100+X,23+Y);
	line(100+X,23+Y,73+X,35+Y);

	circle(30+X,76+Y,24); //back-tire
	circle(30+X,76+Y,17);

	pieslice(30+X,76+Y,450-n,451-n,17);
	pieslice(30+X,76+Y,427-n,428-n,17);
	pieslice(30+X,76+Y,405-n,406-n,17);
	pieslice(30+X,76+Y,382-n,383-n,17);
	pieslice(30+X,76+Y,360-n,361-n,17);

	pieslice(30+X,76+Y,630-n,631-n,17);
	pieslice(30+X,76+Y,607-n,608-n,17);
	pieslice(30+X,76+Y,585-n,586-n,17);
	pieslice(30+X,76+Y,562-n,563-n,17);
	pieslice(30+X,76+Y,540-n,541-n,17);


	circle(143+X,76+Y,24); //front tire
	circle(143+X,76+Y,17);

	//pieslice(143+X,76+Y,360-n,340-n,17);
	//pieslice(143+X,76+Y,550-n,530-n,17);
        
    pieslice(143+X,76+Y,450-n,451-n,17);
    pieslice(143+X,76+Y,427-n,428-n,17);
    pieslice(143+X,76+Y,405-n,406-n,17);
    pieslice(143+X,76+Y,382-n,383-n,17);
    pieslice(143+X,76+Y,360-n,361-n,17);
    
    pieslice(143+X,76+Y,630-n,631-n,17);
    pieslice(143+X,76+Y,607-n,608-n,17);
    pieslice(143+X,76+Y,585-n,586-n,17);
    pieslice(143+X,76+Y,562-n,563-n,17);
    pieslice(143+X,76+Y,540-n,541-n,17);

	line(0, 100+Y, 640, 100+Y);
	delay(20
	);
	cleardevice();
	}

	getch();
	return 1;
}



