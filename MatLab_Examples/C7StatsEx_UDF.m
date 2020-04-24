function [avg, stdev] = stats( x )
% Mean and standard deviation
% Returns mean (avg) & standard deviation (stdev) of the data in the vector
% x using matlab functions
avg = mean(x);
stdev = std(x);
%now test in cmd window with r=rand(100,1); [a, s]=stats(r)