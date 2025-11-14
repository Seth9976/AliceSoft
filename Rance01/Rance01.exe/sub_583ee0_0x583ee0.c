// 函数: sub_583ee0
// 地址: 0x583ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t edi = *(arg1 + 0x14)
int32_t ebx = *(arg1 + 0x10)
int32_t eax = *(arg1 + 0xc)
int32_t* ebp = *(arg1 + 4)
(*(**ebp + 0x10))(eax, 0, 0, arg4, 0, 0, ebx, edi)
int32_t* ebp_1 = *ebp
arg4 = ebp_1
(*(*ebp_1 + 0x18))(eax, 0, 0, arg3, 0, 0, ebx, edi, 
    sub_70c710(fconvert.t(arg5) * fconvert.t(255.0)))
long double x87_r7_2 = fconvert.t(0.5f)
fconvert.t(arg5) - x87_r7_2
bool p = unimplemented  {test ah, 0x5}
int32_t eax_6
int32_t edx_3
edx_3:eax_6 = sx.q(*(arg1 + 0x10))
int32_t ebx_1

if (p)
    float edi_2 = (eax_6 - edx_3) s>> 1
    long double x87_r7_6 = (x87_r7_2 - fconvert.t(0.5)) * float.t(edi_2)
    ebx_1 = edi_2 i- sub_70c710(x87_r7_6 + x87_r7_6)
else
    long double x87_r7_3 = x87_r7_2 * float.t((eax_6 - edx_3) s>> 1)
    ebx_1 = sub_70c710(x87_r7_3 + x87_r7_3)

int32_t eax_13 = (*(**(arg1 + 0xc) + 0x14))()
int32_t eax_15 = (*(**(arg1 + 0xc) + 0x10))()
(*(***(arg1 + 4) + 0x54))(arg2, 0, 0, *(arg1 + 0xc), 0, 0, eax_15, eax_13, ebx_1)
int32_t result
result.b = 1
return result
