// 函数: sub_582180
// 地址: 0x582180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2
int32_t eax_1 = (*(*edi + 0x10))()
int32_t eax_3 = (*(*edi + 0x14))()
(*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg4, 0, 0, eax_1, eax_3)
int32_t ebx_3 = ((sub_70c710(float.t(eax_3 + 0xe0) * fconvert.t(arg5)) + 0xf) & 0xfffffff0) - 0xe0
int32_t i = 0xf
int32_t i_3 = eax_3 - ebx_3
arg4 = 0xf
int32_t esi_2 = ebx_3
arg2 = i_3
int32_t i_2 = i_3

do
    if (esi_2 s>= 0 && esi_2 s< eax_3)
        int32_t i_1 = i
        
        if (i + esi_2 s> eax_3)
            i_1 = i_2
        
        (*(***(arg1 + 4) + 0x10))(edi, 0, esi_2, arg3, 0, esi_2, eax_1, i_1)
        i = arg4
        i_2 = arg2
    
    i -= 1
    i_2 -= 0x10
    esi_2 += 0x10
    arg2 = i_2
    arg4 = i
while (i s> 0)

if (ebx_3 s> 0 && eax_3 s> 0)
    if (ebx_3 s> eax_3)
        ebx_3 = eax_3
    
    (*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg3, 0, 0, eax_1, ebx_3)

i.b = 1
return i
