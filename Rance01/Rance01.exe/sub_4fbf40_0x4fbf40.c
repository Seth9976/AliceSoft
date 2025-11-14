// 函数: sub_4fbf40
// 地址: 0x4fbf40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x50)
int32_t result = 0

for (; i != *(arg1 + 0x54); i = &i[1])
    void* eax = *i
    
    if (eax != 0)
        result += (*(eax + 0x2c) - *(eax + 0x28)) s/ 0xb4

return result
