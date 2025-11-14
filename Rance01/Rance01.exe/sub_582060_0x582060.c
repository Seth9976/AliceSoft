// 函数: sub_582060
// 地址: 0x582060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2
int32_t eax_1 = (*(*edi + 0x10))()
int32_t eax_3 = (*(*edi + 0x14))()
(*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg4, 0, 0, eax_1, eax_3)
int32_t ebx_2 = ((sub_70c710(float.t(eax_1 + 0xe0) * fconvert.t(arg5)) + 0xf) & 0xfffffff0) - 0xe0
float i = 2.1019477e-44f
int32_t result = eax_1 - ebx_2
arg5 = 2.1019477e-44f
int32_t esi_2 = ebx_2
arg4 = result

do
    if (esi_2 s>= 0 && esi_2 s< eax_1)
        arg2 = i
        
        if (i i+ esi_2 s> eax_1)
            arg2 = result
        
        (*(***(arg1 + 4) + 0x10))(edi, esi_2, 0, arg3, esi_2, 0, arg2, eax_3)
        i = arg5
        result = arg4
    
    i -= 1
    result -= 0x10
    esi_2 += 0x10
    arg4 = result
    arg5 = i
while (i s> 0)

if (ebx_2 s> 0 && eax_1 s> 0)
    if (ebx_2 s> eax_1)
        ebx_2 = eax_1
    
    (*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg3, 0, 0, ebx_2, eax_3)

result.b = 1
return result
