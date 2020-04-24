tic
a=0; %number >= 0.5
b=0; %number <0.5
for n=1:5000
    r=rand;
    if r>=0.5
        a=a+1;
    else
        b=b+1;
    end;
end;
t=toc;
disp(['larger than 0.5:' num2str(a)])
disp(['time:' num2str(t)])
% so basically for n 1:5000 (5000 loops) we test if r is > or < to 0.5.
% if it happens that its greater than 0.5, we add one point to a side, vice
% versa
