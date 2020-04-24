num=[1 5];
den=[1 5 6];
sys=tf(num,den)
t=0:0.1:10;
x1=exp(-3*t);
x2=(t.^2);
x3=(t.^2).*exp(-3*t);
y1=lsim(sys,x1,t);
y2=lsim(sys,x2,t);
y3=lsim(sys,x3,t);
subplot(3,1,1)
plot(t,y1)
grid on
subplot(3,1,2)
plot(t,y2)
grid on
subplot(3,1,3)
plot(t,y3)
grid on

