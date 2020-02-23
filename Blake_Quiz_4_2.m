clear;clc;
%X=fopen('Volt_Imped.txt','r');
%fscanf(X,'%f %f %f %f', &a, &b ,&c ,&d);


A=load('Volt_Imped.txt');

for n=1:10;
    Current(n,1)=A(n,1)/A(n,3);
    Current(n,2)=A(n,2)-A(n,4);
end;
disp('10 numbers of currents'' Magnitudes and Phase Angles were calculated completed and the result is saved on Current.txt.');
save Current.txt Current -ASCII