//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBArchiveDelegateImpl : NSObject
{
    unsigned int _flags;	// 8 = 0x8
    struct objc_ptr<NSData *> _metadata;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000008cca
- (void).cxx_destruct;	// IMP=0x0000000000008cbb
- (struct CGFont *)decodedCGFontWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008bbb
- (id)encodedCGFontData:(struct CGFont *)arg1 error:(id *)arg2;	// IMP=0x0000000000008afc
- (const void *)decodedImageContentsWithData:(id)arg1 type:(int *)arg2 error:(id *)arg3;	// IMP=0x00000000000087af
- (id)encodedImageData:(CDStruct_27041886)arg1 error:(id *)arg2;	// IMP=0x000000000000852c
- (void)decodedMetadata:(id)arg1;	// IMP=0x00000000000084fe
- (id)encodedMetadata;	// IMP=0x00000000000084f4
- (id)initWithFlags:(unsigned int)arg1;	// IMP=0x00000000000084b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
