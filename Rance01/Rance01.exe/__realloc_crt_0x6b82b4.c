// 函数: __realloc_crt
// 地址: 0x6b82b4
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
uint32_t dwMilliseconds = 0
int32_t result
uint32_t i

do
    result = _realloc(arg1, arg2)
    
    if (result != 0)
        break
    
    if (arg2 == result)
        break
    
    if (data_79785c u<= result)
        break
    
    Sleep(dwMilliseconds)
    i = dwMilliseconds + 0x3e8
    
    if (i u> data_79785c)
        i = 0xffffffff
    
    dwMilliseconds = i
while (i != 0xffffffff)
return result
