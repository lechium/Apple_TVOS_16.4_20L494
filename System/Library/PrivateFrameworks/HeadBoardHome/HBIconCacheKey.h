//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HBIconCacheKey : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000052779
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000526c7
@property(readonly) unsigned long long hash;
- (id)initWithStringValue:(id)arg1;	// IMP=0x0000000000052618
- (id)initWithSubkeys:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000523cc
- (id)initWithApplicationInfo:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000052245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

