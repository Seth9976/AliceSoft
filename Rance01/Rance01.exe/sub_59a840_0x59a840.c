// 函数: sub_59a840
// 地址: 0x59a840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (**arg2)(arg1)
int32_t eax_3

if (eax_1 == 0xd)
    eax_3 = (*(*arg2 + 0xc))()

if (eax_1 != 0xd || eax_3 != 1)
    int32_t eax_5
    
    if ((**arg2)() != 0x11)
        eax_5.b = 0
        return eax_5
    
    if ((*(*arg2 + 0xc))() != 0xffffffff)
        eax_5.b = 0
        return eax_5

int32_t* esi = arg3
int32_t eax_9 = (esi[1] - *esi) s>> 4
void* eax_10 = *arg2

if (eax_9 s<= 0)
    (*(eax_10 + 0x20))()
    int32_t eax_11
    eax_11.b = 1
    return eax_11

int32_t __saved_ecx
char eax_12 = (*(eax_10 + 0x18))(&__saved_ecx, 1)

if (eax_12 == 0)
    return eax_12

int32_t ebx = 0

if (eax_9 s> 0)
    int32_t ebp_1 = 0
    
    while (true)
        int32_t esi_2 = *esi + ebp_1
        int32_t* eax_14
        int32_t* edx_7
        eax_14, edx_7 = (*(*arg2 + 0x10))(ebx)
        int32_t var_14_2 = esi_2
        int32_t ebx_1
        eax_12, ebx_1 = sub_599090(eax_14, edx_7)
        
        if (eax_12 == 0)
            return 0
        
        ebx = ebx_1 + 1
        ebp_1 += 0x10
        
        if (ebx s>= eax_9)
            break
        
        esi = arg3

return 1
