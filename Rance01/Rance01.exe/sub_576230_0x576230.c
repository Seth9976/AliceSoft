// 函数: sub_576230
// 地址: 0x576230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *arg1

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(*arg1)
    *arg1 = 0

int32_t __saved_ecx
HANDLE result = sub_6b5700(nullptr, 0, arg2, arg3, THREAD_CREATE_RUN_IMMEDIATELY, &__saved_ecx)

if (result == 0)
    result.b = 0
    return result

*arg1 = result
result.b = 1
return result
