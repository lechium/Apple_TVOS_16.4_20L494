//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDIncomingCallFilterDataSource : NSObject
{
}

@property(readonly, copy, nonatomic) NSString *networkCountryCode;
- (void)setFilterBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a1a2
- (id)_callFilterIdentifier;	// IMP=0x001000000007a14f
- (void)dealloc;	// IMP=0x001000000007a120
- (id)init;	// IMP=0x001000000007a0f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

