clc;
close all;
clear all;
x=[1 0 1 1 0 1];
nx=size(x,2);
sign=1;
i=1;
while i<nx+1
t = i:0.001:i+1-0.001;
if x(i)==1
unipolar_code=square(t*2*pi,100);
polar_code=square(t*2*pi,100);
bipolar_code=sign*square(t*2*pi,100);
sign=sign*-1;
manchester_code=-square(t*2*pi,50);
else
unipolar_code=0;
polar_code=-square(t*2*pi,100);
bipolar_code=0;
manchester_code=square(t*2*pi,50);
end
figure(1);
plot(t,unipolar_code,'r');
title('PSD of Unipolar');
hold on;
grid on;
axis([1 10 -5 5]);

figure(2)
plot(t,polar_code,'r');
title('PSD of Polar');
hold on;
grid on;
axis([1 10 -5 5]);

figure(3)
plot(t,bipolar_code,'r');
title('PSD of Bipolar');
hold on;
grid on;
axis([1 10 -5 5]);

figure(4)
plot(t,manchester_code,'r');
title('PSD of Manchester');
hold on;
grid on;
axis([1 10 -5 5]);

i=i+1;

end