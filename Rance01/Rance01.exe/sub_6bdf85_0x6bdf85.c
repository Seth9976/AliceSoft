// 函数: sub_6bdf85
// 地址: 0x6bdf85
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
sub_6b5cd7(&var_14, nullptr)
data_797938 = 0
void* var_c
char var_8
uint32_t eax_1

if (arg1 == 0xfffffffe)
    data_797938 = 1
    eax_1 = GetOEMCP()
else if (arg1 != 0xfffffffd)
    if (arg1 != 0xfffffffc)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return arg1
    
    eax_1 = *(var_14 + 4)
    data_797938 = 1
else
    data_797938 = 1
    eax_1 = GetACP()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return eax_1
