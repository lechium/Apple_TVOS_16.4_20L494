//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFResultUniString
{
    unsigned int _length;	// 16 = 0x10
}

+ (struct __CFAllocator *)cfDeallocator;	// IMP=0x0060000000079cfb
+ (unsigned long long)bufferOffset;	// IMP=0x0060000000079cee
+ (void)initialize;	// IMP=0x0060000000079c49
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000079e8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079e4e
- (unsigned long long)hash;	// IMP=0x0000000000079e20
- (unsigned long long)cStringLength;	// IMP=0x0000000000079e10
- (void)getCString:(char *)arg1;	// IMP=0x0000000000079ddb
- (_Bool)_isCString;	// IMP=0x0000000000079dd3
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000079d8a
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x0000000000079d4c
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000079d28
- (unsigned long long)length;	// IMP=0x0000000000079d18
- (const char *)UTF8String;	// IMP=0x0000000000079d08

@end

