// 函数: sub_553d70
// 地址: 0x553d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
uint32_t result = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
int32_t* ebx

if (arg2 u< result)
    ebx = *(*(arg1 + 8) + (arg2 << 2))
else
    ebx = nullptr

int32_t* edi

if (arg3 u< result)
    edi = *(*(arg1 + 8) + (arg3 << 2))
else
    edi = nullptr

if (ebx != 0 && edi != 0 && sub_54fbe0(ebx).b != 0)
    int32_t ecx_3
    result, ecx_3 = sub_5538d0(arg1, ebx, edi)
    
    if (result.b != 0)
        return sub_54fb30(ecx_3, ebx) != 0

result.b = 0
return result
