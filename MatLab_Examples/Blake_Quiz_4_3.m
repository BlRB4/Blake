

function Blake_Quiz_4_3(a,b)


if (a~=b)
    disp('You did not enter values equivalent to one another. I''m not doing that.');
    return
end;

for n=1:b
    A(1,n)=input(['Enter row 1 and column ' num2str(n) ' of matrix A\n']);
end;
for m=1:a
    A(2,m)=input(['Enter row 2 and column ' num2str(m) ' of matrix A\n']);
end;
    disp(A);
B(1,1)=input('Enter row 1 and column 1 of matrix B\n');
B(2,1)=input('Enter row 2 and column 1 of matrix B\n');
disp(B);
C=inv(A);
x=C*B;
disp(x);



