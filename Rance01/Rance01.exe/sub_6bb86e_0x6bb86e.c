// 函数: sub_6bb86e
// 地址: 0x6bb86e
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2 = data_78c4a8

if (eax_2 != 0xffffffff)
    DecodePointer(data_797874)(eax_2)
    data_78c4a8 = 0xffffffff

uint32_t dwTlsIndex = data_78c4ac

if (dwTlsIndex != 0xffffffff)
    TlsFree(dwTlsIndex)
    data_78c4ac = 0xffffffff

return sub_6bf4ae() __tailcall
