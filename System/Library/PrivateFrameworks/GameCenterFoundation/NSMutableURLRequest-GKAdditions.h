//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x00600000000152be
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x0060000000014fde
- (void)setSAPversion:(id)arg1;	// IMP=0x00100000000160b2
- (void)setSAPSignature:(id)arg1;	// IMP=0x0010000000016004
- (void)setLocale:(id)arg1;	// IMP=0x0010000000015f4c
- (void)setInternal:(_Bool)arg1;	// IMP=0x0010000000015e77
- (void)setPushToken:(id)arg1;	// IMP=0x0010000000015d1e
- (void)setBuildVersion:(id)arg1;	// IMP=0x0010000000015c3a
- (void)setProtocolVersion:(id)arg1;	// IMP=0x0010000000015b56
- (void)setProcessName:(id)arg1;	// IMP=0x0010000000015a72
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x001000000001598e
- (void)setRestrictions:(id)arg1;	// IMP=0x001000000001588e
- (void)setStoreMode:(id)arg1;	// IMP=0x00100000000157c4
- (void)setGameDescriptor:(id)arg1;	// IMP=0x0010000000015437
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x0010000000015301
@end

