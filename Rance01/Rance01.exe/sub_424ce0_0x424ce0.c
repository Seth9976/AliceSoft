// 函数: sub_424ce0
// 地址: 0x424ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_3 = data_797d40
HANDLE hHandle = *eax_3

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    enum WAIT_EVENT eax
    eax.b = 1
    return eax

sub_4234a0(eax_3)
HANDLE eax_2
eax_2.b = 0
return eax_2
