//copyright john morris beck 2026 gpl2
fastspungus
function brainspungus i
declare int* p0
declare int* p1
declare int i0
declare int i1
declare int i2
declare int* r0
declare int* r1
declare int t
declare int* m
declare int* n
assign m (int*)i
assign t *m
assign p0 m + t
assign i0 *p0
assign p0 p0 + 1
assign i1 *p0
assign p0 p0 + 1
assign i2 *p0
assign r0 m + i0
assign r1 m + i1
switch( i2
case 0 
assign n m + *r0
assign *n *r1
break;
case 1
assign *r0 *r0 - *r1
break;
case 2
assign *r0 *r0 < *r1
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
assign p0 realloc(m,*r0)
assign *r0 p0 != NULL
switch( *r0
case 0
break;
default:
assign m p0
break;
}
break;
}
assign *m *m + 3
declare return (void*)m
}
fastspungus
