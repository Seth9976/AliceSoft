// 函数: sub_40bab0
// 地址: 0x40bab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
sub_406b20(ecx, &arg1[0xba])
int32_t eax = arg1[0xb3]
enum MESSAGEBOX_RESULT result

if (eax == 0)
    void* ecx_1 = arg1[0xb1]
    
    if (ecx_1 != 0 && arg1 != 0xfffffd74)
        sub_437480(*arg1, ecx_1, arg1[0x9f], arg1[0xa0], &arg1[0xa3])
        result.b = 1
        return result
else if (eax == IDOK && sub_40bb10(arg1).b != 0)
    result.b = 1
    return result

result.b = 0
return result
