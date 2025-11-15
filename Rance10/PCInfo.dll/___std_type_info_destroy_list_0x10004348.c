// 函数: ___std_type_info_destroy_list
// 地址: 0x10004348
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

SLIST_ENTRY* result = InterlockedFlushSList(arg1)

if (result != 0)
    struct _SINGLE_LIST_ENTRY* Next
    
    do
        Next = result->Next
        __free_base(result)
        result = Next
    while (Next != 0)

return result
