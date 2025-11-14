// 函数: sub_6d0080
// 地址: 0x6d0080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2
int32_t ecx = arg3
int32_t edi = 0
int32_t edx = arg1[3]
int32_t ebp_1
int32_t esi_1

if (ecx s<= edx)
    ebp_1 = *arg1
    esi_1 = arg1[1]
else
    int32_t ebp = ecx
    int32_t esi = 0
    
    while (true)
        char* edi_1 = arg1[4]
        
        if (edi_1 u>= arg1[6])
            esi = sub_6cff40(arg1)
            
            if (esi != 0)
                return esi
            
            edx = arg1[3]
            edi_1 = arg1[4]
        
        ebp -= edx
        uint32_t edx_3 = (zx.d((arg2 s>> ebp.b).b) & zx.d((1 << edx.b).b - 1)) | zx.d((*arg1).b)
        arg1[4] = &edi_1[1]
        *edi_1 = edx_3.b
        arg1[7] += 1
        
        if (edx_3 == 0xff)
            char* edx_6 = arg1[4]
            
            if (edx_6 u>= arg1[6])
                esi = sub_6cff40(arg1)
                
                if (esi != 0)
                    return esi
                
                edx_6 = arg1[4]
            
            arg1[4] = &edx_6[1]
            *edx_6 = 0
            arg1[7] += 1
        
        edx = 8
        
        if (ebp s<= 8)
            break
        
        arg1[3] = 8
        *arg1 = 0
        arg1[1] = 0
    
    ecx = ebp
    edi = esi
    eax = arg2
    ebp_1 = 0
    esi_1 = 0

int32_t edx_4 = edx - ecx
arg1[3] = edx_4
int32_t eax_8 = (eax & ((1 << ecx.b) - 1)) << edx_4.b
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = sx.q(eax_8)
*arg1 = ebp_1 | eax_8
arg1[1] = esi_1 | edx_5
return edi
