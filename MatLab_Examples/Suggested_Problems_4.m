

x=0:0.1:10;
y=(x.^4)+(sin(x).^2).*cos(x)+exp(-(x.^2));

plot(x,y)
title('Y(x) Plot')
xlabel('x')
ylabel('Y Function')







