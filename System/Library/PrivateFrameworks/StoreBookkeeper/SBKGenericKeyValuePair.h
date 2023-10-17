//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject
{
    NSString *_kvsKey;	// 8 = 0x8
    NSData *_kvsPayload;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005e73
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0010000000005e07
- (void).cxx_destruct;	// IMP=0x0000000000005ddf
@property(readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property(readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
- (double)timestamp;	// IMP=0x0000000000005dc2
- (id)kvsValueDescription;	// IMP=0x0000000000005d38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005cca
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005bf0
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0000000000005b57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

