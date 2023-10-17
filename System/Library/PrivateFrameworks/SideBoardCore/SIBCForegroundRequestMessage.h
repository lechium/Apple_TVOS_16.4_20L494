//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SIBCForegroundRequestMessage : NSObject
{
    NSString *_applicationId;	// 8 = 0x8
    NSDictionary *_appData;	// 16 = 0x10
}

+ (id)responseMessageId;	// IMP=0x0010000000012a6c
+ (id)messageId;	// IMP=0x0010000000012a58
- (void).cxx_destruct;	// IMP=0x0000000000012a8a
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x0000000000012a4a
- (id)dictionaryEncoding;	// IMP=0x0000000000012913
- (id)initWithApplication:(id)arg1 appData:(id)arg2;	// IMP=0x0000000000012867

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
