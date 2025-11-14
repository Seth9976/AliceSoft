// 函数: sub_6b3370
// 地址: 0x6b3370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = __chkstk(0x400c)
int32_t eax_1 = data_78c474 ^ &__return_addr
void** lpValueName = arg2
HKEY hKey = *arg1
uint8_t data
int128_t arg_9[0x3ff]
int32_t* result

if (hKey != 0)
    __return_addr = REG_SZ
    uint32_t lpcbData = 0x800
    data = 0
    sub_6bc670(&arg_9, 0, 0x3fff)
    
    if (lpValueName[5] u>= 0x10)
        lpValueName = *lpValueName
    
    result = RegQueryValueExA(hKey, lpValueName, nullptr, &__return_addr, &data, &lpcbData)

if (hKey == 0 || result != 0)
    result.b = 0
else
    uint8_t* eax_2 = &data
    uint8_t i
    
    do
        i = *eax_2
        eax_2 = &eax_2[1]
    while (i != 0)
    sub_401270(ecx, eax_2 - &arg_9, &data)
    result.b = 1

sub_6b4885(eax_1 ^ &__return_addr)
return result
