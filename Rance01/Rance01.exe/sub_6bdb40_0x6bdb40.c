// 函数: sub_6bdb40
// 地址: 0x6bdb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
enum WIN32_ERROR edi_2

if (sub_6bcb93(arg1) == 0xffffffff)
    edi_2 = NO_ERROR
else
    void* eax_1 = data_798100
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_6bdb92:
        
        if (CloseHandle(sub_6bcb93(arg1)) != 0)
            edi_2 = NO_ERROR
        else
            edi_2 = GetLastError()
    else
        int32_t eax_2 = sub_6bcb93(2)
        
        if (sub_6bcb93(1) != eax_2)
            goto label_6bdb92
        
        edi_2 = NO_ERROR

sub_6bcb0d(arg1)
*((&data_798100)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (edi_2 == NO_ERROR)
    return 0

___acrt_errno_map_os_error(edi_2)
return 0xffffffff
