%Problem 4
%Blake Bennice u85622879
%taylor series
function value=Exam1_4_Blake(x,n)
 k = 1; 
 i = 1; 
 num = 0; 
for loop=1:n
    num = num + k; 
    y = x^i;
    k = y / factorial(i); 
    i = i + 1; 
 end
disp(num)




