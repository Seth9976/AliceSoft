// 函数: ?try_get_module@@YAPAUHINSTANCE__@@W4module_id@?A0x89697e75@@@Z
// 地址: 0x10004ce6
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t eax = 0

if (0 == *((arg1 << 2) + &data_10016c1c))
    *((arg1 << 2) + &data_10016c1c) = 0
else
    eax = *((arg1 << 2) + &data_10016c1c)

if (eax != 0)
    int32_t eax_2 = neg.d(eax + 1)
    return sbb.d(eax_2, eax_2, eax != 0xffffffff) & eax

PWSTR lpLibFileName = (&data_1000f258)[arg1]
HMODULE result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)

if (result == 0)
    if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = nullptr
    else
        result = LoadLibraryExW(lpLibFileName, result, result)
    
    if (result == 0)
        *((arg1 << 2) + &data_10016c1c) = 0xffffffff
        return nullptr

int32_t temp0_1 = *((arg1 << 2) + &data_10016c1c)
*((arg1 << 2) + &data_10016c1c) = result

if (temp0_1 != 0)
    FreeLibrary(result)

return result
