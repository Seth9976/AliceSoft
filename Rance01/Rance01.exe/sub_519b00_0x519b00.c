// 函数: sub_519b00
// 地址: 0x519b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *arg1; i != arg1[1]; i = &i[1])
    void* ebx_1 = *i
    int32_t* ecx_1 = *(ebx_1 + 0x27c)
    
    if (ecx_1 != 0 && (*(*ecx_1 + 0x34))() == 0)
        char eax_2 = sub_51a100(*(ebx_1 + 0x290), ebx_1 + 0x27c, 
            fconvert.s(fconvert.t(*(ebx_1 + 0x280))), fconvert.s(fconvert.t(*(ebx_1 + 0x284))), 
            fconvert.s(fconvert.t(*(ebx_1 + 0x288))), fconvert.s(fconvert.t(*(ebx_1 + 0x28c))), 
            fconvert.s(fconvert.t(*(ebx_1 + 0x294))), fconvert.s(fconvert.t(*(ebx_1 + 0x298))))
        
        if (eax_2 == 0)
            return 0
    
    if (*(ebx_1 + 0x270) != 0 && (*(**(ebx_1 + 0x270) + 0x34))() == 0 && sub_514df0(ebx_1) == 0)
        return 0
    
    if (*(ebx_1 + 0x274) != 0 && (*(**(ebx_1 + 0x274) + 0x10))() == 0 && sub_514f30(ebx_1) == 0)
        return 0

int32_t* result
result.b = 1
return result
