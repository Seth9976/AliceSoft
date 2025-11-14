// 函数: sub_6bbb8f
// 地址: 0x6bbb8f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")

if (hModule == 0)
    sub_6bb86e()
    return 0

data_797868 = GetProcAddress(hModule, "FlsAlloc")
data_79786c = GetProcAddress(hModule, "FlsGetValue")
data_797870 = GetProcAddress(hModule, "FlsSetValue")
int32_t eax_4 = GetProcAddress(hModule, "FlsFree")
bool cond:0 = data_797868 == 0
data_797874 = eax_4

if (cond:0 || data_79786c == 0 || data_797870 == 0 || eax_4 == 0)
    data_79786c = TlsGetValue
    data_797868 = sub_6bb7f4
    data_797870 = TlsSetValue
    data_797874 = TlsFree

uint32_t dwTlsIndex = TlsAlloc()
data_78c4ac = dwTlsIndex

if (dwTlsIndex != 0xffffffff && TlsSetValue(dwTlsIndex, data_79786c) != 0)
    sub_6b6e30()
    int32_t eax_6 = EncodePointer(data_797868)
    int32_t var_c_3 = data_79786c
    data_797868 = eax_6
    int32_t eax_7 = EncodePointer(var_c_3)
    int32_t var_c_4 = data_797870
    data_79786c = eax_7
    int32_t eax_8 = EncodePointer(var_c_4)
    int32_t var_c_5 = data_797874
    data_797870 = eax_8
    data_797874 = EncodePointer(var_c_5)
    
    if (sub_6bf464() != 0)
        int32_t eax_12 = DecodePointer(data_797868)(sub_6bb9f2)
        data_78c4a8 = eax_12
        
        if (eax_12 != 0xffffffff)
            uint32_t* eax_13 = __calloc_crt(1, 0x214)
            
            if (eax_13 != 0 && DecodePointer(data_797870)(data_78c4a8, eax_13) != 0)
                sub_6bb8ab(eax_13, 0)
                uint32_t eax_16 = GetCurrentThreadId()
                eax_13[1] = 0xffffffff
                *eax_13 = eax_16
                return 1
    
    sub_6bb86e()

return 0
