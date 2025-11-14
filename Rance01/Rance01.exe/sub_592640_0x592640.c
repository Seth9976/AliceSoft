// 函数: sub_592640
// 地址: 0x592640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 0xc)
int32_t result

if (esi[0xd].b != 0)
    int32_t* eax_1 = **(*esi + 0x1c)
    
    if ((*(*eax_1 + 0xbc))(eax_1, &esi[7]) s< 0)
        result.b = 0
        return result
    
    esi[0xd].b = 0

result.b = 1
return result
