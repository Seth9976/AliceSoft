// 函数: ?try_get_module@@YAPAUHINSTANCE__@@W4module_id@?A0x9b56aee1@@@Z
// 地址: 0x10006ab6
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t edi
int32_t var_8 = edi
int32_t ecx = *((arg1 << 2) + &data_10016f18)

if (ecx != 0)
    int32_t eax_2 = neg.d(ecx + 1)
    return sbb.d(eax_2, eax_2, ecx != 0xffffffff) & ecx

PWSTR lpLibFileName = (&data_1000fc18)[arg1]
HMODULE result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)

if (result == 0)
    if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = nullptr
    else
        result = LoadLibraryExW(lpLibFileName, result, result)
    
    if (result == 0)
        *((arg1 << 2) + &data_10016f18) = 0xffffffff
        return nullptr

int32_t temp0_1 = *((arg1 << 2) + &data_10016f18)
*((arg1 << 2) + &data_10016f18) = result

if (temp0_1 != 0)
    FreeLibrary(result)

return result
