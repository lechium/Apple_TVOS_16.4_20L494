//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SIBCApplicationConfigurationMessage : NSObject
{
    NSArray *_appConfigurations;	// 8 = 0x8
}

+ (id)messageId;	// IMP=0x00100000000044d2
- (void).cxx_destruct;	// IMP=0x00000000000044f0
@property(readonly, nonatomic) NSArray *appConfigurations; // @synthesize appConfigurations=_appConfigurations;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x00000000000044c4
- (id)dictionaryEncoding;	// IMP=0x000000000000426c
- (id)initWithAppConfigurations:(id)arg1;	// IMP=0x0000000000004201

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
