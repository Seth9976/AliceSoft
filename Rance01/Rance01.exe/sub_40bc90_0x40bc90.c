// 函数: sub_40bc90
// 地址: 0x40bc90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1[0xb3]
enum MESSAGEBOX_RESULT result

if (eax == 0)
    result = arg1[0xb1]
    
    if (result != 0)
        result = *result
        
        if (result != 0 && (*(*result + 0x10))().b != 0 && sub_40bab0(arg1).b != 0)
            result.b = 1
            return result
else if (eax == 1)
    result = arg1[0xb2]
    
    if (result != 0 && *(result + 0x7c) != 0 && (*(**(result + 0x7c) + 0x10))().b != 0
            && sub_40bab0(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
