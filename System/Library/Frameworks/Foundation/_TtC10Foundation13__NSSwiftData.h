//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10Foundation13__NSSwiftData : NSData
{
    MISSING_TYPE *_backing;	// 8 = 0x8
    MISSING_TYPE *_range;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002be4b0
- (id)initWithData:(id)arg1;	// IMP=0x00000000002be3c0
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00000000002be2d0
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000002be220
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002be140
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002bdfb0
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bde10
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x00000000002bdca0
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2;	// IMP=0x00000000002bdc10
- (id)initWithBytes:(void *)arg1 length:(long long)arg2;	// IMP=0x00000000002bdbf0
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000002bdb30
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000002bda90
- (id)initWithBase64Encoding:(id)arg1;	// IMP=0x00000000002bda70
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x00000000002bda50
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000002bd960
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002bd7a0
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002bd650
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002bd5f0
- (id)init;	// IMP=0x00000000002bd590
- (_Bool)_providesConcreteBacking;	// IMP=0x00000000002bd580
- (_Bool)_isCompact;	// IMP=0x00000000002bd570
- (id)mutableCopyWithZone:(void *)arg1;	// IMP=0x00000000002bd4f0
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000002bd4e0
@property(nonatomic, readonly) void *bytes;
@property(nonatomic, readonly) long long length;

@end

