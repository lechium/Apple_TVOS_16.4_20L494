//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKSandboxExtension : NSObject
{
    long long _handle;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000021105
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property long long handle; // @synthesize handle=_handle;
- (void)expel;	// IMP=0x000000000002102c
- (void)consume;	// IMP=0x0000000000020f3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020e90
- (void)dealloc;	// IMP=0x0000000000020e52
- (id)initWithExtension:(id)arg1;	// IMP=0x0000000000020ddf

@end

