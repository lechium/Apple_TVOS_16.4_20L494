//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface AXAssetsXPCActivity : NSObject
{
    NSObject<OS_xpc_object> *_activity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000139c0
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (id)_debugNameForXPCActivityState:(long long)arg1;	// IMP=0x0010000000013870
- (_Bool)deferIfNeeded;	// IMP=0x0010000000013810
@property(readonly, nonatomic) _Bool shouldDefer;
- (_Bool)updateState:(long long)arg1;	// IMP=0x0010000000013360
@property(readonly, nonatomic) long long state;
- (id)description;	// IMP=0x0010000000013200
- (id)initWithActivity:(id)arg1;	// IMP=0x0010000000013140

@end

