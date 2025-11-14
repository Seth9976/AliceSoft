// 函数: __FindAndUnlinkFrame
// 地址: 0x6bb65a
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t* result

if (arg1 != __getptd()[0x26])
    result = __getptd()[0x26]
    
    while (true)
        if (result[1] == 0)
            noreturn _inconsistency() __tailcall
        
        uint32_t* result_1 = result[1]
        
        if (arg1 == result_1)
            break
        
        result = result_1
    
    result[1] = *(arg1 + 4)
else
    result = __getptd()
    result[0x26] = *(arg1 + 4)

return result
