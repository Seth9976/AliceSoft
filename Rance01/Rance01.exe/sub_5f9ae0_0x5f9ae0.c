// 函数: sub_5f9ae0
// 地址: 0x5f9ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result_2
struct partsengine::ISound::partsengine::CSound::VTable** ecx_1
result_2, ecx_1 = sub_5f9980(arg1, arg1 + 0x1c, arg2)
void* result_1 = result_2

if (result_1 == 0)
    void* result = sub_5f99d0(ecx_1, arg1, arg1 + 0x1c)
    result_1 = result
    
    if (result_1 == 0)
        return result

uint32_t eax_4 = zx.d(sub_5f9790(result_1, arg2))
int32_t eax_5 = neg.d(eax_4)
return sbb.d(eax_5, eax_5, eax_4 != 0) & result_1
