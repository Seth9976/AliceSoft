// 函数: sub_50c320
// 地址: 0x50c320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t* edi = arg2
void** ecx_1 = edi
struct IMemory::common::CIMemory::VTable** eax_1

if (sub_50d0f0(edi, arg1) == 0)
    if (sub_4ae840(ecx_1, arg1 + 0x30).b != 0)
        eax_1 = sub_4ae920(edi, arg1 + 0x30)
        *arg3 = eax_1
        
        if (eax_1 == 0)
            if (edi[5] u>= 0x10)
                edi = *edi
            
            int32_t* var_10_2 = edi
            sub_51ddc0(0x7542f8)
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 0
            return eax_2
else
    eax_1 = sub_50c390(ecx_1, arg1)
    
    if (eax_1.b == 0)
        return eax_1

eax_1.b = 1
return eax_1
