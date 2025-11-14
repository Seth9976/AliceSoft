// 函数: sub_582290
// 地址: 0x582290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = (*(*arg2 + 0x10))()
int32_t eax_3 = (*(*arg2 + 0x14))()
(*(***(arg1 + 4) + 0x10))(arg2, 0, 0, arg4, 0, 0, eax_1, eax_3)
int32_t* edx_3 = eax_1
int32_t* esi_4 = ((sub_70c710(float.t(&eax_1[0x38]) * fconvert.t(arg5)) + 0xf) & 0xfffffff0) - 0xe0
int32_t i = 0xf
int32_t i_5 = edx_3 - esi_4
int32_t i_2 = 0xf
int32_t* ebx_1 = esi_4
arg4 = i_5

do
    if (ebx_1 s>= 0 && ebx_1 s< edx_3)
        int32_t i_3 = i
        
        if (i + ebx_1 s> eax_1)
            i_3 = i_5
        
        (*(***(arg1 + 4) + 0x10))(arg2, ebx_1, 0, arg3, ebx_1, 0, i_3, eax_3)
        edx_3 = eax_1
        i = i_2
        i_5 = arg4
    
    i -= 1
    i_5 -= 0x10
    ebx_1 = &ebx_1[4]
    arg4 = i_5
    i_2 = i
while (i s> 0)

if (esi_4 s> 0 && edx_3 s> 0)
    if (esi_4 s> edx_3)
        esi_4 = edx_3
    
    (*(***(arg1 + 4) + 0x10))(arg2, 0, 0, arg3, 0, 0, esi_4, eax_3)

int32_t ebx_4 = ((sub_70c710(float.t(eax_3 + 0xe0) * fconvert.t(arg5)) + 0xf) & 0xfffffff0) - 0xe0
int32_t i_1 = 0xf
float i_6 = eax_3 - ebx_4
arg4 = 0xf
int32_t esi_5 = ebx_4
arg5 = i_6

do
    if (esi_5 s>= 0 && esi_5 s< eax_3)
        float i_4 = i_1
        
        if (i_1 + esi_5 s> eax_3)
            i_4 = i_6
        
        (*(***(arg1 + 4) + 0x10))(arg2, 0, esi_5, arg3, 0, esi_5, eax_1, i_4)
        i_6 = arg5
        i_1 = arg4
    
    i_1 -= 1
    i_6 -= 0x10
    esi_5 += 0x10
    arg5 = i_6
    arg4 = i_1
while (i_1 s> 0)

if (ebx_4 s> 0 && eax_3 s> 0)
    if (ebx_4 s> eax_3)
        ebx_4 = eax_3
    
    (*(***(arg1 + 4) + 0x10))(arg2, 0, 0, arg3, 0, 0, eax_1, ebx_4)

i_1.b = 1
return i_1
