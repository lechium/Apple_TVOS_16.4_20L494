//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface SIBCOpenSessionRequestMessage : NSObject
{
    NSUUID *_hubIdentifier;	// 8 = 0x8
}

+ (id)responseMessageId;	// IMP=0x0010000000007679
+ (id)messageId;	// IMP=0x0010000000007665
- (void).cxx_destruct;	// IMP=0x0000000000007697
@property(readonly, nonatomic) NSUUID *hubIdentifier; // @synthesize hubIdentifier=_hubIdentifier;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x0000000000007657
- (id)dictionaryEncoding;	// IMP=0x0000000000007567
@property(readonly, copy) NSString *description;
- (id)initWithHubIdentifier:(id)arg1;	// IMP=0x0000000000007474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

