%Quiz 7 Blake
global x1 x2 x3
a=9.1; b=-0.75590; c=-1.39386; d=16.5811; e=0.138083;

x1= -a*x1+a*x2-a*((b*x1)+(0.5*(c-b))*((abs(x1+1))-(abs(x1-1))));
x2=x1-x2+x3;
x3=-d*x2-e*x3;
t=0:0.1:5;
[x1,x2,x3]=ode45(x1,x2,x3);
plot3(x1,x2,x3)
xlabel('x_1')
ylabel('x_2')
zlabel('x_3')
grid on








