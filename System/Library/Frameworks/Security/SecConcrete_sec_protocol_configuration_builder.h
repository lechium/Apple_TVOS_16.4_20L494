//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_protocol_configuration_builder : NSObject
{
    struct __CFDictionary *dictionary;	// 8 = 0x8
    _Bool is_apple;	// 16 = 0x10
}

- (id)initWithDictionary:(struct __CFDictionary *)arg1 andInternalFlag:(_Bool)arg2;	// IMP=0x00000000000422eb
- (id)init;	// IMP=0x000000000004225d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

