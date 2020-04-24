%Problem 3
%Blake Bennice u85622879
function [y1,y2,y3]=Exam1_3_Blake(p,q,r)  

a=0.3*((3*q)-(p^2));
b=(1/27)*((2*p^3)-(9*p*q)+(27*r));

b2=(b./2);
b1=(b.^2);
sq3=sqrt(-3);
a3=(a.^3);

G=((-b2)+(sqrt((b1./4)+(a3./27)))).^(1/3);
H=((-b2)-(sqrt((b1./4)+(a3./27)))).^(1/3);

x1=G+H;
x2=(-(G+H)./2)+((G-H)./2)*sq3;
x3=(-(G+H)/2)-((G-H)/2)*sq3;


y1=x1-(p/3)
y2=x2-(p/3)
y3=x3-(p/3)

end

