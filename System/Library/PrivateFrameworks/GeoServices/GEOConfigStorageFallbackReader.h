//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageFallbackReader : NSObject
{
    NSArray *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ddc2c
- (void)resync;	// IMP=0x00000000003ddb03
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x00000000003dd92b
- (id)initWithStorage:(id)arg1;	// IMP=0x00000000003dd8b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

