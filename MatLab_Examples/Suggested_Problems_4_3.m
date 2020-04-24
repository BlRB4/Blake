% Use result from problem 2 on [Transfer Function3], reconstruct [Transfer Function 2] 
%from [Transfer Function3] and [Transfer Function1].

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

%question 3
num2_rec = deconv(num3,num1);%deconvolution gives a polynomial out of two polynomials
den2_rec = deconv(den3,den1);
tf2_rec = tf(num2_rec,den2_rec)











