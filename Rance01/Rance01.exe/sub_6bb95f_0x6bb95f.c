// 函数: sub_6bb95f
// 地址: 0x6bb95f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_8 = edi
enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_6bb81d()(data_78c4a8)

if (result == 0)
    result = __calloc_crt(1, 0x214)
    
    if (result != 0)
        if (DecodePointer(data_797870)(data_78c4a8, result) == 0)
            __free_base(result)
            result = nullptr
        else
            sub_6bb8ab(result, 0)
            uint32_t eax_5 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_5

SetLastError(dwErrCode)
return result
