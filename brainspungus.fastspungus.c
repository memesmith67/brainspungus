//copyright john morris beck 2026 gpl2
fastspungus
function int* brainspungus int* m
declare int* p0
declare int* p1
declare int i0
declare int i1
declare int i2
declare int* r0
declare int* r1
declare int t
declare int* n
declare int j
declare int k
get t m
assign p0 m + t
get i0 p0
assign p0 p0 + 1
get i1 p0
assign p0 p0 + 1
get i2 p0
assign r0 m + i0
assign r1 m + i1
switch i2
case 'b'
get j r0
assign n m + j
get j r1
set n j
break;
case '-'
get j r0
get k r1
assign j j - k
set r0 j
break;
case '<'
get j r0
get k r1
assign j j < k
set r0 j
break;
case 'm'
get j r0
get k r1
assign p0 m + j
assign p1 m + k
get j p1
set p0 j
break;
case 'x'
get j r0
assign j j - 3
set m j
break;
}
get j m
assign j j + 3
set m j
declare return m
}
fastspungus
