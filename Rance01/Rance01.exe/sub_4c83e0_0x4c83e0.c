// 函数: sub_4c83e0
// 地址: 0x4c83e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x1d0)

if (edi == 0)
    return 

if (*(arg1 + 0x1d8) == 0)
    int32_t ecx
    sub_4ac220(ecx, arg1 + 0x1d8)
    
    if (edi == 0)
        unimplemented  {fldz }
        return 
    
    if (sub_4ac290(edi, arg1 + 0x1d8) == 0)
        unimplemented  {fldz }
        return 
    
    char eax
    int80_t st0_1
    st0_1, eax = sub_4ac2f0(arg1 + 0x1d8)
    
    if (eax == 0)
        unimplemented  {fldz }
        return 
    
    *(arg1 + 0x1d8) = 1

unimplemented  {fld st0, dword [esp+0x10]}
float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
unimplemented  {fstp dword [esp+0x4], st0}
unimplemented  {fld st0, dword [esp+0x14]}
float var_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
unimplemented  {fstp dword [esp], st0}
sub_4ac790(arg1 + 0x1d8, var_10, var_c_2)
unimplemented  {call 0x4ac790}
