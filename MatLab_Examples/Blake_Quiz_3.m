function [x] = Blake_Quiz_3(e)
diary ABC.txt
e=input('Enter amount of numbers to generate: ');
tic
a=0;
b=0;
c=0;

for n=1:e
    r=rand;
    if r<0.2  
        a=a+1;
    end;
    if r>=0.2 && r<=0.75
        b=b+1;
    end;
    if r>0.75
        c=c+1;
    end;
end;
disp(['Number of A''s (Less than 0.2):', num2str(a)])
disp(['Number of B''s (Between 0.2 and 0.75, values included):', num2str(b)])
disp(['Number of B''s (Greater than 0.75):', num2str(c)])
save ABC.txt
