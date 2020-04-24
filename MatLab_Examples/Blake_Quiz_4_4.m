syms s
clear; clc;
sys=tf2sym([1 5],[1 5 6]);
x1=exp(-3);
y1=sys*x1;
y1f=ilaplace(y1);





