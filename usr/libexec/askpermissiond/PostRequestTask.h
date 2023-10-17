//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSBag, NSURL, NSUUID;

@interface PostRequestTask : AMSTask
{
    _Bool _canSendViaMessages;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSURL *_requestURL;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    AMSBag *_bag;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000011b95
@property(nonatomic) _Bool canSendViaMessages; // @synthesize canSendViaMessages=_canSendViaMessages;
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestIdentifierFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000119f6
- (id)_storeRequestWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000117fb
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x0010000000011423
- (id)perform;	// IMP=0x0010000000010ed7
- (id)initWithRequestURL:(id)arg1 account:(id)arg2;	// IMP=0x0010000000010deb

@end
