a = 1
b = 1.64
c = 1.00000001

while((a*b) < 100) do
a = a * c
b = b * c
end
io.write(a)
