//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    int _openfd;	// 24 = 0x18
    const void *_activeMap;	// 32 = 0x20
    int _mapRefCount;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000002326ce
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000232798
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000232736
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000023271f
- (void)getBytes:(void *)arg1;	// IMP=0x00000000002326df
- (Class)classForCoder;	// IMP=0x00000000002326bd
- (const void *)bytes;	// IMP=0x0000000000232680
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000232601
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023259c
- (unsigned long long)hash;	// IMP=0x0000000000232582
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000232501
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x00000000002324ef
- (void)invalidate;	// IMP=0x00000000002324e5
- (unsigned long long)length;	// IMP=0x0000000000232205
- (id)description;	// IMP=0x0000000000232183
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000232149
- (void)dealloc;	// IMP=0x000000000023209d
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000231f45

@end

