// 函数: sub_50c290
// 地址: 0x50c290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
void** ecx_1 = edi
struct IMemory::common::CIMemory::VTable** eax_1

if (sub_50d0f0(edi, arg2) == 0)
    struct IMemory::common::CIMemory::VTable** ebx_1 = nullptr
    
    if (sub_4ae840(ecx_1, arg2 + 0x30).b != 0)
        ebx_1 = sub_4ae920(edi, arg2 + 0x30)
        
        if (ebx_1 == 0)
            if (edi[5] u>= 0x10)
                edi = *edi
            
            int32_t* var_18_2 = edi
            sub_51ddc0(0x7542f8)
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 0
            return eax_2
    
    struct IMemory::common::CIMemory::VTable** ecx_3 = *arg3
    
    if (ecx_3 != 0)
        (*ecx_3)->vFunc_1()
    
    *arg3 = ebx_1
else
    eax_1 = sub_50c390(ecx_1, arg2)
    
    if (eax_1.b == 0)
        return eax_1

eax_1.b = 1
return eax_1
