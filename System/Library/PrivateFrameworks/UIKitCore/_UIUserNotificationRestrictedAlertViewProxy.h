//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy
{
    id _delegate;	// 8 = 0x8
}

+ (id)restrictedProxyForAlertView:(id)arg1;	// IMP=0x001000000106ddd7
- (void).cxx_destruct;	// IMP=0x000000000106e1d3
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000106e027
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000106dfbc
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000106dee9
- (void)setDelegate:(id)arg1;	// IMP=0x000000000106de2a
- (id)delegate;	// IMP=0x000000000106de15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

