//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject
{
}

- (void)ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002f5a
- (_Bool)isSessionInfoExpired;	// IMP=0x0000000000002f52
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002eb7
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2;	// IMP=0x0000000000002e88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

