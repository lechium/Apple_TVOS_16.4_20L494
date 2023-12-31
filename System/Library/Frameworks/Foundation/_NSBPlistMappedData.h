//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSBPlistMappedData : NSData
{
    const void *ptr;	// 8 = 0x8
    unsigned long long size;	// 16 = 0x10
    unsigned long long mappingIndex;	// 24 = 0x18
    CDStruct_f10e9336 bplistTrailer;	// 32 = 0x20
    unsigned long long bplistOffset;	// 64 = 0x40
    unsigned char bplistMarker;	// 72 = 0x48
}

- (_Bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long *)arg2 trailer:(CDStruct_f10e9336 *)arg3;	// IMP=0x000000000042be0c
- (unsigned long long)_bplistObjectsRangeEnd;	// IMP=0x000000000042bdf7
- (unsigned long long)length;	// IMP=0x000000000042bde6
- (const void *)bytes;	// IMP=0x000000000042bdd5
- (long long)mappingIndex;	// IMP=0x000000000042bdc4
- (void)setMappingIndex:(long long)arg1;	// IMP=0x000000000042bdb3
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042bbf5
- (id)initWithBinaryPlistData:(const void *)arg1 size:(unsigned long long)arg2 trailer:(CDStruct_f10e9336)arg3 offset:(unsigned long long)arg4 marker:(unsigned char)arg5;	// IMP=0x000000000042bb28

@end

