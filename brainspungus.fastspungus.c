//copyright john morris beck 2026 gpl2
fastspungus
function void brainspungus int* m
declare int* p0
declare int* p1
declare int i0
declare int i1
declare int i2
declare int* r0
declare int* r1
declare int* t
declare int j
declare int k
fastspungus
t=m+'i';
fastspungus
get i0 t
assign p0 t + 1
get i1 p0
assign p0 t + 2
get i2 p0
assign r0 m + i0
assign r1 m + i1
switch i2
fastspungus
case 'b':
fastspungus
get j r0
assign p0 m + j
get j r1
set p0 j
break
fastspungus
case '-':
fastspungus
get j r0
get k r1
assign j j - k
set r0 j
break
fastspungus
case '<':
fastspungus
get j r0
get k r1
assign j j < k
set r0 j
break
fastspungus
case 'm':
fastspungus
get j r0
get k r1
assign p0 m + j
assign p1 m + k
get j p1
set p0 j
break
fastspungus
end
fastspungus
get j t
assign j j + 3
set t j
end
fastspungus
