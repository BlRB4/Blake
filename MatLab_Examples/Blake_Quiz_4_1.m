%Script that plots sin(t), cos(t) for 0 thru t thru 720 if the amplitude is
%between -0.5 and 0.5. if larger than or equal to 0.5, replace value by
%0.5. less than -0.5, replace by -0.5.
%Degrees not radians
%so t is between 0 and 720

C=0.5;
D=-0.5;
r=0:720;

t=r*(180/pi);
A = sin(t);
B = cos(t);

 A(A>0.5)=C;
 A(A<-0.5)=D;
 
 B(B>0.5)=C;
 B(B<-0.5)=D;





figure(1)
subplot(2,1,1)
plot(t,A);
axis([0 720 -1 1])
box on
grid on


subplot(2,1,2)
plot(t,B);
axis([0 720 -1 1])
box on
grid on




