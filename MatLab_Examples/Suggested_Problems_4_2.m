%Find transfer function 3 which is = transferfunction1*transferfunction2
%if 1 =(s^2+3s+2)/(s^5+4s^3+2) * 2 = (s^3+s^2+1)/(s^6+4s^4+3s^3+5)
num1 = [1 3 2];
den1 = [1 0 4 0 0 2];
tf1 = tf(num1,den1)
disp(tf1);
num2 = [1 1 0 1];
den2 = [1 0 4 3 0 0 5];
tf2 = tf(num2,den2)
disp(tf2);
num3 = conv(num1,num2);%convolution numerator or denominator coefficents gives multiplication of two polynomials
den3 = conv(den1,den2);
tf3 = tf(num3,den3)

