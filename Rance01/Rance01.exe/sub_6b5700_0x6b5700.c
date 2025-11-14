// 函数: sub_6b5700
// 地址: 0x6b5700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
int32_t edi_1 = arg3
enum WIN32_ERROR ebx = NO_ERROR

if (edi_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return nullptr

sub_6bb81d()
void* lpParameter = __calloc_crt(1, 0x214)

if (lpParameter != 0)
    sub_6bb8ab(lpParameter, __getptd()[0x1b])
    *(lpParameter + 4) = 0xffffffff
    *(lpParameter + 0x58) = arg4
    int32_t* lpThreadId = arg6
    *(lpParameter + 0x54) = edi_1
    
    if (lpThreadId == 0)
        lpThreadId = &arg3
    
    HANDLE result = CreateThread(arg1, arg2, sub_6b569b, lpParameter, arg5, lpThreadId)
    
    if (result != 0)
        return result
    
    ebx = GetLastError()

__free_base(lpParameter)

if (ebx != NO_ERROR)
    ___acrt_errno_map_os_error(ebx)

return nullptr
