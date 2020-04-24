%Problem 1
%Blake Bennice u85622879
A=load('random_number.txt');
B=load('random_number.txt');
t=1:100;

C=1
D=0;

B(B>0.5)=C;
B(B<0.5)=D;

Three=abs(A-B);

subplot(3,1,1)
plot(t,A);
title('Received Signal with Distortion')
axis([ 0 100 -0.5 1.5])

subplot(3,1,2)
stem(t,B);
title('Reconstructed Digital Signal')
axis([ 0 100 -0.5 1.5])



subplot(3,1,3)
plot(t,Three);
title('The Difference Between Received Signal and Reconstructed Signal');
axis([ 0 100 -0.5 1.5])






