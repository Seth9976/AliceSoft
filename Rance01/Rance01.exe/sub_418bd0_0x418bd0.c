// 函数: sub_418bd0
// 地址: 0x418bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
void* i = *(arg1 + 0x14)
int32_t* var_4

if (i != *(arg1 + 0x10))
    arg2 = ebp
    
    do
        void* ebx_1 = *(i - 4)
        
        if (ebp s> 0)
            sub_42e070(ebx_1 + 0x18, &var_4, &arg2)
            int32_t* ecx_2 = var_4
            int32_t** eax
            eax.b = ecx_2 != *(ebx_1 + 0x1c)
            
            if (eax.b != 0)
                int32_t* var_1c_4 = ebp
                return sub_415530(ecx_2, ebx_1 + 0x10)
        
        i -= 4
    while (i != *(arg1 + 0x10))

if (*(arg1 + 0x10) == *(arg1 + 0x14))
    int32_t var_1c_3 = sub_418fd0(arg1)
    sub_418a00(arg1)

void* esi_1 = *(*(arg1 + 0x10) + ((*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2 << 2) - 4)
var_4 = ebp

if (ebp s<= 0)
    return 0

int32_t edx_1 = sub_42e070(esi_1 + 0x18, &arg2, &var_4)
int32_t* eax_8 = arg2

if (eax_8 != *(esi_1 + 0x1c))
    return eax_8[4]

struct IInterface::guiengine::CGUIComponent::VTable** result = sub_415490(ebp, edx_1, esi_1 + 0x10)
arg2 = result
*sub_4ccf80(esi_1 + 0x18, &var_4) = result
int32_t eax_12 = *(esi_1 + 0x2c)
int32_t ecx_6

if (&arg2 u< eax_12)
    ecx_6 = *(esi_1 + 0x28)

if (&arg2 u>= eax_12 || ecx_6 u> &arg2)
    if (eax_12 == *(esi_1 + 0x30))
        sub_4307a0(esi_1 + 0x28)
    
    struct IInterface::guiengine::CGUIComponent::VTable*** eax_17 = *(esi_1 + 0x2c)
    
    if (eax_17 != 0)
        *eax_17 = result
else
    if (eax_12 == *(esi_1 + 0x30))
        sub_4307a0(esi_1 + 0x28)
    
    int32_t* eax_14 = *(esi_1 + 0x2c)
    
    if (eax_14 != 0)
        *eax_14 = *(*(esi_1 + 0x28) + ((&arg2 - ecx_6) s>> 2 << 2))
        *(esi_1 + 0x2c) += 4
        return result

*(esi_1 + 0x2c) += 4
return result
