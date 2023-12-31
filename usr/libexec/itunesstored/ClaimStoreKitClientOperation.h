//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, StoreKitClientIdentity;

@interface ClaimStoreKitClientOperation : ISOperation
{
    NSData *_clientAuditTokenData;	// 96 = 0x60
    StoreKitClientIdentity *_clientIdentity;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000188fe0
- (void)run;	// IMP=0x00100000001887c0
@property(retain) NSData *clientAuditTokenData;
@property(readonly, copy) StoreKitClientIdentity *clientIdentity;
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x0010000000188639

@end

