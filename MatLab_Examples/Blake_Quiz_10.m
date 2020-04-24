num = [1 2 2];
den = [1 4 3];

[A,B,C,D] = tf2ss(num,den);
%for tf use num & den
t=0:0.1:10;

X=(t.*exp(-t).*(t>=0));
xz=[0 0 0]; %IC's
sys=ss(A,B,C,D);

figure
lsim(sys,X,t,xz)
title('Output Response From x(t)=te^-t*u(t)')
xlabel('time (s)')
ylabel(' Amplitude ');
%Note for future use, don't use hold on/hold off here. Does no worky.


x=(cos(10.*t).*exp(-t).*(t>=0)); % cos(10t)*e^(-t)*u(t)
sys=ss(A,B,C,D);
figure(2)
lsim(sys, x, t, xz) %lc 'x' for x(t) #2
title('Output Response From x(t)=cos(10t)*e^-t*u(t)')
xlabel('time (s)')
ylabel(' Amplitude ');



