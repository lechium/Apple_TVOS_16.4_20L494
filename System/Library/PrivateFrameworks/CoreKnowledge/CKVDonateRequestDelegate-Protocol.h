//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKVDonateRequest, CKVDonateRequestValidator, CKVIndexUpdaterFactory;

@protocol CKVDonateRequestDelegate
- (void)completeRequest:(CKVDonateRequest *)arg1;
- (void)submitRequest:(CKVDonateRequest *)arg1;
- (CKVIndexUpdaterFactory *)updaterFactory;
- (CKVDonateRequestValidator *)requestValidator;
@end
