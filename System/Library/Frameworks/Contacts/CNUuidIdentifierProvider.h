//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUuidIdentifierProvider : NSObject
{
    NSString *_suffix;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bc4d0
- (id)makeIdentifier;	// IMP=0x00000000000bc448
- (id)initWithSuffix:(id)arg1;	// IMP=0x00000000000bc39c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
