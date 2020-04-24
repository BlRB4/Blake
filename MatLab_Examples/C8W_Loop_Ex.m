a=1000;
r=0.1;
bal = a;
year = 0;
disp('Year     Balance')

while bal < 2 * a
    bal = bal + r*bal;
    year = year + 1 ;
    disp( [year bal] )
end