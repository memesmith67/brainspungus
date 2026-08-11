//copyright john morris beck 2026 gpl2
fastspungus
function brainspungus i
declare int* p0
declare int* p1
declare int i0
declare int i1
declare int i2
declare int r0
declare int r1
declare int t
assign m (int*)i
assign t *m
assign i0 m + t
assign i1 i0 + 1
assign i2 i0 + 2
assign r0 *i0
assign r1 *i1
switch( i2
case 0 
assign n m + *r1
assign *n *r2
break;
case 1
assign *r1 *r1 - *r2
break;
case 2
assign *r1 *r1 < *r2
break;
case 3
assign p0 m + *r0
assign p1 m + *r1
assign *p0 *p1
break;
case 4
assign *m *r0 - 3
break;
case 5
fastspungus
p0=realloc(m,*r0);
fastspungus
assign *r0 p0 == null
switch( *r0
case 0
break;
default:
assign m p0
break;
}
break;
}
assign *m t + 3
declare return (void*)m
}
fastspungus
