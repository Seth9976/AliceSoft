// 函数: sub_6bbb21
// 地址: 0x6bbb21
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (data_78c4a8 != 0xffffffff)
    if (arg1 == 0 && TlsGetValue(data_78c4ac) != 0)
        arg1 = TlsGetValue(data_78c4ac)(data_78c4a8)
    
    DecodePointer(data_797870)(data_78c4a8, 0)
    sub_6bb9f2(arg1)

BOOL dwTlsIndex = data_78c4ac

if (dwTlsIndex == 0xffffffff)
    return dwTlsIndex

return TlsSetValue(dwTlsIndex, nullptr)
