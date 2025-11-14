// 函数: sub_582570
// 地址: 0x582570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = (*(*arg2 + 0x10))()
int32_t eax_3 = (*(*arg2 + 0x14))()
arg5 = sub_70c710(fconvert.t(arg5) * fconvert.t(255.0))
char* edi = (*(*arg2 + 8))(0, 0)
char* ebx = (*(*arg4 + 8))(0, 0)
void* ebp = (*(*arg3 + 8))(0, 0)
int32_t esi_3 = eax_1 * 4
int32_t eax_13 = (*(*arg2 + 0x1c))() - esi_3
int32_t eax_16 = (*(*arg4 + 0x1c))() - esi_3
int32_t* edx_8 = nullptr
int32_t* result = (*(*arg3 + 0x1c))() - esi_3
arg3 = result
arg4 = nullptr

if (eax_3 s> 0)
    do
        int32_t ecx_8 = 0
        
        if (eax_1 s> 0)
            do
                if (zx.d(*(*((edx_8 s>> 4) * 4 + *(arg1 + 0xc)) + (ecx_8 s>> 4))) s< arg5)
                    *edi = *ebp
                    void* edx_10
                    edx_10.b = *(ebp + 1)
                    edi[1] = edx_10.b
                    edi[2] = *(ebp + 2)
                else
                    *edi = *ebx
                    uint32_t eax_22
                    eax_22.b = ebx[1]
                    edi[1] = eax_22.b
                    edi[2] = ebx[2]
                
                ecx_8 += 1
                edi = &edi[4]
                ebx = &ebx[4]
                ebp += 4
            while (ecx_8 s< eax_1)
            
            result = arg3
            edx_8 = arg4
        
        edi = &edi[eax_13]
        ebx = &ebx[eax_16]
        edx_8 += 1
        ebp += result
        arg4 = edx_8
    while (edx_8 s< eax_3)

result.b = 1
return result
