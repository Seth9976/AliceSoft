// 函数: sub_40bbd0
// 地址: 0x40bbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
sub_406b20(ecx, &arg1[0xba])
int32_t* esi_1 = arg1[0xa0]
int32_t edx = arg1[0x9f]
uint32_t eax

if (arg1 == 0xfffffd74)
    eax.b = 0
    return eax

if (arg1 == 0xfffffd54)
    eax.b = 0
    return eax

int32_t eax_1 = arg1[0xb3]
int32_t eax_2

if (eax_1 == 0)
    int32_t* edi_1 = arg1[0xb1]
    
    if (edi_1 != 0)
        void* var_1c_2 = &arg1[0xa3]
        
        if (sub_43c310(edi_1, *arg1, edx, esi_1, fconvert.s(fconvert.t(arg2)), &arg1[0xa3], 
                &arg1[0xab]).b != 0)
            eax_2.b = 1
            return eax_2
else if (eax_1 == 1)
    char* esi_2 = arg1[0xb2]
    
    if (esi_2 != 0)
        void* ebx_1 = arg1[0xb5]
        
        if (ebx_1 != 0)
            void* var_14_1 = &arg1[0xa3]
            eax_2 = sub_437060(&arg1[0xa3], esi_1, esi_2, *(ebx_1 + 0xc), edx, &arg1[0xab], 
                fconvert.s(fconvert.t(arg2)))
            
            if (eax_2.b == 0)
                return eax_2
            
            eax_2.b = 1
            return eax_2

eax_2.b = 0
return eax_2
