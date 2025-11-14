// 函数: sub_5d3db0
// 地址: 0x5d3db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
CRITICAL_SECTION* lpCriticalSection = arg1[0xb]
int32_t arg_4 = arg_4
EnterCriticalSection(lpCriticalSection)
sub_42e070(&arg1[0xd], &var_4, &arg_4)
int32_t* ebx = var_4

if (ebx != arg1[0xe])
    (*(*ebx[4] + 4))()
    sub_436320(&arg1[0xd], &arg_4, ebx)

LeaveCriticalSection(arg1[0xb])
int32_t result
result.b = 1
return result
