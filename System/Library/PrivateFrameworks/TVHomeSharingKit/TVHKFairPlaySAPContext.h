//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVHKFairPlaySAPContext : NSObject
{
    void *_context;	// 8 = 0x8
}

+ (id)_fixedUpURLPathString:(id)arg1;	// IMP=0x00600000000a5a35
@property(nonatomic) void *context; // @synthesize context=_context;
- (id)_encryptData:(id)arg1;	// IMP=0x00000000000a5a2d
- (id)decryptData:(id)arg1;	// IMP=0x00000000000a5a25
- (id)signURLPathString:(id)arg1;	// IMP=0x00000000000a588f
- (void)dealloc;	// IMP=0x00000000000a5851
- (id)initWithFairPlaySAPContext:(void *)arg1;	// IMP=0x00000000000a5814
- (id)init;	// IMP=0x00000000000a57a5
- (id)new;	// IMP=0x00000000000a5776

@end
