//copyright john morris beck 2026 gpl2
fastspungus
function brainspungus m
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
get t int* m
assign p0 int* m + int t
get i0 int* p0
assign p0 int* p0 + int 1
get i1 int* p0
assign p0 int* p0 + int 1
get i2 int* p0
assign r0 int* m + int i0
assign r1 int* m + int i1
switch int i2
case int 0
get j int* r0
assign n int* m + int j
get j int* r1
set n int j
break;
case int 1
get j int* r0
get k int* r1
assign j int j - int k
set r0 int j
break;
case int 2
get j int* r0
get k int* r1
assign j int j < int k
set r0 int j
break;
case int 3
get j int* r0
get k int* r1
assign p0 int* m + int j
assign p1 int* m + int k
get j int* p1
set p0 int j
break;
case int 4
get j int* r0
assign j int j + int 3
set m int j
break;
}
get j int* m
assign j int j + int 3
set m int j
declare return m
}
fastspungus
