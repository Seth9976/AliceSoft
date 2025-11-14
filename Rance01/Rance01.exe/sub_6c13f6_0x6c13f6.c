// 函数: sub_6c13f6
// 地址: 0x6c13f6
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

PWSTR eax = GetEnvironmentStringsW()
PWSTR ebx = eax

if (ebx == 0)
    return nullptr

if (*ebx != 0)
    while (true)
        eax = &eax[1]
        
        if (*eax == 0)
            eax = &eax[1]
            
            if (*eax == 0)
                break

int32_t edi
int32_t var_1c_1 = edi
int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, ebx, ((eax - ebx) s>> 1) + 1, nullptr, 0, nullptr, nullptr)
PSTR var_8_1
PSTR lpMultiByteStr

if (cbMultiByte != 0)
    lpMultiByteStr = sub_6b8223(cbMultiByte)
    var_8_1 = lpMultiByteStr

PSTR result

if (cbMultiByte == 0 || lpMultiByteStr == 0)
    FreeEnvironmentStringsW(ebx)
    result = nullptr
else
    if (WideCharToMultiByte(0, 0, ebx, ((eax - ebx) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
            nullptr, nullptr) == 0)
        __free_base(var_8_1)
        var_8_1 = nullptr
    
    FreeEnvironmentStringsW(ebx)
    result = var_8_1

return result
