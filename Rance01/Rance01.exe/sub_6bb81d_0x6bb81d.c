// 函数: sub_6bb81d
// 地址: 0x6bb81d
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t lpTlsValue = TlsGetValue(data_78c4ac)

if (lpTlsValue == 0)
    lpTlsValue = DecodePointer(data_79786c)
    TlsSetValue(data_78c4ac, lpTlsValue)

return lpTlsValue
