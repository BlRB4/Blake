%Problem 2
%Blake Bennice u85622879
%ROW -->
%COL VVV
A=load('Coordinate.txt');
B=A(:,1);
C=A(:,2);
D=A(:,3);
S=size(A);
for n=1:10
  Spherical_Points(n,1)=sqrt(((B(n,1)).^2)+(C(n,1).^2)+(D(n,1).^2)); 
  Spherical_Points(n,2)=atan((C(n,1))./B(n,1));
  Spherical_Points(n,3)=atan((sqrt((B(n,1).^2)+(C(n,1).^2)))./(D(n,1)));
end

save Spherical.txt Spherical_Points -ASCII

disp('There are ')
disp(S)
disp('points the file Coordinate.txt. The Conversion of points in Cartesian Coordinate system into')
disp('Spherical Coordinate System is completed and the result is saved on Spherical.txt');
