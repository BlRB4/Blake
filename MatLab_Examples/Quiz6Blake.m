%Quiz 6 
% y(x) = x^3 + 3*sin^2(x)*cos(x)+e^(-2(x^2))
x = -10:0.1:10;
y =@(x)x.^3 + 3*(sin(x).^2).*cos(x) + exp(-2*(x.^2));
h=0.1;

figure(1)
plot(x,y(x))
title('x vs y(x)')
xlabel('x')
ylabel('y(x)')
legend


dydx=((y(x+h)-y(x))/h);
figure(2)
plot(x,dydx);
syms x y(x)
y = x.^3 + 3*(sin(x).^2).*cos(x) + exp(-2*(x.^2));

hold on % keeps in same graph, use diff( , );

dydxsym=diff(y,x);
ezplot(dydxsym,[-10,10])
legend

%The results are close but not exact. The graph shows both lines basically
%on top of each other which is why the color is different but near the ends
%of the graph it is noticed that the lines separate. This shows that near
%the trough the lines are very similar but near the ends they separate. 